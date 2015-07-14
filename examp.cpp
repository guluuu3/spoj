#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int arr[]={2,3,6,10,7,4};
    int n;
    cin>>n;


    int sum;
    int i=0;
    while(i<n)
    {
        int j=0;
        int sum=0;
        while(j<k)
        {

            sum=sum+arr[i+j];
            j=j++;
        }
        cout<<sum<< " ";
        i=i+k;

    }
    return 0;
}
