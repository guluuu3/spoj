#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int dp[100005];
    dp[0]=0;
	dp[1]=1;
	for(long long int i=2;i<=100000;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
    while(t--)
    {
    	long long int x,y;
    	cin>>x>>y;
    	long long int c=0;
    	for(long long int i=x;i<=y;i++)
    	{
    		if(dp[i]>=x &&  dp[i]<=y)
    		{
    			c++;
    		}
    		cout<<dp[i]<<endl;
    	}
    	cout<<c<<endl;
    }//cout << "Hello World!" << endl;
    return 0;
}
