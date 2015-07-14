#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int test,n,k;
		scanf("%lld %lld %lld",&test,&n,&k);
		long  long int dp[n+1][k+1];
		for(int i=1;i<=k;i++)
		{
			dp[1][i]=i;
		}
		for(int i=1;i<=n;i++)
		{
			dp[i][0]=0;
			dp[i][1]=1;
		}
		long long int ans=0;
		for(int i=2;i<=n;i++)
		{
			for(int j=2;j<=k;j++)
			{
				dp[i][j]=INT_MAX;
				for(int x=1;x<=j;x++)
				{
					ans=1+max(dp[i-1][x-1],dp[i][j-x]);
					dp[i][j]=min(ans,dp[i][j]);
				}
			}
		}
		printf("%lld %lld\n",test,dp[n][k]);

	}
	return 0;
}
