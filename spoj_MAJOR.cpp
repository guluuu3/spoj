#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int arr[n+5];
		for(int i=0;i<n;i++)
		{

			scanf("%lld",&arr[i]);

		}
		int count=1;
		int max_index=0;
		for(int i=1;i<n;i++)
		{
			if(arr[i]==arr[max_index])
			{
				count++;
			}
			else
			{
				count--;
			}
			if(count==0)
			{
				max_index=i;
				count=1;
			}
		}
		count=0;

            for(int i=0;i<n;i++)
            {
            	if(arr[max_index]==arr[i])
            	{
            		count++;
            	}
            }
            if(count>n/2)
            {
                printf("YES %lld\n",arr[max_index]);
                //cout<<"YES"<< " "<<arr[max_index]<<endl;
            }
            else
            {
                printf("NO\n");
            	//cout<<"NO"<<endl;
            }



	}
	return 0;
}
