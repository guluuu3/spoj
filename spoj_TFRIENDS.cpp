#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adjlist[101];
vector<int>adjlist_rev[101];
stack<int>st;
stack<int>st2;
int ct;
int n;
bool visited[101];
void dfs_forwad(int u)
{
	visited[u]=true;
	vector<int> ::iterator it;
	for(it=adjlist[u].begin();it!=adjlist[u].end();it++)
	{
		if(!visited[*it])
		{
			dfs_forwad(*it);
		}
	}
	st.push(u);
	st.push(u);
}
void dfs_backward(int u)
{
	visited[u]=true;
	vector<int> ::iterator it;
	for(it=adjlist_rev[u].begin();it!=adjlist_rev[u].end();it++)
	{
		if(!visited[*it])
		{
			dfs_backward(*it);
		}
	}

}
void kosaraju()
{
	memset(visited,false,sizeof(visited));
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			dfs_forwad(i);//we check that can we reach alll the vertices from a edge
		}
	}
	memset(visited,false,sizeof(visited));
	while(!st.empty())
	{
	   	int v=st.top();//now we check the incoming edges can we reach back to v;
	   	st.pop();
	   	//cout<<v<< " ";
	   	if(!visited[v])
	   	{
            ct++;
	   		dfs_backward(v);
	   	}
	}
	/*while(!st.empty())
	{
		int x=st2.top();
		st2.pop();
		if(visited[x]==true)
		{
			ct++;
		}
	}*/

}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		string str[n+5];
		for(int i=0;i<n;i++)
		{
			adjlist[i].clear();
		    adjlist_rev[i].clear();
		}

		for(int i=0;i<n;i++)
		{
		    cin>>str[i];
			//scanf("%s",&str[i]);
		}
		/*for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<str[i][j]<< " ";
            }
            cout<<endl;
        }*/

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(str[i][j]=='Y')
				{
					adjlist[i].push_back(j);
					adjlist_rev[j].push_back(i);
				}
			}
		}
		ct=0;

		kosaraju();
		printf("%d\n",ct);

	}
	return 0;

}
