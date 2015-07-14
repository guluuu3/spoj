
#include <stdio.h>



int** g_adj;            // adjacency matrix
int g_numV;             // number of vertices
int g_depth;            // current depth of the DFS
int* g_inCurr;          // list of all vertices in the current path
int* g_visited;         // list of all visited vertices
int* g_curr;            // list of all vertices in the current path
// NOTE: 'g_inCurr' is for printing purposes only!



// initialize the structures
void initialize(int verts) {
    g_depth = -1;
    g_numV = verts;
    g_adj = new int* [g_numV];
    g_visited = new int [g_numV];
    g_curr = new int [g_numV];
    for(int i=0;i<g_numV;i++) {
        g_visited[i] = 0;
        g_curr[i] = 0;
        g_adj[i] = new int [g_numV];
        for(int j=0;j<g_numV;j++) {
            g_adj[i][j] = 0;
        }
    }
    g_inCurr = new int [g_numV];
}

// populate adjacency matrix
void createAdjacencyMatrix(FILE* fp) {
    for(int i=0;i<g_numV;i++) {
        for(int j=0;j<g_numV;j++) {
            // no loops allowed!
            fscanf(fp, "%d", &(g_adj[i][j]));
            if(i == j) {
                g_adj[i][j] = 0;
            }
        }
    }
}

// clear the data
void finalize() {
#define SAFE_DELETE(ptr)  if(ptr != NULL) { delete ptr; ptr=NULL; }
    SAFE_DELETE(g_visited);
    SAFE_DELETE(g_curr);
    for(int i=0;i<g_numV;i++) {
        SAFE_DELETE(g_adj[i]);
    }
    SAFE_DELETE(g_adj);
    SAFE_DELETE(g_inCurr);
}

// informing the users about the cycles found
void printCycle(int curr) {
    if(g_depth < 0) {
        fprintf(stdout, "Bad/incorrect cycle!\n");
        return;
    }
    fprintf(stdout, "Cycle seen! ");
    int flag = 0;
    for(int i=0;i<=g_depth;i++) {
        // print only the cycle found in the current path!
        if(i == curr) {
            flag = 1;
        }
        if(flag) {
            fprintf(stdout, " %d", g_inCurr[i]);
        }
    }
    fprintf(stdout, " %d\n", curr);
}

// DFS algo!
void visitVertex(int idx) {
    // this array acts as a stack, storing the vertices
    // under the current path.
    g_depth++;
    g_inCurr[g_depth] = idx;
    // this will tell whether a given vertex in the graph
    // is part of the current path or not
    g_curr[idx] = 1;
    // do not visit the vertices which have already been
    // visited!
    g_visited[idx] = 1;
    // outward edges
    for(int i=0;i<g_numV;i++) {
        if(!g_adj[idx][i]) {
            continue;
        }
        if(g_visited[i]) {
            // already visited and is in the current path!
            // So, this has to be the cycle
            if(g_curr[i]) {
                printCycle(i);
            }
        }
        else {
            // else, continue with the DFS
            visitVertex(i);
        }
    }
    // since we are now about to back-track, restore
    // these variables to their 'original' state.
    // (NOTE: these variables keep track of the current
    //        path in order to print it out, if a cycle
    //        is found!)
    g_curr[idx] = 0;
    g_depth--;
}

// cycle-finder!
void findCycles() {
    for(int i=0;i<g_numV;i++) {
        if(!g_visited[i]) {
            visitVertex(i);
        }
    }
}




int main() {

    FILE* fp = fopen("example.txt", "r");
    if(fp == NULL) {
        printf( "Failed to open the file  for reading!\n");
        return 1;
    }
    int numVerts;
    fscanf(fp, "%d enter the number of vertices", &numVerts);
    initialize(numVerts);
    createAdjacencyMatrix(fp);
    fclose(fp);
    findCycles();
    finalize();
    return 0;
}

