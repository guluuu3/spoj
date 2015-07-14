#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int knapsack(int w,int wt[],int value[],int n)
{
int i,j,k[n+1][w+1];
for(i=0;i<n;i++)
{
for(j=0;j<w;j++)
{

if(i==0||j==0)
k[i][j]=0;
if(wt[i-1]<=w)
k[i][j]=max(value[i-1]+k[i][w-wt[i-1]],k[i-1][w]);
else
k[i][j]=k[i-1][w];
}

return k[n][w]
}
int main()
{

int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}