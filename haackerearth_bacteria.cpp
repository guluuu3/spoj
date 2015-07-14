#include <iostream>
using namespace std;
#define mod 1000000007
long long arr[1000005];

int main()
{
	long long int x,y;
	cout<<"enter the numbers :";

	cin>>x>>y;
	 long long int n;
	 cout<<"enter the number of inputs:";
	cin>>n;
	while(n--)
	{   long long int N;
	    cout<<"enter the number of query:";
		cin>>N;

		arr[0]=	1;
		for(  int i=1;i<=N;i++)
		{
		arr[i]=((x*arr[i-1])-y)%mod;
		}
			cout<<arr[N]<<endl;
	  }

    //cout << "Hello World!" << endl;
    return 0;
}
