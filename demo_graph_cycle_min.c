#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<climits>
#include<float.h>
using namespace std;
int dp[100][100];
struct Edge
{
    int src, dest, weight;
};
int max(int x,int y)
{

    return ((x>y)?x:y);
}
int min(int x,int y)
{

    return ((x<y)?x:y);
}
struct Graph
{

    int V, E;
    struct Edge* edge;
};

// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;
    graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );

    return graph;
}
// minimum mean cycle(allow negative weight)
void mmc(struct Graph *graph,int m)
{
int n=graph->V;
int E=E;
//cout<<
for (int i = 0; i < n; ++i)
    {
     memset(dp[i + 1], 0x7f, sizeof(dp[i + 1]));
for (int j = 0; j < m; ++j)
    {
    int u = graph->edge[j].src, v = graph->edge[j].des, w = graph->edge[j].weight;
if (dp[i][u] != INT_MAX) dp[i + 1][v] = min(dp[i + 1][v], dp[i][u] + w);
}
}
double res = DBL_MAX;
for (int i = 1; i <= n; ++i) {
if (dp[n][i] == INT_MAX) continue;
double value = -DBL_MAX;
for (int j = 0; j < n; ++j) {
value = max(value, (double)(dp[n][i] - dp[j][i]) / (n - j));
}
res = min(res, value);
}
if(res!=INT_MAX)
cout<<res;
else
    cout<<"No cycle exits";
return ;
}



int main()
{
    /* Let us create the graph given in above example */
    int V = 4;  // Number of vertices in graph
    int E = 4;  // Number of edges in graph
    struct Graph* graph = createGraph(V, E);

    // add edge 0-1 (or A-B in above figure)
    graph->edge[1].src = 0;
    graph->edge[1].dest = 1;
    graph->edge[1].weight = 1;

    // add edge 0-2 (or A-C in above figure)
    graph->edge[2].src = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 1;

    // add edge 1-2 (or B-C in above figure)


    // add edge 1-3 (or B-D in above figure)


    // add edge 4-3 (or E-D in above figure)
    graph->edge[3].src = 2;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 1;

     graph->edge[4].src = 3;
    graph->edge[4].dest = 0;
    graph->edge[4].weight = 1;

    mmc(graph);

    return 0;
}
