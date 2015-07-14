#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int d;
	cin>>d;
	long long int exam[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>exam[i];
	}
	long long int c=0;
	for(long long int i=1;i<n;i++)
	{
		while(exam[i]<=exam[i-1])
		{
			exam[i]=exam[i]+d;
			c++;
		}
	}
	cout<<c<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
