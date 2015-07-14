
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

}
void quick(int arr[],int low,int up)
{
int pivloc;
if(low>=up)
return;
pivloc=partition(arr,low,up);
quick(arr,low,pivloc-1);
quick(arr,pivloc+1,up);
}
int partition(int arr[],int low,int up)
{
    int pivot,temp,i,j;
 i=low;
 j=up;

int pivotpos;
int mid;
if(up-low+1>2)
{


mid=(low+up)/2;

pivot=(arr[low]+arr[up]+arr[mid])/3;



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
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	return j;
}
 else if(arr[low]>arr[up])
{


    temp=arr[low];
	arr[low]=arr[up];
	arr[up]=temp;
	return up;

}
}

