#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int egg(int n,int k)
{
int e[n][k];
int i,j,x;
for(i=1;i<=n;i++)
{

e[i][0]=0;
e[i][1]=1;
}
for(j=1;j<=k;j++)
{
e[1][j]=j;

}
for(i=2;i<=n;i++)
{
for(j=2;j<=k;j++)
{
e[i][j]=INT_MAX;
for(x=1;x<=j;x++)
{
res=max(e[i-1][j-1],e[i][j-x]);
if(res<e[i][j])
e[i][j]=res;

}
}
}
return e[n][k];
}
int main()
{
 int n = 5, k = 2;
    printf("Value of C(%d, %d) is %d ", n, k, binomial(n, k));
    return 0;
}