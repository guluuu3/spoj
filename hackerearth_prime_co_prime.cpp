#include <iostream>
#include<limits.h>
#include<climits>
#include<stdlib.h>
#include<cstdio>
#include<list>
#include <bits/stdc++.h>
using namespace std;
unsigned int gcd(unsigned int u, unsigned int v)
{
    // simple cases (termination)
    if (u == v)
        return u;

    if (u == 0)
        return v;

    if (v == 0)
        return u;

    // look for factors of 2
    if (~u & 1) // u is even
    {
        if (v & 1) // v is odd
            return gcd(u >> 1, v);
        else // both u and v are even
            return gcd(u >> 1, v >> 1) << 1;
    }

    if (~v & 1) // u is odd, v is even
        return gcd(u, v >> 1);

    // reduce larger argument
    if (u > v)
        return gcd((u - v) >> 1, v);

    return gcd((v - u) >> 1, u);
}
bool isprime(int number)
{
	if (number <= 1) return false; // zero and one are not prime
    unsigned int i;
    for (i=2; i*i<=number; i++)
    {
        if (number % i == 0) return false;
    }
    return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int n;
		cin>>n;
		int c=0;
		for(unsigned int i=1;i<n;i++)
		{
			unsigned int x=gcd(i,n);
			if(x==1)
			{
				c++;
			}
		}
		cout<<c<<endl;
		if(isprime(c)==true)
		{
			cout<<"TRUE"<<endl;
		}
		if(isprime(c)==false)
			cout<<"FALSE"<<endl;


	}
    //cout << "Hello World!" << endl;
    return 0;
}
