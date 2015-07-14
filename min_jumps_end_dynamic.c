#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int min(int x,int y)
{
	return (x<y)?x:y;
}
int minjumps(int arr[],int n)
{
	int min;
	int *jumps=(int *)malloc(sizeof(int));
	int i,j;
	jumps[n-1]=0;
	for(i=n-2;i>=0;i--)
	{
	if(arr[i]>n-i-1)
	return jumps[i]=1;
	if(arr[i]==0)
jumps[i]=INT_MAX;
for(j=i+1;j<n && j<arr[i]+1;j++)
{
	if(min>jumps[i])
	min=jumps[i];
}
if(min!=INT_MAX)
jumps[i]=min+1;
else
jumps[i]=min;
	}
	return jumps[0];
	
}