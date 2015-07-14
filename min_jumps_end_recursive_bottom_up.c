#include<stdio.h>
#includE<stdlib.h>
#include<stdlimits.h>
int minjumps(int arr[],int l,int h)
{
	if(l==h)return 0;
	if(arr[l]==0)
	return 0;
	int i,min=INT_MAX;
	for(i=0;i<h &&i<arr[l]+l;i++)
	{
		jumps=minjumps(arr,i,h)
		if(jumps!=INT_MAX &7 jumps<min+1)
		min=jumps+1;
	}
	return min;
	
}
int main()
{
  int arr[] = {1, 3, 6, 3, 2, 3, 6, 8, 9, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Minimum number of jumps to reach end is %d ", minJumps(arr, 0, n-1));
  return 0;
}

