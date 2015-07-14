#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;
static int k=1;
void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}
 void tr(int depth,int top,int arr[])
{

 while(k!=3)
 {
  if(depth!=3)
  {
    arr[top]=k;
    tr(depth+1,top+1,arr);
  }
++k;
 }

 if(depth==3)
  {
   printArr(arr,top);
  }


return;
}

int main()
{
    int arr[100];
   tr(0,0,arr);
   return 0;
}
