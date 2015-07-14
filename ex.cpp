#include <stdio.h>
#define MAX 100000

void printPairs(int arr[], int n)
{
 int max_val;
for(int i=0;i<n-2;i++)
{
    max_val=arr[i+1];
    for(int j=i+2;j<n;j++)
    {
        if(max_val<arr[j])
        {
            max_val=arr[j];
        }
    }
    arr[i]=max_val;

}
arr[n-2]=arr[n-1];
arr[n-1]=-1;
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}

}

/* Driver program to test above function */
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);


    printPairs(arr, size);

    getchar();
    return 0;
}
