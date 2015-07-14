#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
            break;
            int arr[n];
            int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[i]=x;
            sum=sum+x;
        }
        int ct=0;
        if(sum%n!=0 )
            cout<<"-1"<<endl;

        else if(sum%n==0)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]>sum/n)
                {
                    ct=ct+arr[i]-(sum/n);
                }
            }
            cout<<ct<<endl;
        }

    }
    return 0;
}
