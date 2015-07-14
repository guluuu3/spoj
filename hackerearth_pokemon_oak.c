#include <stdio.h>
#include<stdlib.h>


int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
int main()
{
	long int n,i;

	scanf("%d",&n);

	int *arr=(int)malloc(sizeof(int)*n);
	int arra[n];

	long int *day=(int)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{

	scanf("%d",&arr[i]);
	scanf("%d",&arra[i]);


	}
	qsort (arr, n, sizeof(int), compare);


 int days=0,temp=0;
for(i=0;i<n;i++)
{
temp=i+arr[i]+1;
if(temp>days)
{
days=temp;
}
}
printf("%d\n",days+1);




    //printf("Hello World!\n");
    return 0;
    }

