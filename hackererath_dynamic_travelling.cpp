#include <iostream>
#include<limits.h>
#include<climits>
#include<stdlib.h>
#include<cstdio>
#include<list>
#include <bits/stdc++.h>
using namespace std;

long long int min(long long int x,long long int y)
{
	return (x<y)?x:y;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,b;
		cin>>n>>m>>b;
		vector<long long int>adjlist[505];
       long long int cost[505][505];
       long long int len[505][505];
		 memset(cost,0,sizeof(cost));
		 memset(len,0,sizeof(len));
		long long int x,y,c,l;
		for(long long int i=0;i<m;i++)
		{
			cin>>x>>y>>c>>l;
			adjlist[y].push_back(x);
			cost[x][y]=c;
			len[x][y]=l;
		}

		long long int dp[n+1][b+1];
		//memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=b;j++)
			{
				if(i==1)
				{
					dp[i][j]=0;//cost to reach the same destination as the source is zero//
				}
				else
				dp[i][j]=INT_MAX;

			}
		}
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=b;j++)
			{
				long long int res=INT_MAX;
				//list<int>::iterator k;
				for(int k=0;k<adjlist[i].size();k++)
				{
					long long	int u=adjlist[i][k];
                    if(j>=cost[u][i])
                    res=min(res,dp[u][j-cost[u][i]]+len[u][i]);
				    //cout<<res<<endl;
				}
				dp[i][j]=min(res,dp[i][j]);
			}
		}
		long long int test;
		cin>>test;
		for(int i=0;i<test;i++)
		{
			long long int dest,budget;
			cin>>dest>>budget;
		   if(dp[dest][budget]!=INT_MAX)
		    	cout<<dp[dest][budget]<<endl;

		    else
		    {
		    	cout<<"-1"<<endl;
		    }
		}


	}
    //cout << "Hello World!" << endl;
    return 0;
}
