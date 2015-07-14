#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int n,m;
    scanf("%d %d",&n,&m);
     list<int>adjlist[105];
     int indegree[n+1];
      bool visited[n+1];
     for(int i=1;i<=n;i++)
     {
         indegree[i]=0;
         visited[i]=false;
     }
    for(int i=0;i<m;i++)
    {
        int x,k;
        scanf("%d",&x);
        scanf("%d",&k);

        indegree[x]=indegree[x]+k;

        for(int j=0;j<k;j++)
        {
            int node;
            scanf("%d",&node);
            adjlist[node].push_back(x);//incoming edges;
        }
    }
        list<int>q;

        //memset(visited,false,sizeof(visited));
        for(int i=1;i<=n;i++)
        {
            if(indegree[i]==0 && visited[i]==false)
            {
                q.push_back(i);
                //visited[i]=true;

            }
            while(!q.empty())
            {
               int v=q.front();
               printf("%d ",v);
               q.pop_front();
               visited[v]=true;
               list<int>::iterator it;
               for(it=adjlist[v].begin();it!=adjlist[v].end();it++)
               {
                   indegree[*it]--;
                   if( !indegree[*it])
                   {
                      q.push_back(*it);
                   }
               }
            }
        }
        printf("\n");
    return 0;
}
