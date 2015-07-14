#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int max_curr=arr[0];
    long long int curr=arr[0];
    for(int i=1;i<n;i++)
    {
        max_curr=max(arr[i],max_curr^arr[i]);
        curr=max(curr,max_curr);
    }
    cout<<curr<<endl;
    return 0;
}
