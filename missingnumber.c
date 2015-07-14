#include<stdio.h>
#include<stdlib.h>
int countarray(int arr[],int n)
{
int *temp=(int*)malloc(n*sizeof(int));
int i;
for( i=0;i<n;i++)
{
temp[i]=0;
}

for(i=0;i<n;i++)
{
temp[arr[i]]=1;

}
for(i=1;i<n;i++)
{
if(temp[i]==0)
return i;

}

}
int main()
{
int arr[]={1,2,1};
int n=3;
int x=countarray(arr,n);
printf("%d",x);
return 0;


}
