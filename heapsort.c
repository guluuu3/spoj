
#include<stdio.h>
#define     MAX_VAL 999999

void insert(int num, int arr[], int *p_hsize);
int del_root(int arr[], int *p_hsize);
void restoreUp(int arr[], int loc);
void restoreDown(int arr[], int i, int size);
void buildHeap(int arr[], int size );
void display(int arr[],int hsize);

main( )
{
	int arr[100]; /*array used to represent heap*/
	int hsize=0;  /*Number of nodes in the heap*/
	int i,choice,num;

	arr[0]= MAX_VAL;

	while(1)
	{
		printf("1.Insert\n");
		printf("2.Delete root\n");
		printf("3.Display\n");
		printf("4.Build Heap\n");
		printf("5.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			printf("Enter the number to be inserted : ");
			scanf("%d",&num);
			insert(num,arr,&hsize);
			break;
		 case 2:
			if(hsize==0)
				printf("Heap is empty \n");
			else
			{
				num = del_root(arr,&hsize);
				printf("Maximum element is %d\n", num);
			}
			break;
		 case 3:
			display(arr,hsize);
			break;
 		 case 4:
			printf("Enter size of the array ");
			scanf("%d",&hsize);
			printf("Enter array : ");
			for(i=1;i<=hsize;i++)
				scanf("%d",&arr[i]);
			buildHeap(arr,hsize);
			break;
		 case 5:
			exit(1);
		 default:
			printf("Wrong choice\n");
		}/*End of switch */
	}/*End of while */
}/*End of main( )*/



void restoreDown(int arr[],int i,int hsize)
{
int num=arr[i];
int lchild,rchild;
lchild=i*2;
rchild=lchild+1;
while(rchild<=hsize)
{
if(num>arr[lchild] && num>arr[rchild])
{
arr[i]=num;

return;


}
else if(arr[i]<arr[lchild])

{

arr[i]=arr[lchild];
i=lchild;
}
else
{
arr[i]=arr[rchild];
i=rchild;
}
lchild=i*2;
rchild=lchild+1;

}
if( lchild=hsize && num<arr[lchild])
{
arr[i]=arr[lchild];
i=lchild;
}
arr[i]=num;

}
int del_root(int arr[],int *p_hsize)
{

int max=arr[1];
arr[1]=arr[*p_hsize];
(*p_hsize)--;
restoreDown(arr,1,*p_hsize);
return max;

}
void restoreUp(int arr[],int i)
{
int k=arr[i];
int par=i/2;
while(arr[par]<k)
{
arr[i]=arr[par];
i=par;
par=i/2;
}
arr[i]=k;

}
void insert(int num,int arr[],int* p_hsize)
{
(*p_hsize)++;
arr[*p_hsize]=num;
restoreUp(arr,*p_hsize);


}
void display(int arr[],int hsize)
{
	int i;
	if(hsize==0)
	{
		printf("Heap is empty\n");
		return;
	}
	for(i=1;i<=hsize;i++)
		printf("%d ",arr[i]);
	printf("\n");

	printf("Number of elements = %d\n",hsize);
}/*End of display( )*/

/*Top down approach*/
void buildHeap(int arr[], int size )
{
	int i;
	for(i=2; i<=size; i++)
		restoreUp(arr,i);
		}
