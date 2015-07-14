#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define INT_MAXI 1061109567
 int n,m,k,src,dest;
long long int graph[10009][10009];
int min_distance(int dist[],bool spt[] )
{
    int mini=INT_MAXI;
    int min_index;
    for(int v=0;v<n;v++)
    {
        if(spt[v]==false&&dist[v]<=mini)
        {
            mini=dist[v];
            min_index=v;
        }
    }
    return min_index;
}
void dij()
{
    int dist[n+1];
    bool spt[n+1];
    for(int i=0;i<=n;i++)
    {
        dist[i]=INT_MAXI;
        spt[i]=false;
    }
    dist[src]=0;
    for(int c=0;c<n-1;c++)
    {
        int u=min_distance(dist,spt);
        spt[u]=true;
        for(int v=1;v<=n;v++)
        {
            if(spt[v]==false&&graph[u][v]&&dist[v]>dist[u]+graph[u][v]&& dist[u]!=INT_MAXI)
            {
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }
    printf("%d",dist[dest]);
}
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d %d %d",&n,&m,&k,&src,&dest);
    //int graph[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            graph[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        graph[x][y]=z;
    }
    for(int i=1;i<=k;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        graph[x][y]=z;
        graph[y][x]=z;
    }

    dij();
    }
    return 0;
}
