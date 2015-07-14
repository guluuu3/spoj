#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
long int t;
scanf("%ld",&t);
while(t--)
{
int n;
scanf("%d",&n);
long long matrix[n+1][n+1];
for(int i=0;i<n;i++)
{
for(int j=0;j<=i;j++)
{scanf("%lld",&matrix[i][j]);}
}long long int dp[n][n];dp[0][0]=matrix[0][0];
for(int i=1;i<n;i++)
{
    dp[i][0]=dp[i-1][0]+matrix[i][0];
}
for(int i=1;i<n;i++)
{
    for(int j=1;j<=i;j++)
    {
        if(j==i)
        {
            dp[i][j]=dp[i-1][j-1]+matrix[i][j];
        }
        else
        {
            dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+matrix[i][j];
        }
    }
}
long long maxi=dp[n-1][0];
for(int i=1;i<n;i++)
{
    maxi=max(maxi,dp[n-1][i]);
}
cout<<maxi<<endl;
}
return 0;
}
