#include <stdio.h>
#include<string.h>
#include<stdlib.h>
static int k=-1;
static int x=-1;

void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
void permutate(int *arr,int r,int i,int n,int visited[])
{
    int j;

    if(i==n)
{

printf("%d %d %d %d ",arr[0] ,arr[1],arr[2],arr[3]);

printf("\n");
}
else
for(j=i;j<=n;j++)
{
	swap(arr+i,arr+j);
	permutate(arr,r,i+1,n,visited);
	swap(arr+i,arr+j);
}
return;
}

int main(void)
{
    int i;
int visited[100];
for(i=0;i<100;i++)
{
    visited[i]=0;
}

	int arr[]={1,2,3,4};
	int n=3;
	int r=2;
	permutate(arr,r,0,n,visited);
	// your code goes here
	return 0;
}
