#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *( int*)b - *(int*)a );
}
int main()
{
    freopen("test.txt","r",stdin);
    long long int t;
    scanf("%lld",&t);
    int ct=1;
    while(t--)
    {
        cout<<"Scenario"<<" "<<"#"<<ct<<":"<<endl;
        ct++;
        long long int x,y;
        scanf("%lld %lld",&x,&y);
         int arr[y];
        for(int i=0;i<y;i++)
        {
            scanf("%d",&arr[i]);
        }
        qsort(arr,y,sizeof( int),compare);
        //for(int i=0;i<y;i++)
        //{
            //cout<<arr[i]<< " ";
        //}
        //cout<<endl;
        long long int sum=0;
         int flag=0;
         for(int i=0;i<y;i++)
         {
             sum=sum+arr[i];
             if(sum>=x)
             {
                 cout<<i+1<<endl;
                 flag=1;
                 break;
             }
         }
          if(flag==0)
         {
             cout<<"Not possible"<<endl;
         }
        //sort(arr[])


    }
    return 0;
}
