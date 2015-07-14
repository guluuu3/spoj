#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define MAXI 1000005
//long long int dp[MAXI];
long long  fact(long long int n,long long int k)
{

    if(k>n-k)
        k=n-k;
    if(n-k==0)
        return 1;
    long long int x=1;
    for(long long int i=0;i<=k-1;i++)
    {
        x=(x)*(n-i)/(i+1);
    }
    //cout<<x<<endl;
    return x;
}

int main()
{
    int t;
    scanf("%d",&t);
    //fact();
    while(t--)
    {
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        long long int x=fact(n+k-1,n-1);
        //x=x/fact(k-1);

        printf("%lld\n",x);
    }
    return 0;
}
