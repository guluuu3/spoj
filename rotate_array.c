#include<stdio.h>
void rotate(int arr[3][4],int row,int col)
{
int i,j;
int *dest[col];
for(i=0;i<row;i++);
dest[i]=(int *)malloc(row*sizeof(int));
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{

 dest[i][j]=arr[col-j-1][i];

}
for(i=0;i<col;i++)
{

    for(j=0;j<row;j++)
        printf("%d %d",dest[i][j]);
}
}
}
void display(int arr[4][3],int row,int col)
{
    int i,j;
for(i=0;i<col;i++)
{
for(j=0;j<col;j++)
{

printf("%d %d",arr[i][j]);
}

}


}
int main()
{

    int r = 3, c = 4;
    int *arr = (int *)malloc(r * c * sizeof(int));

    int i, j, count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         *(arr + i*c + j) = ++count;

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", *(arr + i*c + j));

return;
}
