#include <bits/stdc++.h>
using namespace std;
//#define MAX 1000000
long long int dp[1000000];
long long int fun(long long int n)
{


        if(n<1000000)
        {
            if(dp[n]!=0)
              return dp[n];
        }

        if(n<n/2+n/3+n/4)
             return fun(n/2)+fun(n/3)+fun(n/4);
        else
            {
               if(n<1000000)
               {
                dp[n]=n;
               }
             return n;
            }

    //return i;
}
int main()
{

    long long int n;
    for(long long int k=0;k<1000000;k++)
        dp[k]=fun(k);
    while(cin>>n)
    {
        cout<<fun(n)<<endl;
    }
    return 0;
}
