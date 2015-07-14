#include<stdlib.h>
#include<stdio.h>
int smallest_subarray(int arr[],int n,int x)
{
int i,j,m,y,current,minlength;
minlength=n+1;
for(i=0;i<n;i++)
{
int current=arr[0];
if(current>x)
return 1;
for(j=i+1;j<n;j++)
{
current=current+arr[j];

if(current>x && (j-i+1)<minlength)
{
minlength=j-i+1;
m=i;//update the values of x &&y//
y=j;
}

}


}
print_array(arr,m,y);
return minlength;
}
void print_array(int arr[],int i,int j)
{
int k;
for(k=i;k<=j;k++)
printf("%d\n",arr[k]);

}
int main()
{
int arr1[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
   int z= smallest_subarray(arr1,n1,x);
   printf("sub array length");
   printf("%d\n",z);

        return 0;


}
