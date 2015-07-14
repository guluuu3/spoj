#include <iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;
long double dp[10000000];
void fact()
{
	dp[0]=1;
	for(double i=1;i<=20;i++)
	{
		dp[i]=dp[i-1]*i;
	}
}
int main()
{
	int t;
	cin>>t;
	fact();
	while(t--)
	{
		double x;
		cin>>x;
		long  double sum=0;

		for(int i=0;i<=x;i++)
		{
			if(i%2==0)
			sum=sum+(1/dp[i]);
			else
			sum=sum-(1/dp[i]);
		}
		sum=sum*dp[x];
		printf("%.0Lf\n",sum);
	}
    //cout << "Hello World!" << endl;
    return 0;
}
