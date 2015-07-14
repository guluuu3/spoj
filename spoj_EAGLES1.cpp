#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define pi pair<long long int,long long int>

#define INF LONG_LONG_MAX ;
#define MAX_VAL 200000

long long int dist[MAX_VAL];
bool visited[MAX_VAL];
vector<pi>adjlist[2*MAX_VAL];
priority_queue< pi> Q;
long long int bfs(int src)
{
     dist[src]=0;
       Q.push(pi(src,0));
       long long int maxi=dist[src];
       while(!Q.empty())
       {
           long long int u=Q.top().first;
           //cout<<u<<" ";
           Q.pop();
           if(visited[u])
            continue;
           for(long long int i=0;i<adjlist[u].size();i++)
           {
               long long int v=adjlist[u][i].first;
               long long int w=adjlist[u][i].second;
               if(visited[v]==false && dist[v]<dist[u]+w)
               {
                   dist[v]=dist[u]+w;
                   Q.push(pi(v,dist[v]));
                   maxi=max(maxi,dist[v]);
               }
           }
           visited[u]=true;
       }
return maxi;
}
int main()
{
    //freopen("test.txt","r",stdin);
   int t;
   scanf("%d",&t);
   while(t--)
   {


       long long int n,m;

       scanf("%lld",&n);
       for(int i=0;i<2*MAX_VAL;i++)
       {
           adjlist[i].clear();
       }
       m=n-1;
       for(int i=0;i<m;i++)
       {
           long long int x,y,z;
           scanf("%lld %lld %lld",&x,&y,&z);
           adjlist[x].push_back(pi(y,z));
           adjlist[y].push_back(pi(x,z));
       }


      for(long long int src=1;src<=n;src++)
      {

       for(long long int i=0;i<n+1;i++)
       {
           dist[i]=0;
       }

       for(long long int i=0;i<n+1;i++)
       {
           visited[i]=false;
       }


       printf("%lld ",bfs(src));
      }


   }
   return 0;
}
