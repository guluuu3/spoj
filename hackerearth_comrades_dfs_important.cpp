#include <iostream>
#include<list>
#include<stdlib.h>
#include<cstdio>
using namespace std;
list<int>adjlist[10000];
int start[10000];
int stop[10000];
int c;
int height[10000];
void dfs(int u,int h)
{
	start[u]=c;
	c++;
	height[u]=h;
	list<int>::iterator i;
	for(i=adjlist[u].begin();i!=adjlist[u].end();i++)
	{
	   dfs((*i),h+1);
	}
	stop[u]=c;
	c++;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			 adjlist[i].clear();
             start[i]=0;
             stop[i]=0;
             c=0;
		}
		int x;
		int root;
		for(int i=1;i<=n;i++)
		{
		scanf("%d",&x);
		if(x==0)
		root=i;
		else
		a+djlist[x].push_back(i);
		}

		dfs(root,0);
		int pair;
		scanf("%d",&pair);
		while(pair--)
		{
			int x,y;
			scanf("%d %d",&x, &y);
			if(start[x]>start[y] && stop[x]>stop[y])
			{
				cout<<-1<<endl;
			}
			else
			cout<<height[x]-height[y]<<endl;

		}


	}
    //cout << "Hello World!" << endl;
    return 0;
}
