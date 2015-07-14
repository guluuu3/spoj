#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
		   cin>>arr[i];
		}
		int c=0;
		for(int i=n-1;i>0;i--)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(arr[j]>arr[i])
				    c++;
			}
		}
		cout<<c<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
