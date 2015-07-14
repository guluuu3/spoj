#include <iostream>
using namespace std;

int main()
{
	int n;
    cin>>n;
    int arr[110];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    int lis[110];
    for(int i=0;i<n;i++)
    {
    	lis[i]=1;
    }
    for(int i=1;i<n;i++)
    {
    	for( int j=0;j<i;j++)
    	{
    		if(arr[i]>arr[j] && lis[i]<lis[j]+1)
    		lis[i]=lis[j]+1;
    	}
    }
    int maxi=0;
    for(int i=0;i<n;i++)
    {
    	if(maxi<lis[i])
    	{
    		maxi=lis[i];
    	}
    }
   // cout<<maxi<<endl;
     long long int rem;
     long long int i=1;
     long long binary=0;
    while(maxi!=0)
    {
    rem=maxi%2;
    binary=binary+rem*i;
    maxi=maxi/2;
    i=i*10;


    }
    cout<<binary<<endl;
}
