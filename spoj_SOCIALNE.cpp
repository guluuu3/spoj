#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    string str [50];
    int t;
    scanf("%d",&t);
    int z=0;
    while(t--)
    {
        cin>>str[z++];
        int len=str[0].size();
        for(int i=1;i<len;i++)
        {
            cin>>str[z++];
        }
       /* for(int i=0;i<len;i++)
        {
            cout<<str[i]<<endl;
        }*/

        long long int dp[55][55];
        //memset(dp,-1,sizeof(dp));
       /* for(int i=0;i<55;i++)
        {
            for(int j=0;j<55;j++)
            {
                dp[i][j]=-1;
            }
        }*/
        int ct;
        int maxi=0;
        int max_index=0;
        for(int k=0;k<len;k++)
        {
            int ct=0;
            for(int i=0;i<len;i++)
            {

                if(k!=i && str[k][i]=='Y')
                {
                    for(int j=0;j<len;j++)
                    {
                        if(i!=j)
                        {
                            if(str[k][j]=='Y' && str[i][j]=='Y')
                            {
                                break;
                            }

                        }
                         ct++;
                    }
                }
                if(ct>maxi)
                {
                    maxi=ct;
                    max_index=k;
                }
            }
        }
        cout<<maxi<<" "<<max_index<<endl;
        z=0;
    }
    return 0;
}
