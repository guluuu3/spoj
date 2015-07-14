#include <iostream>
#include<stdlib.h>
#include<cstdio>
#include<list>
using namespace std;
list<int>adjlist[100005];
void dfs(int u,bool visited[])
{
	visited[u]=true;
	list<int>::iterator i;
	for(i=adjlist[u].begin();i!=adjlist[u].end();i++)
	{
		if(visited[*i]==false)
		{
			dfs(*i,visited);
		}
	}
}
bool is_connected(int n)
{
	bool visited[100005];
	int i;
	for( i=0;i<100005;i++)
	{
		visited[i]=false;
	}
	 for (i = 1;i<=n; i++)
        if (adjlist[i].size() != 0)
            break;

    // If there are no edges in the graph, return true
    if (i == n)
        return true;
    dfs(i,visited);
    for(i=1;i<=n;i++)
    {
    	if(visited[i]==false && adjlist[i].size()>0)
    	return false;
    }
    return true;
}
bool is_eulerian(int n)
{
	if(is_connected(n)==false)
	return false;
	int odd=0;
	for(int i=1;i<=n;i++)
	{
		if(adjlist[i].size()&1)
		{
			odd++;
		}
	}
	cout<<odd<<endl;
	if(odd==2||odd==0)
	return true;
return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		for(int i=0;i<=n;i++)
		{
			adjlist[i].clear();
		}

		for(int i=1;i<=m;i++)
		{
			int x,y;
			cin>>x>>y;
			adjlist[x].push_back(y);
			adjlist[y].push_back(x);
		}
		if(is_eulerian(n)==true)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;

	}
    //cout << "Hello World!" << endl;
    return 0;
}
