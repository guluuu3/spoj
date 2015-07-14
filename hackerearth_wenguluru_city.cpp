#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int lmax[n];
		lmax[0]=arr[0];
		for(int i=1;i<n;i++)
		{
			if(lmax[i-1]<arr[i])
			{
				lmax[i]=arr[i];
			}
			else lmax[i]=lmax[i-1];
		}
		int rmax[n];
		rmax[n-1]=arr[n-1];
		for(int i=n-2;i>=0;i--)
		{
			if(rmax[i+1]<arr[i])
			{
				rmax[i]=arr[i];
			}
			else
			    rmax[i]=rmax[i+1];
		}
		int sum=0;
		for(int i=1;i<n-1;i++)
		{
		   if(min(lmax[i-1],rmax[i+1])>arr[i])
		      sum=(sum+(min(lmax[i-1],rmax[i+1])-arr[i]))%1000000007;

		}
		cout<<sum<<endl;

	}

    //cout << "Hello World!" << endl;
    return 0;
}
