#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int power(int a,int b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return power(a,b/2)*power(a,b/2);
    else
        return a*power(a,b/2)*power(a,b/2);
}

int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        float res=(2*power(0.5,n));
             //float x=res/(float)(power(10,n));
        cout<<res<<endl;

    }

	// your code here

	return 0;
}
