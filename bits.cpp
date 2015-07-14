#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long int x,y;
    scanf("%lld %lld",&x,&y);
    long long int sum=0;
    for(int i=x;i<=y;i++)
    {
        sum=sum+(i&-i);
    }
    cout<<sum<<endl;
    }
    return 0;
}

