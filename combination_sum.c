#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
static int max_val;
static int min_val;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
void combinationUtil(int arr[],int n,int r,int index,int data[],int i,int max_val,int min_val);
void printCombination(int arr[], int n, int r,int max_val,int min_val)
{
    int data[r];


    combinationUtil(arr, n, r, 0, data, 0,max_val,min_val);
}
void combinationUtil(int arr[], int n, int r, int index, int data[], int i,int max_val,int min_val)
{
    // Current cobination is ready, print it
    if (index == r)
    {
        int sum=0;
        int j;
        for ( j=0; j<r; j++)
            {

                printf("%d",data[j]);
            }


        printf("\n");
        return;
    }

    // When no more elements are there to put in data[]
    if (i >= n)
        return;

    // current is included, put next at next location
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1,max_val,min_val);
    combinationUtil(arr, n, r, index, data, i+1,max_val,min_val);
}
int main()
{
    int t;
    scanf("%d",&t);
    int i,r;
    while(t--)
    {



 for( r=1;r<=n;r++)
 {
     printCombination( arr,  n,  r,max_val,min_val);

 }



}
return 0;
}
