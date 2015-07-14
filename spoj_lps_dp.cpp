#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    string rstr(str);
    reverse(rstr.begin(),rstr.end());
    int dp[n+1];
    dp[0]=0;
    int maxi=0;
    for(int i=1;i<=n;i++)
    {
        if(str[i-1]==rstr[i-1])
        {
            dp[i]=dp[i-1]+1;
            if(dp[i]>maxi)
            maxi=dp[i];

        }
        else dp[i]=0;

    }
    printf("%d\n",maxi);
    return 0;
}
