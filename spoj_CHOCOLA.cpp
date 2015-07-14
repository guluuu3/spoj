#include<iostream>
using namespace std;
#include<bits/stdc++.h>
long long int dp[1000][1000];
bool compare(long long int a ,long long int b)
{
	return (a>b);
}
int main()
{
	freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int row,col;
		scanf("%lld %lld",&col,&row);
		long long int row_arr[row];
		long long int col_arr[col];
		row--;
		col--;
		for(int i=1;i<=col;i++)
		{
			scanf("%lld",&col_arr[i]);
		}
		for(int i=1;i<=row;i++)
		{
			scanf("%lld",&row_arr[i]);
		}

		sort(row_arr+1,row_arr+1+row,compare);
		sort(col_arr+1,col_arr+1+col,compare);
		dp[0][0]=0;
		for(int i =1;i<=row;i++)
		{
			dp[i][0]=row_arr[i]+dp[i-1][0];
		}
		for(int i=1;i<=col;i++)
		{
			dp[0][i]=dp[0][i-1]+col_arr[i];
		}
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=col;j++)
			{
				long long int ans1=dp[i][j-1]+col_arr[j]*(i+1);//in the line of y the choclate is cut//
				long long int ans2=dp[i-1][j]+row_arr[i]*(j+1);//in the line of x the choclate is cut//
				dp[i][j]=min(ans1,ans2);
			}
		}
		printf("%lld\n",dp[row][col]);

	}
	return 0;
}
