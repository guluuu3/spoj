#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int max(long long int x,long long int y)
{
    return (x>y?x:y);
}
int main()
{
	freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	int c=1;
	while(t--)
	{
	    //printf("Case %d :" ,c);
	   //c++;
		 int n;
		scanf("%d",&n);
		long long int arr[1001];
		//if(n!=0)
        //{
		for( int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		long long int dp[1001];
		/*for(long long int i=0;i<n;i++)
		{
			dp[i]=arr[i];
		}*/
		dp[0]=arr[0];
		dp[1]=max(dp[0],arr[1]);
		for(int i=2;i<n;i++)
		{
			dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
		}
		/*for(int i=0;i<n;i++)
		{
			cout<<dp[i]<< " ";
		}
		cout<<endl;*/
		//printf("%lld\n",dp[n-1]);
		//cout<<"Case"<<" "<<c<<":"<<" "<<dp[n-1]<<endl;
		printf("Case %d: %lld\n", c, dp[n-1]);
		c++;
        //}
       /* if(n==0)
        {
            printf("Case %d: %d\n",c,0);
        }*/

	}
	return 0;
}
