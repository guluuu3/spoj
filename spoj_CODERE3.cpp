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
		long long int arr[n+1];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		long long int lis[n+1],lds[n+1];
		for(int i=0;i<n;i++)
		{
			lis[i]=1;
			lds[i]=1;
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(arr[i]>arr[j] && lis[i]<lis[j]+1)
				{
					lis[i]=lis[j]+1;
				}
			}

		}
		for(int i=n-1;i>=0;i--)
		{
			for(int j=n-1;j>i;j--)
			{
				if(arr[i]>arr[j] && lds[i]<lds[j]+1)
					lds[i]=lds[j]+1;
			}
		}
		long long int maxi=lds[0]+lis[0]-1;
		for(int i=1;i<n;i++)
		{
			maxi=max(lis[i]+lds[i]-1,maxi);
		}
		printf("%lld\n",maxi);

	}
	return 0;
}
