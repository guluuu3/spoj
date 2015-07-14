#include<stdio.h>
#include<stdlib.h>
#define bool int
#define N 4
bool queen_util(int arr[N][N],int col);
void printsol(int sol[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		printf("%d",sol[i][j]);
		}
}
bool issafe(int arr[N][N],int row,int col)
{
int i,j;
for(i=0;i<col;i++)
{
if(arr[row][i])
return 0;
}
for(i=row,j=col;i>=0&&j>=0;i--,j--)
{
if (arr[i][j])
return 0;
}
for(i=row,j=col;i<N&&j>=0;i++,j--)
{
if(arr[i][j])
return 0;
}
return 1;
}
bool queen()
{
int sol[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    if(queen_util(sol,0)==1)
    {
    printf(" all queen placed");
    printsol(sol);
    }
    else
    printf("queen not placed");
}
bool queen_util(int sol[N][N],int col)
{
    int i,j;
if(col>=N)
return 1;
for(i=0;i<N;i++)
{
if (issafe(sol,i,col)==1)
{
sol[i][col]=1;
if(queen_util(sol,col+1)==1)
return 1;
sol[i][col]=0;
return 0;
}
}
return 0;
}
int main()
{
   queen() ;
   getchar();
   return 0;

}
