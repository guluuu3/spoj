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
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;

    graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );

    return graph;
}
int dp[100][100];
void mmc(struct Graph *graph)
{
    int n=graph->V;
    int m=graph->E;
    for (int i = 0; i < n; ++i)
    {
         memset(dp[i + 1], 0x7f, sizeof(dp[i + 1]));
         for (int j = 0; j < m; ++j)
         {
             int u = graph->edge[j].src, v = graph->edge[j].dest, w = graph->edge[j].weight;
             if (dp[i][u] != INT_MAX) dp[i + 1][v] = min(dp[i + 1][v], dp[i][u] + w);
         }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cot<<endl;
    }

    double res = DBL_MAX;
    for (int i = 0; i <n; ++i)
    {
        if (dp[n][i] == INT_MAX)
        {
            continue
        }

        double value = -DBL_MAX;
        for (int j = 0; j < n; ++j)
            {
                value = max(value, (double)(dp[n][i] - dp[j][i]) / (n - j));
            }
         res = min(res, value);
     }
     if(res!=INT_MAX)
     {
         cout<<res<<endl;
     }
     else if (res>10000)
         cout<<"No cycle exits";
     return ;
}


int main()
{
    FILE *fp=fopen("graph.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
    }
     int V,E,n;
     cout<<"enter the number of test cases : ";
     cin>>n;
     while(n--)
     {

    fscanf(fp,"%d",&V);
    fscanf(fp,"%d",&E);
    struct Graph* graph = createGraph(V, E);
        for(int i=0;i<E;i++)
    {

            fscanf(fp,"%d",&graph->edge[i].src);
            fscanf(fp,"%d",&graph->edge[i].dest);
            fscanf(fp,"%d",&graph->edge[i].weight);

    }

    mmc(graph);
cout<<endl;
     }

    return 0;
}
