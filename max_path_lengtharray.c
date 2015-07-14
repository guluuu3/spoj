#include<stdio.h>
#define MAX 100
int main()
{
int i,n,k,arr1[MAX],arr2[MAX],sum1,sum2,j,result;
sum1=sum2=result=0;
printf("enter the number of elements in array 1");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter the %d element",(i+1));
scanf("%d",&arr1[i]);
}
printf("\n");
printf("enter the number of elements in array 2");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("enter the %d element",(i+1));
scanf("%d",&arr2[i]);
}

for(i=0;i<k;i++)
{
    for(j=0;j<k;j++)
    {
if(arr1[i]>arr2[j])
sum1=sum1+arr1[i];
else if(arr1[i]<arr2[j])
sum2=sum2+arr2[j];
else if(arr1[i]=arr2[j])
{
 if(sum1>sum2)
    result=sum1+arr2[j];
sum1=sum1+arr1[i];
}
 else
 {


 result=sum2+arr2[j];
 sum2=sum2+arr2[j];
 }
}
    }
if(sum1>sum2)
printf("%d",result);
else printf("%d",result);
return 0;
}

