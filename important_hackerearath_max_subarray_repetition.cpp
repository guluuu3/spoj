#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int dp[10][2];
		for(int i=0;i<10;i++)
		{
			dp[i][0]=0;
			dp[i][1]=0;
		}
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(dp[arr[i]][0]==0)
			{
				dp[arr[i]][0]=i;
			}
			if(dp[arr[n-i-1]][1]==0)
			{
				dp[arr[n-i-1]][1]=n-i-1;
			}
		}
		int maxi=0;
		for(int i=0;i<10;i++)
		{
			if(dp[i][1]-dp[i][0]+1>maxi)
			maxi=dp[i][1]-dp[i][0]+1;
		}
		cout<<maxi<<endl;

	}
    //cout << "Hello World!" << endl;
    return 0;
}
