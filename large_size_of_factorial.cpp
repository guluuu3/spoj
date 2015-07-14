#include <iostream>
using namespace std;
#define MAX 100000
long long int multiply(long long int x,long long int res[],long long int res_size);
void factorial(long long int n)
{
	long long int res[MAX];
	res[0]=1;
	long long int res_size=1;
	for(long long int i=2;i<=n;i++)
	{
		res_size=multiply(i,res,res_size);
	}
	cout<<res_size<<endl;

return;
}
long long int multiply(long long int x,long long int res[],long long int res_size)
{
	long long int carry=0;
	for(long long int i=0;i<res_size&&res[i]==0;i++)
	{
		long long int prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}

	while(carry>0)
	{
		res[res_size]=carry%10;
		carry=carry/10;
		res_size++;
	}
	return res_size;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x;
		cin>>x;
		factorial(x);
	}
    //cout << "Hello World!" << endl;
    return 0;
}
