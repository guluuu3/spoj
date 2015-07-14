#include<stdio.h>

void constructLowerArray (int arr[], int *countSmaller, int n)
{
  int i, j;

  // initialize all the counts in countSmaller array as 0
  for  (i = 0; i < n; i++)
     countSmaller[i] = 0;

  for (i = n-2; i >=0; i--)
  {
    for (j = i+1; j < n; j++)
    {
       if (arr[i] > arr[j])
         countSmaller[i]++;
    }
  }
}

/* Utility function that prints out an array on a line */
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}

// Driver program to test above functions
int main()
{
  int arr[] = {12, 1, 2, 3, 0, 11, 4};
  int n = sizeof(arr)/sizeof(arr[0]);
  int *low = (int *)malloc(sizeof(int)*n);
  constructLowerArray(arr, low, n);
  printArray(low, n);
  return 0;
}
