#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    long long int n,W;
    scanf("%lld %lld",&n,&W);
    long long int dp[3][W+1];
    long long int value[n+1],wt[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&wt[i],&value[i]);
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 ||j==0)
                dp[2][j]=0;
            else if(j>=wt[i-1])
            {
             dp[2][j]=max(value[i-1]+dp[1][j-wt[i-1]],dp[1][j]);
            }
            else
            {
                dp[2][j]=dp[1][j];
            }
        }
        for(int k=0;k<=n;k++)
        {
            dp[1][k]=dp[2][k];
        }
    }

    cout<<dp[2][W]<<endl;
    return 0;
}
