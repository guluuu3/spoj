#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,w;
		scanf("%d %d",&n,&w);
		int arr[n+5];
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int a=1;
		int b=1;
		int sum=arr[1];
		int ans1=INT_MAX;
		int ans2=0;
		while(b<=n && a<n)
		{
			if(sum<=w)
			{
				if(b-a+1>ans2)
				{
					ans2=b-a+1;
					ans1=sum;
				}
				else
				{
					if(b-a+1==ans2)
					{
						ans1=min(ans1,sum);
					}
				}
			}
			if(sum<w)
			{
				b++;
				sum=sum+arr[b];

			}
			else
			{
				a++;
				sum=sum-arr[a-1];
			}


		}
		printf("%d %d\n",ans1,ans2);
		/*int dp[100];
		for(int i=0;i<=n;i++)
        {
            dp[i]=0;
        }
		for(int start=1;start<=n;start++)
		{
			int a=1;
			int sum=arr[start];

		    int b=1;
		    while(b<=n)
		    {
		    	if(sum>=w)
		    	{
		    		sum=sum-arr[a];
		    		a++;
		    	}
		    	else if(sum<w)
		    	{
		    		b++;
		    		dp[start]=max(dp[start],sum);
		    		sum=sum+arr[b];
		    	}
		    }

		}
		for(int i=1;i<=n;i++)
        {
            cout<<dp[i]<< " ";
        }
		/*int ans=dp[0];
		    for(int i=1;i<n;i++)
		    {
		    	ans=max(dp[i],ans);
		    }
		    printf("%d\n",ans);*/

	}
	return 0;
}
