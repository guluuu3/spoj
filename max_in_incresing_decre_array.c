#include<stdlib.h>
#include<stdio.h>
int findmaximum(int arr[],int n,int low,int high)
{
if(low==high)
return low;
if(high==low+1)
{
if(arr[low]>arr[high])
return arr[low];
}
if(high==low+1)
{
if(arr[low<arr[high]])
return arr[high];
}
int mid=(low+high)/2;
if(arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1])
return mid;

if(arr[mid-1]<arr[mid]&& arr[mid]<arr[mid+1])
return findmaximum(arr,n,mid,high);
if(arr[mid-1]>arr[mid]&&arr[mid]>arr[mid+1])
return findmaximum(arr,n,low,mid-1);

}
int main()
{
   int arr[] = {1, 3, 50, 10, 9, 7, 6};
   int n = sizeof(arr)/sizeof(arr[0]);
   printf("The maximum element is %d", findmaximum(arr,n, 0, n-1));
   getchar();
   return 0;
   }
