/* P8.11 Program of sorting through heapsort*/

#include <stdio.h>
#define MAX 100

void heap_sort(int arr[], int size);
void buildHeap(int arr[], int size);
int del_root(int arr[], int *size);
void restoreDown(int arr[], int i, int size );
void display(int arr[], int n);

main()
{
	int i;
	int arr[MAX],n;

	printf("Enter number of elements : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter element %d : ",i);
		scanf("%d",&arr[i]);
	}

	printf("Entered list is :\n");
	display(arr,n);

	heap_sort(arr,n);

	printf("Sorted list is :\n");
	display(arr,n);

}/*End of main()*/

void heap_sort(int arr[], int size)
{
	int max;
	buildHeap(arr, size);
	printf("Heap is : ");
	display(arr,size);

	while(size>1)
	{
		max = del_root(arr,&size);
		arr[size+1]=max;
	}
}/*End of heap_sort*/

void restoreUp(int arr[],int i)
{

int k=arr[i];
int lchild=2*i;
 int rchild=lchild+1;
int par=i/2;
while(arr[par]<k)
{
arr[i]=arr[par];
i=par;
par=i/2;

}
arr[i]=k;

}
int del_root(int arr[], int *size)
{
	int max = arr[1];
	arr[1] = arr[*size];
	(*size)--;
	restoreDown(arr,1,*size);
	return max;
}/*End of del_root()*/

void restoreDown(int arr[], int i, int size )
{
	int left=2*i, right=left+1;

	int num=arr[i];

	while(right<=size)
	{
		if( num>=arr[left] && num>=arr[right] )
		{
			arr[i] = num;
			return;
		}
		else if(arr[left] > arr[right])
		{
			arr[i] = arr[left];
			i = left;
		}
		else
		{
			arr[i] = arr[right];
			i = right;
		}
		left = 2 * i;
		right = left + 1;
	}

	if(left == size && num < arr[left] )/* when right == size+1 */
	{
		arr[i]=arr[left];
		i = left;
	}
	arr[i]=num;
}




void buildHeap(int arr[], int size )
{
	int i;
	for(i=2; i<=size; i++)
		restoreUp(arr,i);
		}
void display(int arr[], int n)
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d  ",arr[i]);
	printf("\n");
}/*End of display()*/


