#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<list>
using namespace std;
void dfs(long long int u,long long int h,long long int height[],list<long long int>*adjlist)
{
	height[u]=h;
	list<long long int>::iterator i;
	for( i=adjlist[u].begin();i!=adjlist[u].end();i++)
	{
		dfs(*i,h+1,height,adjlist);
	}
	return;
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		list<long long int>adjlist[n];
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			adjlist[x].push_back(i);
		}
		long long int height[n];
		dfs(0,0,height,adjlist);
		for(int i=1;i<=n;i++)
		{
			cout<<height[i]<<endl;
		}
	}
}
