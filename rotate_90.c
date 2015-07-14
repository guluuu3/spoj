#include<stdio.h>
void rotate(int arr[][],int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
int destbuff[i][j]=arr[col-j-1][i];

}
display(destbuff,row,col);
}
}
void display(int arr[][],int row,col)
{
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{

printf("%d %d",arr[i][j]);
}

}


}
int main()
{
 int image[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
 int m=3;
 int col=4;
rotate(image,m,n);
return;

}
