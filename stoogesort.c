#include<stdio.h>
#define MAX 100
void stooge(int arr[],int low,int up);

int main()
{
int array[MAX],n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&array[i]);
	}
stooge(array,0,n-1);
printf("Sorted list is :\n");
	for( i=0; i<=n-1; i++ )
		printf("%d ",array[i]);
return 0;
}
void stooge(int arr[],int low,int up)
{
    int temp,i,j;
int k;
i=low;
j=up;
if(i>=j)
    return ;
if(arr[i]>arr[j])
{
 temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
if(up-low+1>2)
{
k=(low+up-1)/3;
stooge(arr,low,up-k);
stooge(arr,low+k,up);
stooge(arr,low,up-k);

}

}




