#include<stdio.h>
//#include<limits>
#include<stdlib.h>
#define MAX 1000001
long long int dp[MAX];
long long int min(long long int x,long long int y)
{
	return (x<y)?x:y;
}
void fun()
{
    int i;
	dp[1]=0;
	dp[0]= 1000000001;
	for(i=2;i<MAX;i++)
	{
		dp[i]=1+dp[i-1];
		if(i%2==0)
		dp[i]=min(dp[i],dp[i/2]+1);
		else dp[i]=1+dp[i-1];
		if(i%3==0)
		dp[i]=min(dp[i],dp[i/3]+1);
		else dp[i]=1+dp[i-1];

		}
		//return dp[x];

}
long long int final(int x)
{
	long long int result;
	if(x<MAX)
	return dp[x];
	else
	{
		result=1000000001;
		if(x%2==0)
		result=min(result,1+final(x/2));
		else
		result= min(result,1+final(x-1));
		if(x%3==0)
		result =min(result,1+final(x/3));
		else
		result= min(result,1+final(x-1));


	}
	return result;
}


int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{

		long long int x;
		scanf("%lld",&x);
		fun();
		printf("%lld\n",final(x));
	}
   // printf("Hello World!\n");
    return 0;
}
