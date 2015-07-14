#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{

    while(1)
    {
        string str;
        list<char>v;
        cin>>str;

        if(str.size()==1)
            break;
        int x;
        cin>>x;
       for(int i=0;i<x;i++)
       {
           for(int j=0;j<str.size();j++)
           {
               v.push_back(str[j]);
           }
       }

           list<char>:: iterator it;
           for(it=v.begin();it!=v.end();it++)
                    cout<<*it;
           cout<<endl;

for(int i=1;i<str.size();i++)
{
           char ch= v.front();
           cout<<ch<< " ";
           v.pop_front();
           v.push_back(ch);

           list<char>:: iterator it;
           for(it=v.begin();it!=v.end();it++)
                 cout<<*it;
                 cout<<endl;

}

           //v.push_back(ch);

    }

    return 0;
}

