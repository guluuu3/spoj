#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
#include<list>
using namespace std;
vector<vector<int> > adjlist(100005);
void dfs(int u,bool visited[])
{

	visited[u]=true;
	vector<int>::iterator i;
	for(i=adjlist[u].begin();i!=adjlist[u].end();i++)
	{
		if(visited[*i]==false)
		{
			dfs(*i,visited);
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool visited[100005];
        for(int i=0;i<n;i++)
		   adjlist[i].clear();
		memset(visited,false,sizeof visited);
		int x;
		cin>>x;
		for(int i=0;i<x;i++)
		{
			int a,b;
			cin>>a>>b;
			adjlist[a].push_back(b);
			adjlist[b].push_back(a);
		}
		int c=0;
	   for(int i=0;i<n;i++)
	   {
	   	 if(visited[i]==false)
	   	 {
	   	 	c++;
	   	 	dfs(i,visited);
	   	 }
	   }
	   cout<<c<<endl;

	}
    //cout << "Hello World!" << endl;
    return 0;
}
