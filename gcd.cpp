#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long gcd(long long a , long long b){
	if(b==0 || a==0)
		return 0;
	if(b%a==0)
		return a;
	else
		return gcd(b%a,a);
}
int main()
{
    cout<<gcd(36,12);
    return 0;
}
