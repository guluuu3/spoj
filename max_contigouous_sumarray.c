#include<stdio.h>
#include<stdlib.h>
int maxsum(int arr[],int n)
{
int max_ending=0;
int max_so_far=0;
int i;
for(i=0;i<n;i++)
{
max_ending=max_ending+arr[i];
if(max_ending<0)
{
max_ending=0;

}
if(max_so_far<max_ending)
max_so_far=max_ending;
}
return max_so_far;
}
int main()
{
int arr[]={-2,-3,4,-1,-2,1,5,-3};
int n=sizeof(arr)/sizeof(arr[0]);
int x=maxsum(arr,n);
printf("%d",x);
return 0;



}
