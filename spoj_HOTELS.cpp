#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
	int n,total;
	scanf("%d %d",&n,&total);
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a=1;
	int b=1;
	int sum=arr[1];
    int ans=0;
	while(b<=n)
	{
		if(sum>total)
		{
			sum=sum-arr[a];
			a++;
		}
		else if(sum<=total)
		{
             b++;
             ans=max(ans,sum);
             sum=sum+arr[b];
		}
	}
cout<<ans<<endl;
	return 0;

}
