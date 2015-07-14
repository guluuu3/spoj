#include<stdio.h>
#include<stdlib.h>
#define  N 9
#define UNASSINGED 0
#define bool int
int issaferow(int grid[N][N],int row,int num);
 int issafecol(int grid[N][N],int col,int num);
 int issafebox(int grid[N][N],int row,int col,int num);
int isunassigned(int grid[N][N], int row, int col);
void printsol(int grid[N][N]);

int isunassigned(int grid[N][N],int row,int col)
{
for	(row=0;row<N;row++)
{
	for(col=0;col<N;col++)
	{
		if(grid[row][col]==UNASSINGED)
		return 1;
	}
}
return 0;
}
int issaferow(int grid[N][N],int row,int num)

{
	int col;
	for(col=0;col<N;col++)
	{
		if(grid[row][col]==num)
		return 1;
	}
	return 0;
}
int issafecol(int grid[N][N],int col,int num)
{
	int row;
	for(row=0;row<N;row++)
	{
		if(grid[row][col]==num)
		return 1;

	}
	return 0;
}
int issafebox(int grid[N][N],int rowstart,int colstart,int num)
{
	int row,col;
	for(row=0;row<3;row++)

	{
		for(col=0;col<3;col++)

		{
			if(grid[row+rowstart][col+colstart]==num)
			return 1;
		}
	}
	return 0;
}
int issafe(int grid[N][N],int row,int col,int num)
{
	if (!issaferow(grid,row,num) &&!issafecol(grid,col,num) && !issafebox(grid,row-row%3,col-col%3,num)==1)
        return 1;
    return 0;
}
int sudoku(int grid[N][N])
{
	int row,col,i;
	if (!isunassigned(grid, row, col))
       return 1;
	for(i=0;i<=9;i++)
	{
	if(issafe(grid,row,col,i))
	{
	grid[row][col]=i;
	if(sudoku(grid)==1)
    {
        printsol(grid);
    return 1;
    }
grid[row][col]=UNASSINGED;
	}

	}
	return 0;
}
void printsol(int grid[N][N])
{
	int row,col;
	for(row=0;row<N;row++)
	{
		for(col=0;col<N;col++)
		{
			printf("%d%d",grid[row][col]);
		}
	}
}



int main(void) {
	int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
                      if(sudoku(grid)==1)
                      printsol(grid);
                      else
                      printf("sol doesnt exits");
	return 0;
}
