#include<stdlib.h>
#include<stdio.h>
int binary_search(int arr[],int low,int high)
{
if(high>=low)
{
int mid=low+(high-low)/2;
if((mid==0||arr[mid-1]==1) &&arr[mid]==0)
return mid;
if(arr[mid]==1)
return binary_search(arr,mid+1,high);

else
return binary_search(arr,low,mid-1);

}
return -1;

}
int count_zeros(int arr[],int n)
{
int x=binary_search(arr,0,n-1);
if(x==-1)
    return 0;

return (n-x);

}
int main()
{
int arr[]={1,1,1,0,0,0,0,0,0,0};
int n=sizeof(arr)/sizeof(arr[0]);
int z=count_zeros(arr,n);
printf("%d",z);
return 0;
}
