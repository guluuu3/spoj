#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long double dp[551][3301]={0};
int main()
{
    freopen("test.txt","r",stdin);
     for(int i=1;i<=6;i++)
        {
            dp[1][i]=1.0/6.0;
            //cout<<dp[1][i]<<endl;
        }
        for(int i=2;i<=550;i++)
        {
            for(int k=2;k<=3300;k++)
            {
                //long  double sum=0;
                for(int j=1;j<7;j++)
                {
                    if(j-k>=0)
                        break;
                    dp[i][k]+=dp[i-1][k-j]/6.0;
                }

            }
        }
    int t;
   scanf("%d",&t);
    while(t--)
    {
        int n,m;
       scanf("%d%d",&n,&m);

        //memset(dp,0,sizeof(dp));

        if(n<=550 && m<=3300)
        {
               printf("%d\n",(int)(100*dp[n][m]));

         }

        else
            cout<<"0"<<endl;


    }
    return 0;
}
