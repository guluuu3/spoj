#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define MAXI 1000009
int main()
{
    long long int n;
    while(scanf("%lld",&n))//;
    {
        if(n==-1)
            break;

        //if(n%2!=0)
        //{
            n--;
            if(n%3==0)
            {
                n=n/3;
                n=4*(n)+1;
                int temp=sqrt(n);
                if(temp*temp==n)
                {
                    printf("Y\n");
                }
                else
                {
                    printf("N\n");
                }
            }
        //}
        else
            printf("N\n");
    }
    return 0;
}
