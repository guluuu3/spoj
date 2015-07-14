#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int dp[2000][2000];
void calculate()
{
for(int i=0;i<2000;i++)
{
    for(int j=0;j<2000;j++)
    {

        dp[i][j]=0;
    }
}
dp[2][0]=3;
dp[2][1]=1;
for(int i=3;i<2000;i++)
{
   for(int j=0;j<i;j++)
   {
       dp[i][j]=dp[i-1][j]+1;
   }
}

}
int main()
{
    calculate();
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;
    cout<<dp[x][y]<<endl;
}

}
