#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d\n",&n);
        map<string,int>p;
        map<string,int>::iterator it;
        char str[40];
        for(int i=0;i<n;i++)
        {
            gets(str);
            p[(string)str]++;
        }
        for(it=p.begin();it!=p.end();it++)
        {
            printf("%s %d\n",it->first.c_str(),it->second);
        }
        printf("\n");
        //sort(p,p+n);
       // cout<<p[i].first<<" "<<p[i].second<<endl;
       //for(int i=0;i<n;i++)
         //cout<<p[i].first<<" "<<p[i].second<<endl;
       //cout<<p[i].first<<" "<<str1<<" "<<str2<<" "<<str3<<" "<<p[i].second<<endl;
      // cout<<endl;
    }
    return 0;
}
