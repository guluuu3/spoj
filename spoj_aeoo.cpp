#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                //cout<<j<<endl;
                sum=sum+1;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
