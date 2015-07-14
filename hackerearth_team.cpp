#include <iostream>
#include<stdlib.h>
#include<cstdio>
#include<climits>
using namespace std;

int main()
{
   int t;
	int arr[10000];
    cin>>t;
    while(t--)
    {

    	int n;
    	cin>>n;
    	int k[n][n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    		k[i][0]=arr[i]+arr[0];
    	}
    	for(int i=0;i<n;i++)
    	{
    		k[i][i]=0;
    	}
    	for(int i=0;i<n;i++)
    	{
    		for(int j=1;j<n;j++)
    		{
    		    if(i!=j)
    		k[i][j]=arr[i]+arr[j];//,k[i][j-1]);
    		}
    	}


    	int maxi=arr[0];
    	int pos=0;
      for(int i=1;i<n;i++)
      {
          if(arr[i]>maxi)
          {
            maxi=arr[i];
            pos=i;
          }

      }
  //cout<<pos<<" "<<maxi<<endl;
  int mini=INT_MAX;
  //for(int i=0;i<n;i++)
  //{
  //	cout<<k[pos][i]<<" ";
  //}
  //cout<<endl;
  for( int i=0;i<n;i++)
{

    for(int j=0;j<n;j++)
    {

        if(i!=j)
        {
            if(abs(k[pos][i]-k[pos][j])<mini)
                mini=abs(k[pos][i]-k[pos][j]);
        }

    }
   // cout<<endl;
}
       cout<<mini<<endl;


    	}

    return 0;
}
