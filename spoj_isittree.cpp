#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

bool is_cyclic(int v,bool visited[],int parent,list<long long int>*adjlist)
{
    visited[v]=true;
    list<long long int>::iterator i;
    for(i=adjlist[v].begin();i!=adjlist[v].end();i++)
    {
        if(!visited[*i])
        {
            if(is_cyclic(*i,visited,v,adjlist))
                return true;
        }
        else if(*i!=parent)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    list<long long int>adjlist[100000];
    for(int i=1;i<=m;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    bool visited[n+2];
    for(int i=1;i<=n;i++)
    {
        visited[i]=false;
    }
    if(is_cyclic(1,visited,0,adjlist))
    {
        cout<<"NO"<<endl;
        return false;
    }

    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            cout<<"NO"<<endl;
            return false;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
