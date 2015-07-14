#include <iostream>
using namespace std;
unsigned long long int catalan(unsigned int n)
{
	unsigned long long int dp[n+1];
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=0;
		for(int j=0;j<i;j++)
		{
			dp[i]=dp[i]+dp[j]*dp[i-j-1];//f(n) = f(0)f(n-1) + f(1)f(n-2) + .......... + f(n-1)f(0)
		}
	}
	return dp[n];

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int n;
		cin>>n;
		cout<<catalan(n)<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
