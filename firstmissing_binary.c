#include<stdio.h>
#include<stdlib.h>
int binary(int arr[],int start,int end)
{
if(start!=arr[start])
return start;
int mid;
mid=(start+end)/2;
if(arr[mid]>mid)
 return binary(arr,start,mid);
return binary(arr,mid+1,end);
}
int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf(" First missing element is %d",
binary(arr, 0, n-1));
  getchar();
  return 0;
}
