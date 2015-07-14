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
		int n,k,d;
		int arr[510];
		scanf("%d %d %d",&n,&k,&d);
		int ct=0;
		for(int i=0;i<n;i++)
		{

			scanf("%d",&arr[i]);
			while((arr[i]=arr[i]-d )>0)
            {
                ct++;
            }
		}
		//cout<<ct<<" ";
		if(ct>=k)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
