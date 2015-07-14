#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long int power(int a,int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return power(a,n/2)*power(a,n/2);
    else return a*power(a,n/2)*power(a,n/2);
}
int main()
{
    freopen("test.txt","r",stdin);
    int n;
    int k=1;
    while(scanf("%d",&n))
    {

        if(n==-1)
            break;
            //cout<<"Case"<<" "<<k<<":"<<endl;
            printf("Case %d:\n",k);
        ++k;
        int arr[n+1];
        for(int i=n;i>=0;i--)
        {
            scanf("%d",&arr[i]);
        }
        int t;
       scanf("%d",&t);
        while(t--)
        {
            int a;
            scanf("%d",&a);
             int sum=0;
            for(int i=n;i>0;i--)
            {
                sum=(sum)+(arr[i])*a;
            }
            sum=sum+arr[0];
            printf("%d\n",sum);
        }

    }
    return 0;
}
