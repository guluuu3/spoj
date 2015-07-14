#include<stdio.h>
#include<stdlib.h>
int bitonic(int arr[],int n)
{
int *inc=(int*)malloc(n*sizeof(int));
int *dec=(int*)malloc(n*sizeof(int));
int i;
int j;
inc[0]=1;
dec[n-1]=1;
for(i=1;i<n;i++)
{
if(arr[i]>arr[i-1])
inc[i]=inc[i-1]+1;
else inc[i]=1;
}
for(i=n-2;i>0;--i)
{
if(arr[i]<arr[i+1])
dec[i]=dec[i+1]+1;
else dec[i]=1;

}
int max=inc[0]+dec[0]-1;
for(i=1;i<n;i++)
{
if(max<inc[i]+dec[i]-1)
max=inc[i]+dec[i]-1;

}
return max;
}
int main()
{
 int arr[] = {12, 4, 78, 90, 45, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\n Length of max length Bitnoic Subarray is %d", bitonic(arr, n));
    getchar();
    return 0;


}
