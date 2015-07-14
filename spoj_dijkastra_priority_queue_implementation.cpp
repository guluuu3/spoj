#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define pi pair<int,int>

#define INF 1000000;
struct comp {
    bool operator() (const pi &a, const pi &b) {
        return a.second > b.second;
    }
};

priority_queue< pi, vector< pi>, comp > Q;
int main()
{
    //freopen("egypizza.txt","r",stdin);
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int src,dest;
       vector<pi>adjlist[11111];
       int n,m;
       scanf("%d %d",&n,&m);

       for(int i=0;i<m;i++)
       {
           int x,y,z;
           scanf("%d %d %d",&x,&y,&z);
           adjlist[x].push_back(pi(y,z));
       }

       scanf("%d %d",&src,&dest);
       int dist[n+1];
       for(int i=0;i<n+1;i++)
       {
           dist[i]=INF;
       }
       bool visited[n+1];
       for(int i=0;i<n+1;i++)
       {
           visited[i]=false;
       }
       //disjkastr//
       dist[src]=0;
       Q.push(pi(src,0));
       while(!Q.empty())
       {
           int u=Q.top().first;
           Q.pop();
           if(visited[u])
            continue;
           for(int i=0;i<adjlist[u].size();i++)
           {
               int v=adjlist[u][i].first;
               int w=adjlist[u][i].second;
               if(visited[v]==false && dist[v]>dist[u]+w)
               {
                   dist[v]=dist[u]+w;
                   Q.push(pi(v,dist[v]));
               }
           }
           visited[u]=true;
       }
       if ( dist[ dest] != 1000000 ) {
			printf( "%d\n", dist[dest ] );
		}
		else {
			printf( "NO\n" );
		}

   }
   return 0;
}
