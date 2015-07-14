#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int t;
	cin>>t;
	while(t--)
	{
	    long long int lcs[n+1];
        for(int i=0;i<=n;i++)
	    {
		lcs[i]=1;
        }
		long long int maxi;
		int x,y;
		cin>>x>>y;
        int ct=0;

            maxi=arr[x];
            for(int j=x+1;j<=y;j++)
            {
                if(maxi<arr[j])
                {
                    ct++;
                    maxi=arr[j];
                }
            }



		cout<<ct<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
