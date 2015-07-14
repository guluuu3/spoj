#include<stdio.h>
void arrange(int arr[],int n)
{
int left=0;
int right=n-1;
while(left<right)
{
while(arr[left]==0 &&left<right)
{
left++;
}
while(arr[right]==1 &&left<right)
{
right--;
}
}
if(left<right)
{
arr[left]=0;
arr[right]=1;
left++;
right--;
}
}
int main()
{
  int arr[] = {0, 0, 0, 1, 1, 1};
  int arr_size = 6, i = 0;

  arrange(arr, arr_size);

  printf("array after segregation ");
  for(i = 0; i < 6; i++)
    printf("%d ", arr[i]);

  getchar();
  return 0;
}
