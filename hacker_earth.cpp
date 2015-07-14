#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
using namespace std;
#define MAX 100005
long long int arr[MAX];
long long int power(long long int  b,long long int e)
{
    long long int r=1;
    while(e)
    {
        if(e&1)
        {
            r= (long long int)r*b;
        }

        e >>= 1;
        b = b*b;

    }

    return r;

}
void markmultiples(int a)
{
	int i=2,num;
	while((num=i*a)<=MAX)
	{
		arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
	}
	return;
}
void cal()
{

    memset(arr,0,sizeof(arr));
	for(int i=1;i<MAX;i++)
	{
		if(arr[i]==0)
		{
			markmultiples(i+1);
		}//means i+1 is prime
	}
	return ;
}
long long  int max(long long int a,long long int b)
{
	return (a>b)?a:b;
}
long long int gcd(long long int a,long long int b) {if(b==0) return a; else return gcd(b,a%b);}

int main()
{
	int t;
	cin>>t;
	cal();
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		long long int a=power(2,x)-1;
		long long int b=power(2,y)-1;
		//cout<<a<<b;
	    int 	c=0;
		for(long long int i=2;i<=gcd(a,b);i++)
		{
			if(arr[i-1]==0)//i is prime
			{
				if(a%i==0 && b%i==0)
				{
					c++;
				}
			}
		}
		cout<<c<<endl;
	}
    //cout2
    //22 << "Hello World!" << endl;
    return 0;
}
