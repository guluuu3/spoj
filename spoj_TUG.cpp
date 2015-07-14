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
		long long int n;
		scanf("%lld",&n);
		long long int arr[n+5];
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			sum=sum+arr[i];
		}

	bool  dp[sum+5];
	dp[0]=true;
		for(int i=1;i<=sum;i++)
        {
            dp[i]=false;
        }
        bool flag=false;
        for(int i=0;i<n && flag==false;i++)
        {

            for(int j=res+arr[i];j>=arr[i];j--)
            {

                if(dp[j])
                {
                    if(dp[j+arr[i]]==true)
                    {
                        printf("YES\n");
                        flag=true;
                        break;

                    }
                    else
                    dp[j+arr[i]]=true;
                }
            }
        }
        if(flag==false)
            printf("NO\n");

	}
	return 0;
}
