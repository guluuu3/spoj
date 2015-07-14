#include <iostream>
using namespace std;
long long int dp[1000000];
void sum()
{
	dp[0]=0;
	for(long long int i=1;i<=1000000;i++)
	{
		dp[i]=dp[i-1]+i;
	}
	return ;
}

int main()
{
	int n,t;
	cin>>n>>t;
	sum();
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
	}
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		long long int diff=b-(dp[b-1]-dp[a-1]);
		cout<<dp[b]-dp[a-1]<<" "<<diff<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
