#include <iostream>
using namespace std;
#define MAX 1000004
long long int dp[MAX+1][3];
void combination()
{
     for(int i=0;i<=MAX;i++)
     {
     	for(int j=0;j<=2;j++)
     	{
     		if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
     	}
     }
}
int main()
{
	int t;
	cin>>t;
	combination();
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<dp[m+1][2]<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
