#include <iostream>
#define MOD 1000000007
using namespace std;
long long int pow_mod(long long int x,long long int y )
{
	long long int res=1;
 while(y>0)
 {
	if(y%2==0)
	{
		y=y/2;
		x=(x*x)%MOD;
	}
	else
	{
		y--;
		res=(res*x)%MOD;
	}
 }
	return (res)%MOD;
}
int main()
{
	long long int t;
	cin>>t;

	while(t--)
	{
	   long long int n;
	   cin>>n;
	   long long ans=pow_mod(2,n)-1;
	   cout<<ans<<endl;

	}
    //cout << "Hello World!" << endl;
    return 0;
}
