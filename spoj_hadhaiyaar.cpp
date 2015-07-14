#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    while(cin>>t)
    {
        if(t==0)
            break;
         double x=(t*t)/(2*M_PI);
         printf("%.2lf\n",x);

    }
    return 0;
}
