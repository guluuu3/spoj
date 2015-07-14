#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
    long long dp[100000];
	long long int n,c;
	scanf("%lld",&n);
	scanf("%lld",&c);
	dp[0]=c;
	for(long long int i=1;i<n;i++)
	{
		scanf("%lld",&c);
		dp[i]=dp[i-1]+c;
	}
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x,y;
	    scanf("%lld%lld",&x,&y);
	    c=dp[y]-dp[x];
		printf("%lld \n",c);
	}

   }

    //cout << "Hello World!" << endl;
    return 0;
}
