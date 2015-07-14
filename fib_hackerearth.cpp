#include <iostream>
using namespace std;
#define MAX 100000000
unsigned long long int dp[MAX];
void fib()
{
	dp[0]=1;
	dp[1]=2;
	for(unsigned long long int i=2;i<MAX;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
}
int main()
{
	int t;
	cin>>t;
	fib();
	while(t--)
	{
		unsigned long long  int x,sum;
		cin>>x;
		sum=0;
		for(unsigned int i=0;dp[i]<=x;i++)
		{
			if(dp[i]%2==0)
			{
				sum=sum+dp[i];
			}
		}
		cout<<sum<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
