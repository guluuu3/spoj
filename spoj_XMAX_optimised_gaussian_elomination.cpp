#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int length(long long int n)
{
    int ct=0;
    while(n)
    {
        ct++;
        n>>=1;
    }
    return ct;
}
int main()
{
    freopen("test.txt","r",stdin);
     int n;
    scanf("%d",&n);
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int lengths[n];
    for(int i=0;i<n;i++)
    {
        lengths[i]=length(arr[i]);
    }
    vector<long long int>bucket[65];
    for( int i=0;i<n;i++)
    {
        bucket[lengths[i]].push_back(arr[i]);
    }
    long long int temp_arr[1000],max_index=0;
    for(int i=64;i>0;i--)
    {
        if(bucket[i].size())
        {
            temp_arr[max_index++]=bucket[i][0];
            for(int j=1;j<bucket[i].size();j++)
            {
                long long int temp=(bucket[i][0]^bucket[i][j]);
                //cout<<temp<<" ";
                int len=length(temp);
                bucket[len].push_back(temp);
            }
        }
    }
    long long int maxi=0;
   /* for(int i=0;i<max_index;i++)
    {
        cout<<temp_arr[i]<< " ";
    }*/
    //cout<<endl;
    for(int i=0;i<max_index;i++)
    {
        if(maxi<(maxi^temp_arr[i]))
            maxi=(maxi^temp_arr[i]);
    }
    cout<<maxi<<endl;
    return 0;
}
