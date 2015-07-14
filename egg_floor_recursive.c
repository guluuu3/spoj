#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int eggfloor(int n,int k)
{
if(k==0||k==1)
return k;
if(n==1)
return k;
int min,resx;
min=INT_MAX;
for(x=1;x<=n;x++)
{
int res=max(eggfloor(n-1,k-1),eggfloor(n,k-x));
if(res<min)
min =res;
}
return min+1;
}
int main()
{
int n = 2, k = 10;
    printf ("\nMinimum number of trials in worst case with %d eggs and "
             "%d floors is %d \n", n, k, eggfloor(n, k));
    return 0;

}