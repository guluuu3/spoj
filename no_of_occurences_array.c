#include<stdio.h>
#include<stdlib.h>
int count(int arr[],int x,int n)
{
int i;
int j;
 i=first(arr,x,0,n-1);
 if(i==-1)
 return i;
 j=last(arr,x,i,n-1);
return j-i+1;
}
int first(int arr[],int x,int start,int end)
{
if(end>=start)
{
int mid=(start+end)/2;
if(mid==0 ||mid==x&&arr[mid-1]<x)
return mid;
if(arr[mid]<x)
return first(arr,x,mid+1,end);
else return first(arr,x,start,mid-1);

}
return -1;
}
int last(int arr[],int x,int start,int end)
{

if(end>=start)
{
int mid=(start+end)/2;
if(mid==0 ||arr[mid+1]>x&&arr[mid]==x)
return mid;
if(arr[mid]>x)
return last(arr,x,start,mid-1);
else return last(arr,x,mid+1,end);
}
return -1;
}
int main()
{
  int arr[] = {1, 2, 2, 3, 3, 3, 3};
  int x =  1;  // Element to be counted in arr[]
  int n = sizeof(arr)/sizeof(arr[0]);
  int c = count(arr, x, n);
  printf(" %d occurs %d times ", x, c);
  getchar();
  return 0;
}
