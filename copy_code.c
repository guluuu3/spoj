#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
struct node
{
    int left;
    int right;


};
void combinationUtil(int arr[], int data[], int start, int end, int index, int r);
void print_combinations(int arr[],int n,int r)
{
int store[r];
 combinationUtil( arr, store, 0, n-1, 0, r);

}

void combinationUtil(int arr[], int store[], int start, int end, int index, int r)
{
 int j,i;

    if (index == r)
    {
        struct node *newnode=(struct node)malloc(sizeof(struct node));


        for (j=0; j<r; j++)
            printf("%d ", store[j]);
        printf("\n");
        return;
    }
   for ( i=start; i<=end && end-i+1 >= r-index; i++)
    {
        store[index] = arr[i];
        combinationUtil(arr, store, i+1, end, index+1, r);
    }
}
int main()
{
	int p,n1,n2,i;

	int k=0;
	printf("enter the number of players: ");
	scanf("%d",&p);
	printf("enter the starting number: ");
	scanf("%d",&n1);
	printf("enter the ending number: ");
	scanf("%d",&n2);
	int *arr=(int)malloc(((n2-n1)-1)*sizeof(int));

	for( i=n1+1;i<n2;i++)
	{
		arr[k]=i;
		k++;
	}
	for( i=0;i<(n2-n1-1);i++)
	printf("%d \n",arr[i]);

	int total=pow((n2-n1-1),p);
	printf("Total number of nodes in graph : %d",total);
	printf("\n");
	print_combinations(arr,(n2-n1-1),2);
	return 0;
	}


