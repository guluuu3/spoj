#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define pi pair<long long int,long long int>
#define INF LONG_LONG_MAX ;
#define MAX_VAL 1000000
long long int graph[100][100];
long long int dist[100][100];
long  long int V;


// Solves the all-pairs shortest path problem using Floyd Warshall algorithm
void floyd()
{

    int  i, j, k;


    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];


    for (k = 0; k < V; k++)
    {

        for (i = 0; i < V; i++)
        {

            for (j = 0; j < V; j++)
            {

                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Print the shortest distance matrix

}
int main()
{
    freopen("test.txt","r",stdin);

   int t;
   scanf("%d",&t);
   while(t--)
   {
       long long int m;
       scanf("%lld",&V);
       m=V-1;
       for(int i=0;i<V ;i++)
       {
           for(int j=0;j<V;j++)
           {
               graph[i][j]=INF;
           }
       }
        for(int i=0;i<V ;i++)
       {
           for(int j=0;j<V;j++)
           {
               graph[i][i]=0;
           }
       }

       for(long long int i=0;i<m;i++)
       {

           long long int x,y,z;
           scanf("%lld %lld %lld",&x,&y,&z);
           graph[x-1][y-1]=z;
           graph[y-1][x-1]=z;
       }
    floyd();
      for(int i=0;i<V;i++)
      {
          for(int j=0;j<V;j++)
          {
              cout<<dist[i][j]<< " ";
          }
          cout<<endl;
      }
   }
   return 0;
}
