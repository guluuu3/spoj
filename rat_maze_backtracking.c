#include <stdio.h>
#include<stdlib.h>
#define N 4
#define bool int
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]);
void printmaze(int sol[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		printf("%d",sol[i][j]);
		}
}
bool issafe(int maze[N][N],int x,int y)
{
if(x>=0 && x<N && y>=0 && y<N)
return 1;
else
return 0;
}
bool solve_maze(int maze[N][N])
{
	int sol[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    if(solve_maze_util(maze,0,0,sol)==1)
    {
    	printf("solution exits");
    	printmaze(sol);
    }
    else 
    printf("solution doesnt exits");
}
 bool solve_maze_util(int maze[N][N],int x,int y,int sol[N][N])
 {
 	if(x==N-1 && y==N-1)
 	{
 		sol[x][y]=1;
 		return 1;
 	}
 	if(issafe(maze,x,y)==1)
 	{
 		sol[x][y]=1; 	
 		if(issafe(maze,x+1,y)==1)
 		return 1;
 		if(issafe(maze,x,y+1)==1)
 		return 1;
 		sol[x][y]=0;
 		return 0;
 	}
 	return 0;
 }

int main(void) {
	 int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
 
    solve_maze(maze);
    getchar();
	return 0;
}
