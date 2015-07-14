#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int b)
{

    if(b==0)
        return 1;
    if(b%2==0)
        return power(a,b/2)*power(a,b/2);
    else return
    power(a,b/2)*a*power(a,b/2);

}
int main()
{
    freopen("test.txt","r",stdin);

	int c =1;
	while(1)
	{
       long long int n;
       long long int ans;
       scanf("%lld",&n);
       if(n==0)
        break;

       	ans=power(n,n-2);

       //cout<<"Case "<<c<<","<<" "<<"N="<<n<<","<<" "<<"# of different labelings ="<<" "<<ans<<endl;
       cout<<"Case "<<c++<<", N = "<<n<<", # of different labelings = "<<ans<<endl;
        //c++;
	}
	return 0;
}
