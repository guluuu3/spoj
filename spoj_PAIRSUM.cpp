#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    freopen("test.txt","r",stdin);
	long long int n;
	scanf("%lld",&n);
	long long int arr[n+5];
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int u,v;
		scanf("%lld %lld",&u,&v);
		//long long int u=min(u,v);
		//long long int v=max(u,v);
		long long int i=u;
		long long int sum=0;
		for(int j=i;j<=v;j++)
		{
			sum=sum+arr[i]*arr[j];
			cout<<i<<" "<<j<<endl;

            if(j==v)
            {

                j=i++;
            }
            if(i>v)
            {
            	break;
            }
		}
		//sum=sum+arr[v]*arr[v];
         printf("%lld\n",sum);
	}
	return 0;
}
