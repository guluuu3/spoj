#include <iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;
//typedef long long ll;
long long int  compute(long long int arr[],long long int n)
{
	long long int lps[n];

		lps[0]=0;

	int i=1;
	long long int  length=0;
	while(i<n)
	{
		if(arr[length]==arr[i])
		{
			length++;
			lps[i]=length;
			i++;
		}
		else
		{
			if(length!=0)
			{
				length=lps[i-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
	long long int maxi=lps[0];
	for(long long int i=i;i<n;i++)
	{
		if(maxi<lps[i])
		{
			maxi=lps[i];
		}
	}
	return maxi;
}
int main()
{
	long long int   t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int  n;
		scanf("%lld",&n);
		long long int  arr[n];
		for(long long int  i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		cout<<compute(arr,n)<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
