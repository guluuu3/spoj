#include<stdio.h>
int equlibrium(int arr[],int n)
{
int sum=0;
int lsum=0;
int i;
for(i=0;i<n;i++)
{
sum+=arr[i];
}
for(i=0;i<n;i++)
{

sum=sum-arr[i];

if(lsum==sum)
{
return i;
}
lsum+=arr[i];
}
return 0;
}
int main()
{
int arr[]={-6,5,0,7,-4,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
int x=equlibrium(arr,n);
printf("%d",x);
return 0;

}
