#include<stdio.h>
#include<stdlib.h>
void fill_spiral(int m,int n)
{
int k=0;
int l=0;
int i,j;
int r=m;
int s=n;
char x='X';
char arr[m][n];
while(k<m && l<n)
{
for(i=l;i<n;++i)
{
arr[k][i]=x;
}
k++;
for(i=k;i<m;++i)
{
arr[i][n-1]=x;
}
n--;

if(k<m)
{
for(i=n-1;i>=l;--i)
{
arr[m-1][i]=x;
}
m--;
}
if(l<n)
{
for(i=m-1;i>=k;--i)
{
arr[i][l]=x;
}
l++;
}
x = (x == '0')? 'X': '0';
}
for(i=0;i<r;i++)
{
    for(j=0;j<s;j++)
    {
        printf("%c %c",arr[r][s]);


    }


}
}
int main()
{

    fill_spiral(5,6);
    return 0;


}
