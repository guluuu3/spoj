#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
char str1[5005],str2[5005];
int lcs(int n)
{
    int dp[3][5005];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                dp[2][j]=0;
            else if(str1[i-1]==str2[j-1])
            {
                dp[2][j]=dp[1][j-1]+1;
            }
            else
            {
                dp[2][j]=max(dp[1][j],dp[2][j-1]);
            }
        }
        for(int k=0;k<=n;k++)
        {
            dp[1][k]=dp[2][k];//update the last vale;
        }
    }
    return dp[2][n];
}
int main()
{
    long int n;
    scanf("%ld",&n);
    string str;
        //scanf("%s",str);
        cin>>str;
        for(int i=0;i<n;i++)
        {
            str1[i]=str[i];
        }
        for(int i=0;i<n;i++)
        {
            str2[i]=str[n-i-1];
        }

        /*for(int i=0;i<n;i++)
        {
            cout<<str2[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<str1[i];
        }*/
        long int res=lcs(n);
        cout<<n-res<<endl;
        return 0;

}
