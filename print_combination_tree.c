#include<stdio.h>
static int c=0;
void combinationUtil(char arr[],int n,int r,int index,int data[],int i,int visited[100]);

// The main function that prints all combinations of size r
// in arr[] of size n. This function mainly uses combinationUtil()
void printCombination(char arr[], int n, int r,int visited)
{
    // A temporary array to store all combination one by one
    int data[r];

    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, n, r, 0, data, 0,visited);
}


void combinationUtil(char arr[], int n, int r, int index, int data[], int i,int visited[])
{

   int sum=0;
    // When no more elements are there to put in data[]
    if (i >= n)
        return;


    data[index] = arr[i];
    int k;
    for(k=0;k<=index;k++)
    {
        printf("%c \n",data[k]);
        //sum=sum+arr[i];
    }
    printf("\n");

    combinationUtil(arr, n, r, index+1, data, i+1,visited);
    printf("\n");
    combinationUtil(arr, n, r, index, data, i+1,visited);
}

// Driver program to test above functions
int main()
{
    char arr[]="ABCD";
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int visited[100];
    int i;
    for(i=0;i<100;i++)
        visited[i]=0;
    printCombination(arr, n, r,visited);
    printf("%d",c);
    return 0;
}
