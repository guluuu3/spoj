#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int t;
    cin>>t;
    while(t--)
    {
     int x;
     int visited[n+1];
     memset(visited,0,sizeof(visited));
     cin>>x;
     int arr[x];
    for(int k=0;k<x;k++)
    {

        cin>>arr[k];
    }
    for(int k=0;k<x;k++)
    {
    //cout<<a;
        for(int i=1;i<=n;i++)
     {
        int temp=i;
        //int res=10;
        while(temp>0)
        {
            if((temp%10)==arr[k])
            {
            visited[i]++;
            break;
            }
            else
            {
                temp=temp/10;

            }
        }
     }
    }
    int c=0;
    for(int i=1;i<=n;i++)
    {
    	//cout<<visited[i]<<endl;
        if(visited[i]!=0)
        {
            c++;
        }
    }
     cout<<c<<endl;
    }

    return 0;
}
