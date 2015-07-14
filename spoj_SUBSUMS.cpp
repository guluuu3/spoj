#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generate_subset(int start,int n,int arr[],vector<int>&v)
{
	int sum;
	for(int count=0;count<(1<<n);count++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			if(count&(1<<j))
			{
				sum=sum+arr[start+j];
			}
		}
		v.push_back(sum);
	}
}
int main()
{
    freopen("test.txt","r",stdin);
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	int arr[n+5];
	vector<int>left_part;
	vector<int>right_part;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	generate_subset(0,n/2,arr,left_part);
	if(n&1)
	{
		generate_subset(n/2,n/2+1,arr,right_part);
	}
	else
	{
		generate_subset(n/2,n/2,arr,right_part);
	}
	sort(right_part.begin(),right_part.end());
	long long int ans=0;
	vector<int>::iterator low,high;
	for(int i=0;i<left_part.size();i++)
	{
		low=lower_bound(right_part.begin(),right_part.end(),a-left_part[i]);
		high=upper_bound(right_part.begin(),right_part.end(),b-left_part[i]);
		ans+=(high-right_part.begin())-(low-right_part.begin());
	}
	cout<<ans<<endl;

	return 0;
}
