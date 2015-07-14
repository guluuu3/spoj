#include<stdio.h>
int  count_array(int arr[],int n)
{
int i,count;
count=0;
for(i=0;i<n;i++)
{

if(arr[i]==0)
count++;

}
return count;

}
void arrange(int arr[],int n)
{
    int i;
    int x=count_array(arr,n);
  for(i=0;i<x;i++)
  {
      arr[i]=0;
  }
  for(i=x;i<n-x;i++)
  {
      arr[i]=1;
  }



}
int main()
{
  int arr[] = {1 , 0, 0, 1, 1};
  int arr_size = 6,i;


 arrange(arr,arr_size);
 for(i=0;i<arr_size;i++)
 {
     printf("%d",arr[i]);
 }
 return 0;
}

