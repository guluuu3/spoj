#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
bool visited[MAX+2];
 int max_wt[MAX+2];
void bfs(int n,list<int>*adjlist)
{
    queue <pair<int, int> >q;
    q.push(make_pair(n,0));
    while(!q.empty())
    {
        int root=q.front().first;
        int wt=q.front().second;
        visited[root]=true;
        list<int>::iterator i;
        for(i=adjlist[root].begin();i!=adjlist[root].end();i++)
        {
            if(!visited[*i])
            {
                q.push(make_pair(*i,wt+1));
            }
        }
        max_wt[root]=wt;
        q.pop();
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    list< int>adjlist[n+10];
    for(int i=1;i<n;i++)
    {

        int x,y;
        scanf("%d %d",&x,&y);
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    bfs(1,adjlist);
    int max_root=0;
    for(int i=1;i<=n;i++)
    {
        max_root=max_wt[max_root]<max_wt[i]?i:max_root;
    }
    memset(max_wt,0,sizeof(max_wt));
    memset(visited,false,sizeof(visited));
    bfs(max_root,adjlist);
    int max_value=0;
    for(int i=1;i<=n;i++)
    {
        max_value=max(max_value,max_wt[i]);
    }
    cout<<max_value<<endl;
    return 0;
}
