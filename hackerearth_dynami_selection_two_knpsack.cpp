#include <iostream>
#include<stdlib.h>
#include<cstdio>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
long long int dp[2007][2007][2][2];
int wt[2007];
int price[2007];
long long int  fun(int i,int final_weight,int flag1,int flag2,int n,int w)
{
	long long int res;
	if(i==n+1)
	return 0;
	if(dp[i][final_weight][flag1][flag2]!=-1)
	return dp[i][final_weight][flag1][flag2];
	res=fun(i+1,final_weight,flag1,flag2,n,w);//move till the end of the array in recursive depth//
	if(final_weight+wt[i]<=w)
	{
		res=max(res,fun(i+1,final_weight+wt[i],flag1,flag2,n,w)+price[i]);
		if(flag1==0)
		{
			res=max(res,fun(i+1,final_weight+wt[i],flag1^1,flag2,n,w)+2LL*price[i]);
		}
		if(flag2==0)
		{
			res=max(res,fun(i+1,final_weight+wt[i],flag1,flag2^1,n,w)+3LL*price[i]);
		}

	}
	dp[i][final_weight][flag1][flag2]=res;
	return res;
}

int main()
{
	int n,w;
	cin>>n>>w;
	//int wt[n];
	for(int i=1;i<=n;i++)
	{
		cin>>wt[i];
	}
	//int price[n];
	for(int i=1;i<=n;i++)
	{
		cin>>price[i];
	}
	   memset(dp,-1,sizeof(dp));
	   long long int final=fun(1,0,0,0,n,w);
	   cout<<final<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
