#include<stdio.h>
#include<stdlib.h>
void productarray(int arr[],int n)

{
int i,temp=1;
int *prod=(int *)malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
prod[i]=temp;
temp*=arr[i];

}

temp=1;
for(i=n-1;i>=0;i--)
{
prod[i]*=temp;
temp*=arr[i];

}
for(i=0;i<n;i++)
printf("%d\t",prod[i]);
}
int main()
{
int arr[]={10,3,5,6,2};
int n=sizeof(arr)/sizeof(arr[0]);
productarray(arr,n);
return 0;


}
