#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int lcs(int master[],int n,int slave[],int m)
{
     int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(master[i-1]==slave[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
    }
    return dp[n][m];
}
int main ()
{
        int d;
        scanf("%d",&d);
        while (d--)
        {
                int master[2001], maxi = 0;
                int temp = 1, a = 0;
                while (temp)
                {
                        scanf("%d",&temp);
                        master[a++] = temp;
                }
                while (true)
                {
                        int slave[2001], t = 1;
                        scanf("%d",&temp);
                        if (temp == 0)
                                break;
                        slave[0] = temp;
                        temp = 1;
                        while (temp)
                        {
                               scanf("%d",&temp);
                                slave[t++] = temp;
                        }
                        maxi= max(maxi, lcs (master, a, slave, t)-1);
                }
                printf ("%d\n", maxi);
        }
        return 0;
}
