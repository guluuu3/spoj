#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define MAX 111111
bool flag;
void dfs(int u,bool visited[],list<long long int>&s,list<long long int>*adjlist)
{
    visited[u]=true;

    list<long long int>::iterator i;
    for(i=adjlist[u].begin();i!=adjlist[u].end();i++)
    {
        if(visited[*i]==false)
        {

            dfs((*i),visited,s,adjlist);

            //cout<<(*i)<<endl;
        }
        else if(visited[*i]==true)
            {
                flag=true;
                return ;
            }
    }
    s.push_back(u);
}
int main()
{
    freopen("test.txt","r",stdin);
    long long int x,y;
    flag=false;
    //cin>>x>>y;
    scanf("%lld %lld",&x,&y);
    list<long long int>adjlist[MAX];
    //int ct=0;
    for(int i=1;i<=y;i++)
    {
        long long int m,n;
        scanf("%lld %lld",&m,&n);
        adjlist[m].push_back(n);
    }
    bool visited[x];
    //memset(visited,false,sizeof(visited));
    for(int i=1;i<=x;i++)
    {
        visited[i]=false;
    }
    list<long long int>s;
    for(long long int i=x;i>=1;i--)
    {
        if(visited[i]==false)
            dfs(i,visited,s,adjlist);


    }
 if(flag==true)
 {
     cout<<"No"<<endl;
     return 0;
 }

    while(s.empty()==false)
    {
        int x=s.back();
        cout<<x<<" ";
        s.pop_back();
    }
    //freopen("output.txt","w",stdout);
    cout<<endl;
    return 0;
}
