#include<stdio.h>
#include<stdlib.h>
void countarray(int arr[],int n)
{
int i;

for(i=0;i<n;i++)
{
if(arr[abs(arr[i])-1]>0)
arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];

else
printf("%d\n",abs(arr[i]));
}
for(i=0;i<n;i++)
{
  if(arr[i]>0)
        printf("missing element %d",(i+1));

}


}
int main()
{
int temp[]={4,3,6,5,2,7,8,7};
int n=8;
countarray(temp,n);
return 0;
}
