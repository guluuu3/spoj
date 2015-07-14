#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define MAXN 100001
list<int>adjlist[MAXN];
bool visited[MAXN];
list<int>s;
void topological(int v)
{
    visited[v]=true;
    list<int>::iterator i;
    for(i=adjlist[v].begin();i!=adjlist[v].end();i++)
    {
        if(!visited[*i])
        {
            topological(*i);
        }
    }
    s.push_back(v);
}
int main()
{
    freopen("test.txt","r",stdin);
    int n, k;
    scanf("%d%d", &n, &k);
    int w;
    for (int i = 1; i <= k; ++i)
        {
        scanf("%d", &w);

        int node;
        for (int j = 0; j < w; ++j)
            {
            scanf("%d", &node);
            adjlist[node].push_back(i);
            }
       }
       memset(visited,0,sizeof(visited));
       for(int i=1;i<=n;i++)
       {
           if(!visited[i])
           {
               topological(i);
           }
       }
     /*  while(!s.empty())
       {
           int x=s.front();
           cout<<x<<endl;
           s.pop_front();
       }*/
       int prev=0;
       int parent[MAXN];
       while(!s.empty())
       {
           int x=s.front();
           parent[x]=prev;
           prev=x;
           s.pop_front();
       }
   for(int i=1;i<=n;i++)
   {
       printf("%d\n",parent[i]);
   }
       return 0;
}
