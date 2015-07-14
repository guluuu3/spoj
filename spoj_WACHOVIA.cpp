#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int W,n;
        scanf("%d %d",&W,&n);
        int wt[n],value[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&wt[i],&value[i]);
        }
    long long int dp[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0|| j==0)
                dp[i][j]=0;
            else if(j>=wt[i-1])
            {
                dp[i][j]=max(value[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<"Hey stupid robber, you can get "<<dp[n][W]<<"."<<endl;
    //cout<<dp[n][W]<<endl;
    }
    return 0;
}
