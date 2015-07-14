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
		long long int n,k;
		scanf("%lld %lld",&n,&k);
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		//qsort(arr,n,sizeof(long long int),compare);
		sort(arr,arr+n);
		long long int diff[n];
		/*for(int i=0;i<n-1;i++)
		{
			diff[i]=arr[i+1]-arr[i];

		}
		/*for(int i=0;i<n;i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl;

		qsort(diff,n-1,sizeof(long long int),compare);
		sort(diff,diff+n-1);
		/*for(int i=0;i<n-1;i++)
        {

            cout<<diff[i]<< " ";
        }
        cout<<endl;*/
        long long int mini=INT_MAX;
        for(int i=0;i<=n-k;i++)
        {
        	mini=min(mini,arr[i+k-1]-arr[i]);
        }
        printf("%lld\n",mini);
	}
	return 0;
}
