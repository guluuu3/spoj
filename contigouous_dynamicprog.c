#include<stdio.h>
#include<stdlib.h>
int maxsum(int arr[],int n)
{
int current_sum=arr[0];
int max_ending=arr[0];
int i;
for(i=0;i<n;i++)
{

max_ending=max(arr[i],max_ending+arr[i]);
current_sum=max(current_sum,max_ending);
printf("updated is-%d\\\\  n",current_sum);
}

return current_sum;
}
int max(int x,int y)
{
return (x>y)?x:y;
}
int main()
{
int arr[]={-2,-3,4,-1,-2,1,5,-3};
int n=sizeof(arr)/sizeof(arr[0]);
int x=maxsum(arr,n);
printf("%d",x);
return 0;



}
