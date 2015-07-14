#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    set<int>::iterator it;
    for(it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        int y;
        cin>>y;
        it=st.find(y);
        cout<<*it<<endl;
    }

    return 0;
}
