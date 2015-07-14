#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    freopen("test.txt","r",stdin);
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int dp[n+5][3];
	dp[0][0]=arr[0];
	dp[0][1]=arr[n-1];
	for(int i=1;i<n;i++)
    {
       dp[i][0]=(i+1)*arr[i]+min(dp[i-1][0],dp[i-1][1]);
       dp[i][1]=(i+1)*arr[n-i-1]+min(dp[i-1][0],dp[i-1][1]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<dp[i][0]<< " ";
    }
    cout<<endl;
    int ans=max(dp[n-1][0],dp[n-1][1]);
    int ans2=min(dp[n-1][0],dp[n-1][1]);
    cout<<ans<<" "<<ans2<<endl;
    return 0;

}
