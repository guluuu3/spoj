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

	if(low>=up)
		return;
	pivloc = partition(arr,low,up);
	quick(arr,low,pivloc-1);
	quick(arr,pivloc+1,up);
}
int partition(int arr[], int low, int up)
{
    int temp,i,j,pivot,k,z;
 i=low+1;
 j=up;
pivot=arr[low];

for(k=low;k<up-1;k++)
{
for(z=k+1;z<up;z++)
{
if (arr[k]!=arr[z])
{






while(i<=j)
{
while(arr[i]>pivot &&i<up)
i++;
while(arr[j]<pivot)
j--;
if(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
j--;
i++;
}
else i++;
}
arr[low]=arr[j];
arr[j]=pivot;
return j;
}
}
}
}
else (arr[k]=arr[z])
{


pivloc=(low+up)/2;
printf("pivot is %d",pivloc);
return pivot;
}
}
