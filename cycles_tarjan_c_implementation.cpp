#include<iostream>
#include <cstdio>
#include<list>
#include<stack>
using namespace std;

int** g_adj;            // adjacency matrix
int g_numV;             // number of vertices
stack<int>current_stack;
stack<int>marked_stack;
bool* marked;
int s;

// initialize the structures
void initialize(int verts)
{

    g_numV = verts;
    g_adj = new int* [g_numV];
    marked = new bool [g_numV];


    for(int i=0;i<g_numV;i++)
	{
        marked[i]=false;
        g_adj[i] = new int [g_numV];
        for(int j=0;j<g_numV;j++)
		{
            g_adj[i][j] = 0;
        }
    }

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



void print_current_stack()
{
	for(stack<int>dump=current_stack;!dump.empty();dump.pop())
    {
        cout<<dump.top()<< " ";
       //mylist.pop();
    }
}

// DFS algo!
bool visitVertex(int v)
{
	bool flag =false;
    current_stack.push(v);
	marked_stack.push(v);
	marked[v]=true;
    for(int i=0;i<g_numV;i++)
		{
        if(!g_adj[v][i])
		{
            continue;
        }
        if (i<s)
			return 0;
		else if(i==v)
		{
			print_current_stack();
			flag=true;
		}
		else if(!marked[i])
		{
			flag= (flag | visitVertex(i));
		}
        }
	if (flag==true)
	{
		while(marked_stack.top()!=v)
		{
            int x=marked_stack.top();
            marked[x]=false;
            marked_stack.pop();
		}
		marked_stack.pop();
        marked[v]=false;
	}
    current_stack.pop();
	return flag;

}

// cycle-finder!
void findCycles()
{
    int u;
    for( s=0;s<g_numV;s++)
	{
      visitVertex(s);
      while(!marked_stack.empty())
	  {
		u=marked_stack.top();
        marked[u]=false;
        marked_stack.pop();
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
    //finalize();
    return 0;
}

