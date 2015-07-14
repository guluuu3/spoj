#include <iostream>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
using namespace std;
static int k=0;

int compare(const void *a,const void*b)
{
	return (*(int*)a -*(int*)b);
}

int main()
{
	int t;
	cin>>t;
	int x=t;
	long long int arr[100000];
	for(int i=0;i<t;i++)
	{
	    cout<<"enter the elements:";
		cin>>arr[i];
	}
	qsort(arr,t,sizeof( long long int),compare);
	for(int i=0;i<t;i++)
    {

        cout<<arr[i]<< " "<<endl;
    }
	while(t)
	{
	int result=arr[k++]-(x-t);
	cout<<result<< " ";
	t--;
	//cout<<t<<endl;
	}
	cout<<endl;
    //printf("Hello World!\n");
    return 0;
}
