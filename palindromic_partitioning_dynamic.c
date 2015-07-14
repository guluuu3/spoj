#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int palin_part(int arr[],int n)
{
bool p[n][n];
int c[n][n];
int j,i,k;
for(i=0;i<n;i++)
{
p[i][i]=true;
c[i][i]=0;
}
for(l=2;l<=n;l++)
{
for(i=0;i<n-l-1;i++)
{
j=n-l+1;
if(l==2)
p[i][j]=(srt[i]==str[j]);
else
p[i][j]=(str[i]==str[j] )&& p[i-1][j-1];
if(p[i][j]==true)
{
c[i][j]=0;
}
else
c[i][j]=INT_MAX;
for(k=i;k<=j;k++)
{
c[i][j]=max(c[i][j],c[i][k]+1,c[k+1][j]);
}
}
return c[0][n];
}
