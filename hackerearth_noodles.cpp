#include <iostream>
using namespace std;
bool binarysearch(int arr[],int sum,int low,int high)
{
while(low<=high)
{
	long long int mid =(low+high)/2;
	if( mid==sum)
	return true;
	if(sum<mid)
	return binarysearch(arr,sum,low,mid-1);
	else return binarysearch(arr,sum,mid+1,high);
}

}

int main()
{
	int n,c;
	cin>>n>>c;
	int arr[100000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
long long	int sum;
int count=1;
    for(int i=0;i<n-1;i++)
    {
    	sum=arr[i]+c;
    	if(binarysearch(arr,sum,0,n-1)==true)
    	count++;
    }
    cout<<count;
    //cout << "Hello World!" << endl;
    return   ;
}
