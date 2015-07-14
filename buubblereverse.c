#include<stdio.h>
#define MAX 10
int main()
{

int arr[MAX],i,j,temp,n,xchanges;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
for(i=1;i<n;i++)
{
for(j=n;j>i+1;j--)
{
if(arr[j]<arr[j-1])
{
temp=arr[j];
arr[j]=arr[j-1];
arr[j-1]=temp;


}
xchanges++;
}


}
printf("Sorted list is :\n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");
return 0;
}
