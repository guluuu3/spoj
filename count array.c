#include<stdio.h>
#include<stdlib.h>
int countoccurences(int arr[],int n)
{
int i,j,count;
count=0;
int countarray[n];
int countfound[n];
for(i=0;i<n;i++)
{
    countarray[arr[i]]=1;
    }
for(i=0;i<n;i++)
{
 countfound[i]=countarray[arr[i]]++;

}

for(i=0;i<n;i++)
{
printf("count of %d is %d\n",arr[i], countfound[i]);
}

}
int main()

{
    int arr[] = {4, 2, 4, 5, 2, 3, 3, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  countoccurences(arr,n);
  return 0;
}
