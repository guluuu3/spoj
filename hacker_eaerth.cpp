#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[]={1000,500,100,50,20,10,5,2,1};
	while(t--)
	{
		int n;
		cin>>n;
		int i=0;
		int c=0;
		while(n>0)
		{
		if(n>=arr[i])
		{
			c=c+n/arr[i];
			n=n%arr[i];
			i++;
		}
		else
		{
			i++;
		}
		}
		cout<<c<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
