#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    typedef pair<int,int>pairs;

    long long int t;
    scanf("%lld",&t);
    pairs p[t];
    for(int i=0;i<t;i++)
    {
       scanf("%lld %lld",&p[i].first,&p[i].second);
    }
    set<pairs>s;
    set<pairs>::iterator it;
    for(int i=0;i<t;i++)
    {
        s.insert(p[i]);
        it=s.find(p[i]);
        it++;
        if(it!=s.end())
        {
            s.erase(it);
        }
    }
    cout<<s.size()<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        //s.find()
        pairs m=*it;
        cout<<m.first<<"  "<<m.second<<endl;
    }//*/
    return 0;
}
