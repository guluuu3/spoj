#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int lca(long long int m,long long int n,long long int *parent)
{
    long long int visited[1005];
    memset(visited,0,sizeof(visited));
    visited[m]=1;
    while(parent[m]!=m)
    {
        m=parent[m];
        visited[m]=1;
    }
    visited[m]=1;
    while(visited[n]!=1)
    {
        n=parent[n];
    }
    return n;
}
int main()
{
    freopen("test.txt","r",stdin);
    long long int t;
    scanf("%lld",&t);
    long long int ct=1;
    while(t--)
    {
        cout << "Case " << ct << ":" << endl;
        ct--;

        long long int parent[1005];
        long long int pre;
        scanf("%lld",&pre);
        for(long long int k=1;k<=pre;k++)
        {
            parent[k]=k;
        }
        long long int i=1;
        while(i<=pre)
        {
            long long int child;
            scanf("%lld",&child);
            while(child--)
            {
                long long int children;
                scanf("%lld",&children);
                parent[children]=i;
            }
            i++;
        }
        long long int again;
        scanf("%lld",&again);
        while(again--)
        {
            long long int m,n;
            scanf("%lld %lld",&m,&n);
            long long int res=lca(m,n,parent);
            cout<<res<<endl;
        }
    }
    return 0;
}
