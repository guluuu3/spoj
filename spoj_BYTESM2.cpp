#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
/*long int max(long int x,long int y,long int z)
{
    if (x > y)
      return (x > z)? x : z;
   else
      return (y > z)? y : z;
}*/
int main()
{
    freopen("test.txt","r",stdin);
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int r,c;
        scanf("%ld%ld",&r,&c);
        long  int matrix[r+5][c+5];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%ld",&matrix[i][j]);
            }
        }
        /*for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%ld ",matrix[i][j]);
            }
            cout<<endl;
        }*/
        long int dp[r][c];
        for(int i=0;i<c;i++)
        {
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(j==0)
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j+1])+matrix[i][j];
                else if(j==c-1)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+matrix[i][j];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],max(dp[i-1][j+1],dp[i-1][j-1]))+matrix[i][j];
                }
            }
        }
     /* for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%ld ",dp[i][j]);
            }
            cout<<endl;
        }*/
        long int maxi=dp[r-1][0];
        for(int i=1;i<c;i++)
        {
            if(maxi<dp[r-1][i])
                maxi=dp[r-1][i];
        }
        cout<<maxi<<endl;

    }
    return 0;
}
