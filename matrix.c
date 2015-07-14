#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int matrix(int *p,int n)
{
int m[n][n];
int i,j,l,k;
for(i=0;i<n;i++)
{
m[i][i]=0;
}
for(l=2;l<n;l++)
{
for(i=0;i<n-l+1;i++)

{
j=i+l-1;
m[i][j]=INT_MAX;
for(k=i;k<=j-1;k++)
{
int q=m[i][k]+m[k+1][j]+p[i-1][k][j];
if(q>m[i][j])
m[i][j]=q;
}
}
}
return m[1][n-1];
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Minimum number of multiplications is %d ",
                       matrix(arr, size));

    getchar();
    return 0;
}
