#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int value[501];
 int weight[501];
 int dp[2][2000001];
int main()
{
    freopen("test.txt","r",stdin);
     int W,n;
    //cin>>W>>n;
    scanf("%d %d",&W,&n);

    for(long long int i=1;i<=n;i++)
    {
        scanf("%d %d",&value[i],&weight[i]);
    }

dp[0][0]=0;
dp[1][0]=0;
    for(int i=1;i<=n;i++)
    {
        for( int j=1;j<=W;j++)
        {
            //if(i==0||w==0)
                //dp[i][w]=0;
             if(j>=weight[i]){//include it
            //dp[(i&1)][w]=max(value[i]+dp[!(i&1)][w-weight[i]],dp[!(i&1)][w]);
            dp[(i&1)][j]=max(dp[!(i&1)][j],(dp[!(i&1)][j-weight[i]]+value[i]));
             }
            else
                dp[(i&1)][j]=dp[!(i&1)][j];
        }
    }
    printf("%d\n",dp[(n&1)][W]);//<<endl;
    return 0;
}

