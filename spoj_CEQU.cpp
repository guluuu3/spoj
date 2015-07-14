#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a , long long int  b)
{
	if(b==0 || a==0)
		return 0;
	if(b%a==0)
		return a;
	else
		return gcd(b%a,a);
}

int main()
{
    freopen("test.txt","r",stdin);
	long long int t;
	scanf("%lld",&t);
    long long int ct=1;
	while(t--)
	{
		//cout<<"Case"<<" "<<ct<<":";
		long long int a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);

		long long int g=gcd(a,b);
		if(c%g==0)
			cout<<"Case "<<ct<<": Yes"<<endl;
		else
		cout<<"Case "<<ct<<": No"<<endl;
		ct++;

	}
	return 0;
}
