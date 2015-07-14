#include <iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int compare(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
     int t;
     long long int arr[100000];
    cout<"enter the ";
    cin>>t;
    while(t--)
    {
    	//vector<int>a(100000000);
    	//vector<int>b(100000000);
    	long long int a,b;
        int n;
    	cin>>a>>b>>n;
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	qsort(arr,n,sizeof( long long int),compare);
    	cout<<arr[0];
         int k=0;
    	 int c=0;
    	while(a>arr[k] && k<n)
    	{


    		a=a-arr[k];
    		c++;
    		k++;
    	}


    	  int k1=0;
    	  int count1=0;
    	while(b>arr[k1] && k1<n)
    	{

    		b=b-arr[k1];
    		count1++;
    		k1++;
    	}


    	if(c>count1)
        {
            cout<<"Raghu Won"<<endl;

        }
        if(c<count1)
         cout<<"Sayan Won"<<endl;
         else
            cout<<"Tie"<<endl;
    	 //cout<<(count>count1)?"Raghu Won":"Sayan Won";
    	 //cout<<endl;
    }
    return 0;
}
