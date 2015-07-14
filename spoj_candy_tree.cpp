#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	printf("\n");
        long long int n;
        scanf("%lld",&n);
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
           scanf("%lld",&x);
            sum=sum+x;
            sum=sum%n;
        }
        if(sum==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


   }
   return 0;
}
