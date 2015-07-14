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
		int n,k;

		int negative=0;
		int positive=0;
		int zero=0;
		int count_negative=0;
		int count_positive=0;
		scanf("%d%d",&n,&k);
		int arr[n+5];
		//cout<<n<<k<<endl;
		for(int i=0;i<n;i++)
		{
		    scanf("%d",&arr[i]);
		    //cin>>arr[i];
		    //cout<<arr[i]<< " ";
			if(arr[i]<0)
			{
				negative=1;
				count_negative++;
			}
			else if(arr[i]==0)
			{
				zero=1;
			}
			else if(arr[i]>0)
			{
				positive=1;
				count_positive++;
			}
		}
		if(zero==1)
		{
			if(negative==1)
			{
				if(k>count_negative)
				{
					for(int i=0;i<count_negative;i++)
					{
						if(arr[i]<0)
						arr[i]=(-1)*arr[i];
					}
				}
				else
				{
					for(int i=0;i<k;i++)
					{
						if(arr[i]<0)
						arr[i]=(-1)*arr[i];
					}
				}
			}

		}
		else
		{
			if(negative==1)
			{
				if(k>count_negative)
				{
					int rem=k-count_negative;
					for(int i=0;i<count_negative;i++)
					{
						if(arr[i]<0)
						{
							arr[i]=(-1)*arr[i];
						}
					}
					sort(arr,arr+n);
					if(rem%2!=0)
					{
						arr[0]=arr[0]*(-1);
					}

				}
				else
				{
					for(int i=0;i<k;i++)
					{
						if(arr[i]<0)
						arr[i]=(-1)*arr[i];
					}
				}
			}
			else
			{
				if(k%2!=0)
				{
					arr[0]=arr[0]*(-1);
				}
			}
		}
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		printf("%lld\n",sum);

	}
	return 0;
}
