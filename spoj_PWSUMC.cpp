#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long int b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return power(a,b/2)*power(a,b/2);
    else
        return power(a,b/2)*power(a,b/2)*a;
}
int main()
{
    freopen("test.txt","r",stdin);
    long long int n,p;
    long long int ct=1;
    while(scanf("%lld %lld",&n,&p)!=EOF)
    {
        long long int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+(power(i,ct))%p;
        }
        printf("%lld\n",sum%p);
        ct++;
    }
    return 0;
}
