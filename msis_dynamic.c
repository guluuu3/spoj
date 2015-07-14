#include<stdio.h>
#include<stdlib.h>
int max(int arr[],int n)
{
int i,j;
int *msis=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
msis[i]=arr[i];
for(i=1;i<=n;i++)
{

for(j=0;j<i;j++)
{
if(arr[i]>arr[j] && msis[i]<arr[i]+msis[j])
msis[i]=msis[j]+arr[i];
}
for ( i = 0; i < n; i++ )
      if ( max < msis[i] )
         max = msis[i];

   /* Free memory to avoid memory leak */
   free( msis );

   return max;
}

/* Driver program to test above function */
int main()
{
  int arr[] = {1, 101, 2, 3, 100, 4, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Sum of maximum sum increasing subsequence is %d\n",
         maxSumIS( arr, n ) );

  getchar();
  return 0;
}