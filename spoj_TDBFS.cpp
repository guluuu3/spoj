#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
void dfs(int u,list<long long int>*adjlist,bool visited[])
{
    visited[u]=true;
    printf("%d ",u);
    list<long long int>::iterator i;
    for(i=adjlist[u].begin();i!=adjlist[u].end();i++)
    {
        if(!visited[*i])
        {
            dfs(*i,adjlist,visited);
        }
    }
}
void bfs(int u,list<long long int>*adjlist,bool visited[])
{
    list<int>q;
    q.push_back(u);
    visited[u]=true;
    list<long long int>::iterator i;
    while(!q.empty())
    {
        int v=q.front();
        printf("%d ",v);
        q.pop_front();

        for(i=adjlist[v].begin();i!=adjlist[v].end();i++)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                q.push_back(*i);
            }
        }
    }
}
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    int x=1;
    while(t--)
    {
        cout<<"graph"<< " "<<x<<endl;
        x++;
        int n;
        scanf("%d",&n);
        list<long long int>adjlist[100000];
        for(int i=1;i<=n;i++)
        {
            int a,b;
            scanf("%d",&a);
            //cout<<a<<endl;
            scanf("%d",&b);
            //cout<<b<<endl;
            if(b==0)
            {
                adjlist[a].push_back(a);
            }
            else
            {
            while(b--)
            {
                int c;
                scanf("%d",&c);
                adjlist[a].push_back(c);
                //adjlist[a].push_back(d);
            }

            }
        }
       /* for(int i=1;i<=n;i++)
        {
            for(int j=0;j<adjlist[i].size();j++)
            {
                cout<<adjlist[i][j]<<" ";
            }
            cout<<endl;
        }*/
        pair<int,int>p[1000];
        int k=0;
        while(1)
              {
                  int r,s;
                  scanf("%d %d",&r,&s);
                  if(r==0 &&s==0)
                        break;
                  p[k].first=r;
                  p[k].second=s;
                  k++;

              }
              bool visited[n+5];
              //cout<<k<<endl;
        for(int i=0;i<k;i++)
        {
            if(p[i].second==0)
            {
                memset(visited,false,sizeof(visited));
                dfs(p[i].first,adjlist,visited);
                cout<<endl;
                //cout<<p[i].first<<p[i].second<<endl;
            }
            else if(p[i].second==1)
            {
                memset(visited,false,sizeof(visited));
                bfs(p[i].first,adjlist,visited);
                 //cout<<p[i].first<<p[i].second<<endl;
                cout<<endl;
            }
        }
    }
    return 0;
}
