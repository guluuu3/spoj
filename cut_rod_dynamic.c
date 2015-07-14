#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int cutrod(int value[],int n)
{
int r[n+1],i,j;
r[0]=0;
for(i=1;i<n;i++)
{
int max_val=INT_MIN;
for(j=0;j<i;j++)
{
max_value=max(max_val,price[j]+r[i-j-1]);
r[i]=max_val;
}
return r[n];
}