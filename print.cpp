#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int modulo(long long int a,long long int b,long long int c)
{
	long long int x=1;
	long long int y=a;
	while(b>0)
	{
		if(b%2==1)
		{
			x=(x*y)%c;
		}
		y=(y*y)%c;
		b=b/2;
	}
	return (x%c);
}
bool fermat(long long int p,long long int iterations)
{
	if(p==1)
	return false;
	for(int i=0;i<iterations;i++)
	{
		long long int a=rand()%(p-1)+1;
		if(modulo(a,p-1,p)!=1)
		return false;
	}
	return true;
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int x,y;
		cin>>x>>y;
		for(long long int i=x;i<=y;i++)
		{
			if(fermat(i,100000000))
			cout<<i<<endl;
		}
		cout<<endl;
	}
	// your code here

	return 0;
}
