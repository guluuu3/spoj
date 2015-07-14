#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2==0 && y%2==0)
        {
            if(x==y)
                cout<<x+y<<endl;
                else if(y==x-2)
                    cout<<x+y<<endl;
                else cout<<"No Number"<<endl;

        }
        else if(x%2!=0 && y%2!=0)
        {
            if(x==y)
                cout<<x+y-1<<endl;
            else if(y==x-2)
                cout<<x+y-1<<endl;
            else cout<<"No Number"<<endl;
        }
        else if(x%2!=0 && y%2==0)
            cout<<"No Number"<<endl;
        else if(x%2==0 && y%2!=0)
            cout<<"No Number"<<endl;
    }
    return 0;
}
