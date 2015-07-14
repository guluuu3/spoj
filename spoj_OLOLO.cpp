#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int x;
    scanf("%lld",&x);
    long long int xor_x=x;
    for(int i=1;i<n;i++)
    {
        long long int t;
        scanf("%lld",&t);
       xor_x=xor_x^t;
    }
    printf("%lld",xor_x);
    return 0;
}
