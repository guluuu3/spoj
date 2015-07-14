#include<stdio.h>
#include<stdlib.h>
#define N 1000
int compare(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int compare1(const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
int main()
{
    int n;
	//printf("enter the number of players");
	scanf("%d",&n);
	int arr[N];
	int i;
	int arr1[N];
	int k=0;
	int l=0;
	for(i=0;i<n;i++)
	{
		//printf("enter the elements:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	if((arr[i]%2)==0 && (arr[i]!=1))
	{
		arr[k++]=arr[i];
	}
	else
	arr1[l++]=arr[i];
	}
	qsort(arr,k,sizeof(int),compare);
	qsort(arr1,l,sizeof(int),compare1);
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=0;i<l;i++)
	{
		printf("%d ",arr1[i]);
	}

    //printf("Hello World!\n");
    return 0;
}
