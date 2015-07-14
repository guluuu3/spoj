#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        int flag=0;
        scanf("%lld",&n);

        for(int i=2;i<=sqrt(n);i++)
        {
            int ct=0;
           while(n%i==0)
           {
               ct++;
               n=n/i;
           }
           if(i%4==3 && ct%2==1)
           {
               flag=1;
               break;
           }
        }
        if(n%4==3)
            flag=1;
        if(flag==0)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
