#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    scanf("%lld",&x);
    if((x&(x-1))==0)
        printf("TAK\n");//<<endl;
    else
        printf("NIE\n");
        //cout<<"NIE"<<endl;
    return 0;
}
