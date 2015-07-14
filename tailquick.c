/*P8.9 Program of sorting using quick sort */

#include<stdio.h>
#define MAX 100

void quick(int arr[],int low,int up);
int partition(int arr[], int low, int up);

main()
{
	int array[MAX],n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&array[i]);
	}

	quick(array,0,n-1);

	printf("Sorted list is :\n");

	for( i=0; i<n; i++ )
		printf("%d ",array[i]);
	printf("\n");

}/*End of main() */

void quick(int arr[],int low,int up)
{
int pivloc;

	while(low<up)
	{

	pivloc=partition(arr,low,up);
	if(pivloc-low<up-pivloc)
	{
	quick(arr,low,pivloc-1);
	low=pivloc+1;
	}
	else
	{
	quick(arr,pivloc+1,up);
	up=pivloc-1;
	}
	}
}/*End of quick()*/

int partition(int arr[], int low, int up)
{
	int temp,i,j,pivot;

	i=low+1;
	j=up;
	pivot=arr[low];

	while(i <= j)
	{
		while( arr[i] < pivot && i<up )
			i++;

		while( arr[j] > pivot )
			j--;

		if(i < j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		else
			i++;
	}
	arr[low]=arr[j];
	arr[j]=pivot;

	return j;
}/*End of partition()*/




