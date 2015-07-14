#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    bool friends[MAX];
    bool friends_friends[MAX];
    memset(friends,false,sizeof(friends));
    memset(friends_friends,false,sizeof(friends_friends));
    int k=0;
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(friends[x]==false)
        {
            friends[x]=true;
        }
        if(friends_friends[x]==true)
        {
            k--;
        }
        int y;
        scanf("%d",&y);
        while(y--)
        {
            int z;
            scanf("%d",&z);
            if(friends_friends[z]==false && friends[z]==false)
            {
                friends_friends[z]=true;
                k++;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
