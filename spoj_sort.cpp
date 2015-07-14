#include <iostream>
#include<bits/stdc++.h>
#include<list>
#include<string>
#include<stdlib.h>
#include<cstdio>
#define MAX 1000000
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,x,y;
       cin>>n>>x>>y;
       for(int i=2;i<n;i++)
       {
           if(i%x==0 && i%y!=0)

           {
               cout<<i<<" ";
           }
       }
    }

return 0;
}

