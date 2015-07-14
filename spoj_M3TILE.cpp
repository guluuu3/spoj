#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	long long int dp[35];
	dp[0]=1;
	dp[1]=0;
	dp[2]=3;
	dp[3]=0;
	for(int i=4;i<32;i++)
	{
		dp[i]=4*dp[i-2] -dp[i-4];
	}

	while(scanf("%d",&t))
	{
		if(t==-1)
			break;
		printf("%lld\n",dp[t]);
	}
	cout<<endl;

}
