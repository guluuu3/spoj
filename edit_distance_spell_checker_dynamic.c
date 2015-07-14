#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define COST 1
#define SENTINEL -1
#define STRING_X "SUNDAY"
#define STRING_Y "SATURDAY"
#include<string.h>

int min(int a,int b,int c)
{
	if(a<b)
	return (a<c)?a:c;
	else
	return (b<c)?b:c;
}
int edit_distanc(char *x,char *y)
{
	int cost=0;
	int left_cell,right_cell,corner_cell;
	int m=(strlen)(x);
	int n=(strlen)(y);
	int *t=(int*)malloc(m*n*sizeof(int));
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(t+i*n+j)=SENTINEL;
		}
	}
	for(i=0;i<m;i++)
	{
		*(t+i*n)=i;
	}
	for(j=0;j<n;j++)
	{
		*(t+j)=j;
	}
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		left_cell=*(t+i*n+(j-1));
		left_cell+=EDIT_COST;
		
		right_cell=*(t+(i-1)*n+j);
		right_cell+=EDIT_COST;
		
		corner_cell=*(t+(i-1)*n +(j-1));
		corner_cell+=(x!=y);
		*(t+(i*n)*j)=min(left_cell,right_cell,corner_cell);
	}

	}
	cost=*(t+(m*n)-1);
}

int main()
{
	char X[] = STRING_X; // vertical
    char Y[] = STRING_Y; // horizontal
 
    printf("Minimum edits required to convert %s into %s is %d\n",
           X, Y, EditDistanceDP(X, Y) );
   // printf("Minimum edits required to convert %s into %s is %d by recursion\n",//
          // X, Y, EditDistanceRecursion(X, Y, strlen(X), strlen(Y)));//
 
    return 0;
}