#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    while(scanf("%lld %lld",&x,&y))
    {
        if(x==-1||y==-1)
            break;
        long long int sum1=0;
        for(int i=1;i<x;i++)
        {
            sum1=sum1+i;
        }
        long long int sum2=0;
        for(int i=1;i<=y;i++)
        {
            sum2=sum2+i;
        }
        cout<<sum2-sum1<<endl;
    }

    return 0;
}
