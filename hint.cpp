#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    pair<int,int>p[100];
    for(int i=0;i<5;i++)
    {
        int x,y;
        cin>>x>>y;
        p[i].first=x;
        p[i].second=y;
    }
    //qsort(p,5,sizeof(*p),compare);
    sort(p,p+5);
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<p[i].first<<" "<<str1<<" "<<str2<<" "<<str3<<" "<<p[i].second<<endl;
    }
    return 0;
}
