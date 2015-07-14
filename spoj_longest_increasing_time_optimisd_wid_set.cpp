#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("test.txt","r",stdin);
     int x[100001];
         //int y[100001];
         int z[100001];
     int t;
    scanf("%d",&t);

    while(t--)
    {
         int n;
        scanf("%d",&n);

        //x[0]=z[0]=y[0]=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
            z[x[i]]=i+1;//c array stores the index of each of the digits//
            //cin>>x[i];
        }
        for(int i=0;i<n;i++)
        {
            int y;
            scanf("%d",&y);
            x[i]=z[y];//checks at waht index is element of b in a//if index is inceasing then common sequence
            //cin>>y[i];
        }
        set<int>s;
        set<int>::iterator it;
        for(int i=0;i<n;i++)
        {
            s.insert(x[i]);//elements are inserted in sorted order so no ned to worry of searching
            it=s.find(x[i]);
            it++;
            if(it!=s.end())//this is a middle value replace and cloned in the set this must be removed
            {
                s.erase(it);
            }
        }
        cout<<s.size()<<endl;
        //for(int i =0;i<n;i++)
        //{
           // cout<<x[i];
        //}
        //cout<<endl;

    }
    return 0;
}
