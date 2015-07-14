#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    long long int m,n;
    scanf("%lld",&m);
    scanf("%lld",&n);
    long long int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%lld",&matrix[i][j]);
        }
    }
    long long int dp[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[j][m-i-1]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%lld ",dp[i][j]);
        }
        cout<<endl;
    }
    return 0;
}
