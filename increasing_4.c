#include<stdio.h>
#include<stdlib.h>

// A function to fund a sorted subsequence of size 3
void find3Numbers(int arr[], int n)
{
   int max1 = n-1;
   int max2=n-2; //Index of maximum element from right side
   int min = 0; //Index of minimum element from left side
   int i;

   // Create an array that will store index of a smaller
   // element on left side. If there is no smaller element
   // on left side, then smaller[i] will be -1.
   int *smaller = (int*)malloc(n*sizeof(int));
    int *greater = (int*)malloc(n*sizeof(int));
   smaller[0] = -1;  // first entry will always be -1
   for (i = 1; i < n; i++)
   {
       if (arr[i] <= arr[min])
       {
          min = i;
          smaller[i] = -1;
       }
       else
          smaller[i] = min;
   }

   // Create another array that will store index of a
   // greater element on right side. If there is no greater
   // element on right side, then greater[i] will be -1.

   greater[n-1] = -1;
   greater[n-2]=-1 ; // last entry will always be -1
   for (i = n-3; i >= 0; i--)
   {
       if (arr[i] >= arr[max1] &&arr[max1]>=arr[max2])
       {
           int temp=max2;
          max2 = i;
          max1=temp;
          greater[i] = -1;
          greater[i+1]=-1;
       }

       else if (arr[i]<= arr[max2] &&arr[max2]<=arr[max1])
          greater[i] = max2;
          greater[i+1]=max1;
   }

   // Now find a number which has both a greater number on
   // right side and smaller number on left side
   for (i = 0; i < n; i++)
   {
       if (smaller[i] != -1 && greater[i] != -1)
       {
          printf("%d %d %d %d", arr[smaller[i]],
                 arr[i], arr[greater[i]],arr[greater[i+1]]);
          return;
       }
   }

   // If we reach number, then there are no such 3 numbers
   printf("No such triplet found");

   // Free the dynamically alloced memory to avoid memory leak


   return;
}

// Driver program to test above function
int main()
{
    int arr[] = {12, 11, 10, 5, 6,2, 30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    find3Numbers(arr, n);
    return 0;
}
