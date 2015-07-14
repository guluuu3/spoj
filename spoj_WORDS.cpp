#include <iostream>
#include <bits/stdc++.h>
using namespace std;
list<int>adjlist[1000];
int indegree[30];
int outdegree[30];
bool visited[30];
void dfs(int u)
{
	visited[u]=true;
	list<int>::iterator it;
	for(it=adjlist[u].begin();it!=adjlist[u].end();it++)
	{
		if(!visited[*it])
		{
			dfs(*it);
		}
	}
}
bool is_connected(int u)
{
	for(int i=0;i<26;i++)
	{
		visited[i]=false;
	}
	dfs(u);
	for(int i=0;i<26;i++)
	{
		if(outdegree[i] && !visited[i])
			return false;
	}
	return true;
}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char str[1000];

		for(int i=0;i<30;i++)
		{
			indegree[i]=0;
			outdegree[i]=0;
			visited[i]=false;
			adjlist[i].clear();
		}
		for(int i=0;i<n;i++)
		{
			scanf("%s",str);
			outdegree[str[0]-'a']++;
		    indegree[str[strlen(str)-1]-'a']++;
		    adjlist[str[0]-'a'].push_back(str[strlen(str)-1]-'a');
		}
		int ct=0;
		for(int i=0;i<26;i++)
		{
			if(outdegree[i]!=indegree[i])
			{
				if(outdegree[i]==indegree[i]+1 || outdegree[i]+1==indegree[i] )
				{
					ct++;
				}
				else
				{
					ct=1000;
					break;
				}

			}
		}
		if(ct>2)
		{
			printf("The door cannot be opened.\n");
			continue;
		}

		bool flag=false;

		for(int i=0;i<26;i++)
		{
			if(outdegree[i] && is_connected(i))
			{
				flag=true;
				break;
			}

		}
		if(flag==true)
		{
			printf("Ordering is possible.\n");
		}
		else
			printf("The door cannot be opened.\n");


	}
	return 0;
}
