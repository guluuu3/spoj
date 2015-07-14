#include<stdio.h>
#include<stdlib.h>
int maxproduct(int arr[],int n)
{
int max_positive=1;;
int max_negative=1;
int max_product=1;
int i;
for(i=0;i<n;i++)
{
if(arr[i]>0)
{
max_positive=max_positive*arr[i];
}
else
max_negative=max_negative*arr[i];

}
if(max_negative>0)
{

max_product=max_positive*max_negative;
return max_product;
}
else return max_positive;

}
int main()
{int n=7;

int arr[]={1,-2,-3,7,-8,-2};
int x=maxproduct(arr,n);
printf("%d",x);
return 0;
}
