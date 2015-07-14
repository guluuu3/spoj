#include <iostream>
#include<algorithm>
#include<stdio.h>
#include<cstdio>
using namespace std;
int compare(const void *a ,const void *b)
{

   return ( *(int*)b - *(int*)a );
}
int main()
{
    int t;
    cin>>t;
    long long int arr[100000];
    while(t--)
    {
    	long long c =0;
    	long long int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	qsort(arr,n,sizeof(long long int),compare);
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			if(arr[i]==arr[j])
    			c++;

    		}
    	}
    cout<<c<<endl;
    }
    return 0;
}
