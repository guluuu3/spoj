#include<iostream>
#include<stdlib.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
     int t;
    scanf("%d",&t);
    string str;
    cin>>str;
    //cout<<str;
    int n=str.size();
    long long int dp[n][n];
    for(int i=0;i<n;i++)
    {
        dp[i][i]=1;
    }
    for(int c=2;c<=n;c++)
    {
        for(int i=0;i<n-c+1;i++)
        {
            int j=i+c-1;
            if(str[i]==str[j]&& c==2)
            {
                dp[i][j]=2;
            }
            else if(str[i]==str[j])
            {
                dp[i][j]=dp[i+1][j-1]+2;
            }
            else
            {
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
        }
    }
    printf("%lld\n",dp[0][n-1]);
    return 0;
}
