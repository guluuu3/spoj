#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isdivisible2(long long int n)
{
    n=n%10;
	if(n%2==0)
		return 1;
	else
		return 0;
}
bool isdivisible3(long long int n)
{
	long long int sum=0;
	while(n)
	{
		sum=sum+n%10;
		n=n/10;
	}
	//cout<<sum<<" ";
	if(sum>=10)
	{
		int x=0;
		while(sum)
		{
			x=x+sum%10;
			sum=sum/10;
		}
		//cout<<x<< " ";
		if(x%3==0)
			return true;
		else return false;

	}
	else
	{
		if(sum%3==0)
			return true;
		else return false;
	}

}
bool isdivisible4(long long int n)
{
    n=n%100;
    if(n%4==0)
        return true;
    else return false;
}
bool isdivisible8(long long int n)
{
    n=n%1000;
    if(n%4==0)
        return true;
    else return false;
}
bool isdivisible5(long long int n)
{
    n=n%10;
    if(n%5==0)
        return true;
    else return false;
}
bool isdivisible7(long long int n)
{
    if(n<0)
        return isdivisible7(-n);
    if(n==0 || n==7)
    return true;
    if(n<10)
        return false;
    return isdivisible7( n / 10 - 2 * ( n - n / 10 * 10 ) );

}
bool isdivisible9(long long int n)
{
	long long int sum=0;
	while(n)
	{
		sum=sum+n%10;
		n=n/10;
	}
	//cout<<sum<<" ";
	if(sum>=10)
	{
		int x=0;
		while(sum)
		{
			x=x+sum%10;
			sum=sum/10;
		}
		//cout<<x<< " ";
		if(x%9==0)
			return true;
		else return false;

	}
	else
	{
		if(sum%9==0)
			return true;
		else return false;
	}

}

int main()
{


return 0;
}
