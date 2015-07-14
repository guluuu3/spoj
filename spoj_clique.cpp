#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int x,y,z;
    while(cin>>x>>y>>z)
    {
        if(z%2==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
