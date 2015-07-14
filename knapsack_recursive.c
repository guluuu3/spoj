#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int knapsack(int w,int value[],int wt[],int n)
{
if(w==0||n==0)
return 0;
if(wt[n-1]>w)
return knapsack(w,value,wt,n-1);
else return
knapsack(value[n-1]+knapsack(w-wt[n-1]),value,wt,n-1);

}
int main()
{
int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapsack(W, wt, val, n));
    return 0;
}
