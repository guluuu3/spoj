#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[35][35];
int arr[35];
int n;
void clear1()
{
    for(int i=0;i<35;i++)
    {
        for(int j=0;j<35;j++)
        {
            dp[i][j]=-1;
        }
    }
}
int fun(int i,int j)
{

	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	if(j-i<1)
        return 0;


    dp[i][j]=max(arr[i]+min(fun(i+2,j),fun(i+1,j-1)),arr[j]+min(fun(i+1,j-1),fun(i,j-2)));



	return dp[i][j];
}

 int fun2(int i,int j)
{

	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	if(j-i<1)
        return 0;

    dp[i][j]=max(arr[i]+max(fun2(i+2,j),fun2(i+1,j-1)),arr[j]+max(fun2(i+1,j-1),fun2(i,j-2)));



	return dp[i][j];
}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		//int n;
		scanf("%d",&n);

		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}


		//cout<<fun2(0,n-1)<< " "<<fun(0,n-1)<<endl;
		clear1();
		printf("%d ",fun2(0,n-1));
		clear1();
		printf("%d\n",fun(0,n-1));

	}
	return 0;
}
