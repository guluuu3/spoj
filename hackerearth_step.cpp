#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int fun(int i)
{

	if(i==n)
	{
		return dp[i];
	}

	 dp[i]=((p/100)*fun(i+2) + fun(i+3)*(1-p/100));




}*/
int main()
{
    long long int n,p;
	scanf("%lld %lld",&n,&p);
    long double dp[n+5];
	memset(dp,0,sizeof(dp));
	dp[0]=0;
	dp[1]=0;
	dp[2]=(p/(double)100);
	for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-2]*(p/(double)100) + dp[i-3]*((1-p/(double)100));
    }
	//cout<<p<< " "<<n;

printf("%.6lf",2*dp[n]);
	//cout<<2*dp[n]<<endl;
	return 0;

}
