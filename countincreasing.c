#include<stdio.h>
void count(int arr[],int n)
{
int i,j;
int *countarray=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
int count=0;
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
count++;
}
countarray[i]=count;
}
for(i=0;i<n;i++)
{
printf("%d\n",countarray[i]);

}

}
int main()
{
int arr[] = {12, 10, 5, 4, 2, 20, 6, 1, 0, 2};
  int n = 10;
  count(arr,n);
  return;
}
