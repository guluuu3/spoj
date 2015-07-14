/* P8.11 Program of sorting through heapsort*/

#include <stdio.h>
#include<math.h>
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

void buildHeap(int arr[], int size)
{
	int i;
	for(i=size/2; i>=1; i--)
		restoreDown(arr,i,size);
}/*End of buildHeap()*/

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
int largest;
int temp,h;
h=log((size+1)/2);
if(2*i>=size)
    return;



if(left<=size&&arr[left]>arr[i])
{
    largest=left;

}
else largest=i;


if(right<=size&&arr[right]>largest)
    largest=right;

if(largest!=i)
{
h--;
     temp=arr[i];
    arr[i]=arr[largest];
    arr[largest]=temp;
    restoreDown(arr,largest,(pow(2,h+1)-1));
}

else
{
h--;

    restoreDown(arr,2*i,(pow(2,h+1)-1));
    restoreDown(arr,(2*i)+1,(pow(2,h+1)-1));
}
	}


void display(int arr[], int n)
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d  ",arr[i]);
	printf("\n");
}/*End of display()*/


