#include<stdio.h>
#include<stdlib.h>
void findnumbers(int arr[],int n)
{
int min=0;
int max=n-1;
int *smaller=(int*)malloc(n*sizeof(int));
int *larger=(int*)malloc(sizeof(int)*n);
int i;

smaller[0]=-1;
larger[n-1]=-1;
for(i=1;i<n;i++)
{
if(arr[i]<=arr[min])
{
min=i;
smaller[i]=-1;
}
else smaller[i]=min;
}
for(i=n-2;i>=0;i++)
{
if(arr[i]>=arr[max])
{
max=i;
larger[i]=-1;

}
else
larger[i]=max;
}
for(i=0;i<n;i++)
{
if(smaller[i]!=-1&&larger[i]!=-1)
{
printf("%d %d %d", arr[smaller[i]],
                 arr[i], arr[larger[i]]);


}
else
printf("triplet not found");
}

}
int main()
{

int arr[] = {12, 11, 10, 5, 6, 2, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    findnumbers(arr, n);

    return 0;

}
