#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adjlist[2002];
int color[2004];
bool bfs(int u)
{
	list<int>q;
	q.push_back(u);
	color[u]=1;
	while(!q.empty())
	{
		int x=q.front();
		//cout<<x<<" ";
		q.pop_front();
		for(int i=0;i<adjlist[x].size();i++)
		{
			//int v=adjlist[x][i];
			if(color[adjlist[x][i]]==color[x])
			{
				return false;
			}
			if(!color[adjlist[x][i]])
			{
				color[adjlist[x][i]]=3-color[x];//alteranate colors assinged
				q.push_back(adjlist[x][i]);

			}

		}
	}
	return true;
}

int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	int ct=1;
	while(t--)
	{
		//printf("Scenario #%d:\n",ct);
		//printf("Scenario #%d:\n",ct);
		 int n,m;
		scanf("%d %d",&n,&m);
		for(int i=0;i<=n;i++)
        {
          adjlist[i].clear();
        }

	    for(int i=0;i<m;i++)
	    {
	    	int x,y;
	    	scanf("%d %d",&x,&y);
	    	adjlist[x].push_back(y);
	    	adjlist[y].push_back(x);
	    }

	    for(int i=0;i<=n;i++)
	    {
	    	color[i]=0;
	    }
	    int i;
	    for( i=1;i<=n;i++)
	    {
	    	if(!color[i])
	    	{
	    		if(bfs(i))
	    		{
	    			continue;
	    		}
	    		else
	    		{
	    			break;
	    		}
	    	}
	    }
	    printf("Scenario #%d:\n", ct);
		if(i>n) printf("No suspicious bugs found!\n");
		else printf("Suspicious bugs found!\n");

ct++;
	}
	return 0;
}
