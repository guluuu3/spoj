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
        int n,f;
        scanf("%d %d",&n,&f);
        long double volume=0;
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            volume=volume+(x*x);
        }
        long double pi=3.14159;
        volume=volume*pi;
        cout<<volume<<endl;
        //long double ans=volume/f;
        //printf("%.4lf\n",ans);

    }
    return 0;
}
