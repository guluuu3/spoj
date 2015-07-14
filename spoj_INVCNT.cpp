#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int count_merge(long long int arr[],long long int low,long long int high)
{
    long long int i=low;
    long long int mid=(low+high)/2;
    long long int j=mid+1;
    long long start=0;
    long long int merge[high-low+1];
    long long int inversion =0;
    while(i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            merge[start++]=arr[i++];
        }
        else{
           merge[start++]=arr[j++];
           inversion=inversion+mid-i+1;
        }
    }
    while(i<=mid)
    {
        merge[start++]=arr[i++];
    }
    while(j<=high)
    {
        merge[start++]=arr[j++];
    }
     for (i=0 ; i<high-low+1 ; i++)
        arr[i+low] = merge[i];

    return inversion;

}
long long int count_inversion(long long int arr[],long long int low,long long int high)
{
    long long int x,y,z,mid;

    if(low>=high)
        return 0;
     mid =(low+high)/2;
    x=count_inversion(arr,low,mid);
    y=count_inversion(arr,mid+1,high);
    z=count_merge(arr,low,high);

    return (x+y+z);
}
int main()
{
    freopen("test.txt","r",stdin);
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        /*for(int i=0;i<n;i++)
        {
            printf("%lld  ",arr[i]);
        }
        cout<<endl;
        cout<<endl;*/
        long long int inversion=count_inversion(arr,0,n-1);
        /*for(int i=0;i<n;i++)
        {
            printf("%lld  ",arr[i]);
        }
        cout<<endl;
        cout<<endl;//<<endl;*/
        cout<<inversion<<endl;
    }
    return 0;
}
