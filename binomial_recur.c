#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int binomial(int n,int k)
{
if(k==0||k==n)
return 1;
else
return binomial(n-1,k-1)+binomial(n,k-1);

}
int main()
{

 int n = 5, k = 2;
    printf("Value of C(%d, %d) is %d ", n, k, binomial(n, k));
    return 0;

}
