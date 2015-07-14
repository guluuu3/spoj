#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int cut_rod(int value[],int n)
{
int i;
int max_value=INT_MIN;
if(n==0)
return 0;
for(i=0;i<n;i++)
return max(max_value,value[i]+cut_rod(value,n-i-1));
}
int max(int x,int y)
{
return (x>y)?x:y;
}
int main()
{

 int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d\n", cut_rod(arr, size));
    getchar();
    return 0;

}
