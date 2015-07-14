#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int n,m;
    scanf("%d %d",&n,&m);
    //long long int matrix[n+1][m+1];
   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%lld",&matrix[i][j]);
        }
    }*/
    long long int dp[101][101]={0};
    for(int i=0;i<=n;i++)
    {
        dp[i][m+1]=100000;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=100000;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%lld",&dp[i][j]);
        }
    }
    /*for(int i=1;i<m;i++)
    {
        dp[0][i]=dp[0][i-1]+matrix[0][i];
    }
    for(int j=0;j<n;j++)
    {
        dp[j][0]=dp[j-1][0]+matrix[j][0];
    }*/

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]))+dp[i][j];
        }
    }
    long long int min_val=100000;
    for(int i=1;i<=m;i++)
    {
        min_val=min(dp[n][i],min_val);
    }
    cout<<min_val<<endl;
    return 0;
}
