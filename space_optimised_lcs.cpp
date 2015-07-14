#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
char str1[6200],str2[6200];
int lcs(int n)
{
    int dp[3][6200];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                dp[(i&1)][j]=0;
            else if(str1[i-1]==str2[j-1])
            {
                dp[(i&1)][j]=dp[!(i&1)][j-1]+1;
            }
            else
            {
                dp[(i&1)][j]=max(dp[!(i&1)][j],dp[(i&1)][j-1]);
            }
        }
       /* for(int k=0;k<=n;k++)
        {
            dp[1][k]=dp[2][k];//update the last vale;
        }*/
    }
    return dp[(n&1)][n];
}
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
    string str;
        //scanf("%s",str);
        cin>>str;
        long int n=str.size();
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
    }
        return 0;

}
