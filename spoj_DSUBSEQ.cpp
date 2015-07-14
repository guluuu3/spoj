#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int last_pos[100];
int dp[10005];
const int MOD = 1000000007;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string str;
		//scanf("%s",str);
		cin>>str;
		//cout<<str;
        //int len=str.length();
		//long long int sum[len+5];

		//memset(sum,0,sizeof(sum));
		memset(last_pos,-1,sizeof(last_pos));
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		//sum[0]=1;
		for(int i=1;i<=str.length();i++)
		{
			dp[i]=(dp[i-1]*2)%MOD;
			if(~last_pos[str[i]])
			{
				dp[i]=(dp[i]-dp[last_pos[str[i]]-1]+MOD)%MOD;
			}
				//sum[i+1]=(sum[i]+dp[i+1]);
				last_pos[str[i]]=i;

		}
		printf("%d\n",dp[str.length()]);

	}
	return 0;
}
