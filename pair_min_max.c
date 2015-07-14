#include<stdlib.h>
#include<stdio.h>
struct pair
{

int max;
int min;
};
struct pair getminmax(int arr[],int low,int high)
{
struct pair minmax,mml,mmr;

int mid;
if(low==high)
{
minmax.min=arr[low];
minmax.max=arr[high];
return minmax;
}
if(high==low+1)
{
if(arr[low]>arr[high])
{
minmax.max=arr[low];
minmax.min=arr[high];
}
else
{
minmax.min=arr[low];
minmax.max=arr[high];
}
return minmax;
}
mid=(low+high)/2;
mml=getminmax(arr,low,mid);
mmr=getminmax(arr,mid+1,high);
if(mml.min<mmr.min)
{
minmax.min=mml.min;
}
else
minmax.min=mmr.min;
if(mml.max>mmr.max)
minmax.max=mml.max;
else
minmax.max=mmr.max;
return minmax;
}
int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int arr_size = 6;
  struct pair minmax = getminmax(arr, 0, arr_size-1);
  printf("\nMinimum element is %d", minmax.min);
  printf("\nMaximum element is %d", minmax.max);
  getchar();
}
