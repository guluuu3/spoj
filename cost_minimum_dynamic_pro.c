#include<stdio.h>
#include<stdlib.h>
#define R 3
#define C 3
int mincost(int cost[R][C],int m,int n)
{
int l[R][C];
l[0][0]=cost[0][0];
int i,j;
for(j=i;j<=n;j++)
{
l[0][j]=l[0][j-1]+cost[0][j];
}
for(i=1;i<=m;i++)
{
l[i][0]=l[i-1][0]+cost[i][0];
}
for(i=1;i<R;i++)
{
for(j=1;j<C;j++)
{
l[i][j]=cost[i][j]+min(l[i-1][j],l[i][j-1],l[i-1][j-1]);

}

}
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
