#include<stdio.h>
#include<stdlib.h>
int longest(int arr[],int n)
{
int *lis=(int*)malloc(n*sizeof(int));
int i,j,max=0;
for(i=0;i<n;i++)
{
lis[i]=1;
}
for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{
if(arr[i]>arr[j]&&lis[i]<lis[j]+1)
lis[i]=lis[j]+1;

}


}
for(i=0;i<n;i++)
{
printf("%d\n",lis[i]);
}
for(i=0;i<n;i++)
{
    if(lis[i]>max)
        max=lis[i];

}
return max;
}
int main()
{

int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
 printf("length longest subsequence is%d",   longest(arr,n));
return 0;
}


