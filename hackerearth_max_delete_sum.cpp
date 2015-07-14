#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int sum=0;
		for(int i=1;i<n;i++)
		{
			sum=sum+abs(arr[i]-arr[i-1]);
		}
		long long int min_sum=sum-(abs(arr[0]-arr[1]));
		long long int pos=0;
		if(min_sum>sum-(abs(arr[n-1]-arr[n-2])))
		{
			min_sum=sum-abs(arr[n-1]-arr[n-2]);
			pos=n-1;
		}
		for(long long int i=1;i<n-1;i++)
		{
			long long int res=sum-abs(arr[i]-arr[i-1])-abs(arr[i]-arr[i+1]);
			res=res+abs(arr[i+1]-arr[i-1]);
			if(min_sum>=res)
			{
				if(min_sum==res)
				{
					pos=min(pos,i);
				}
				else
				{
					pos=i;
				}
				min_sum=res;
			}
		}
		cout<<pos<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
