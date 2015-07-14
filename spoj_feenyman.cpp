#include <iostream>
using namespace std;
long long int dp[105];
void cal()
{
	dp[0]=0;
	for(int i=1;i<105;i++ )
	{
		dp[i]=dp[i-1]+i*i;
	}
}

int main() {
    cal();
	long long int t;
	while(cin>>t)
	{
		if(t==0)
		break;
		cout<<dp[t]<<endl;

	}

	// your code here

	return 0;
}
