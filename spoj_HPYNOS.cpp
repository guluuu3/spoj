#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int ct;
bool fun(long long int n,bool visited[])
{
    visited[n]=true;
    if(n==0)
    return false;
    int sum=0;
    while(n)
    {
        sum=sum+pow(n%10,2);
        n=n/10;
    }
    //cout<<sum<<endl;
    if(sum==1)
    {
        ct++;
        cout<<ct<<endl;
        return true;
    }
    else if(visited[sum]==true)
        return false;
    else if(sum!=1 && visited[sum]==false)
    {
        ct++;
        fun(sum,visited);
    }
    return false;
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    bool visited[1000]={0};
    //memset(visited,false,sizeof(visited));
    ct=0;
    if(fun(t,visited)!=true)
    {
        //cout<<ct<<endl;
        cout<<"-1"<<endl;
    }
    return 0;
}
