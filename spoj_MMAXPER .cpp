#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    freopen("test.txt","r",stdin);
	int n;
	scanf("%d",&n);
	pair<int,int>p[n+5];
	for(int i=0;i<n;i++)
	{
		 int x,y;
		scanf("%d %d",&x,&y);
		p[i].first=x;
		p[i].second=y;
	}
	int dp[n][3];
	dp[0][0]=p[0].first;
	dp[0][1]=p[0].second;
	for(int i=1;i<n;i++)
	{
		dp[i][1]=p[i].second+max(abs(p[i].first-p[i-1].second)+dp[i-1][0],abs(p[i].first-p[i-1].first)+dp[i-1][1]);//sleeping position
		dp[i][0]=p[i].first+max(abs(p[i].second-p[i-1].first)+dp[i-1][1],abs(p[i].second-p[i-1].second)+dp[i-1][0]);//standind position
	}
	cout<<max(dp[n-1][0],dp[n-1][1]);





	return 0;
}
