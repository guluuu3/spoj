#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define R 3
#define C 3
int mincost(int arr[R][C],int m,int n)
{
if(m<0 ||n<0)
return INT_MAX;
if(m==0 && n==0)
return arr[m][n];
else
return  arr[m][n]+min(mincost(arr,m-1,n-1),mincost(arr,m-1,n),mincost(arr,m,n-1));

}
int min(int x,int y,int z)
{
if(x<y)
    return (x<z)?x:z;
else
     return (y<z)?y:z;


    }
int main()
{

int cost[R][C] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
   printf(" %d ", mincost(cost, 2, 2));
   return 0;


}
