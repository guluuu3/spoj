#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int x,y;
    while(cin>>x>>y)
    {
         int res;
        if(x==-1&& y==-1)
            break;
        if(x==0 && y==0)
            res=0;
        else if(x==y)
            res=1;
            else
            {
                if(x<y)
             {
              //mini=x;
              res=(y+x)/(x+1);//+(y%(x+1)>0);
              //cout<<res<< " "<<y%(x+1)<<endl;

             }
             else
                {
                     res=(x+y)/(y+1);//+(x%(y+1)>0);
                    //cout<<res<<" "<<x%(y+1)<<endl;
                }
            }
            cout<<res<<endl;
    }
    return 0;
}
