#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        x=x%10;
        if(x==0){cout<<"0"<<endl;continue;}
        if(x==1){cout<<"1"<<endl;continue;}
        if(y==0){cout<<"1"<<endl;continue;}
        if(y==5){cout<<"5"<<endl;continue;}
        if(y==6){cout<<"6"<<endl;continue;}
         y=y%4;
         if(y==0)
            y=4;
            int res=1;
        while(y--)
        {
        	res=res*x;
        }
        cout<<res%10<<endl;

    }
    return 0;
}
