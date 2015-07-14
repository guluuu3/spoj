#include<stdio.h>
#include<stdlib.h>
#define V 4
#define bool int
bool coloringutil(bool graph[V][V],int v,int c,int color[]);
void printsol(int color[]);
bool issafe(bool graph[V][V],int v,int c,int color[])
{
	int i;
	for(i=0;i<V;i++)

	if(graph[v][i]==1 && c==color[i])
	return 0;
	return 1;
}
bool coloringutil(bool graph[V][V],int v,int m,int color[])
{
	int c;
	if(v==V)
	return 1;
	for(c=1;c<=m;c++)
	{
		if(issafe(graph,v,c,color)==1)
		{
		color[v]=c;
		if(coloringutil(graph,v+1,m,color)==1)
		return 1;

		color[v]=0;
		}
	}
	return 0;
}
bool coloring(bool graph[V][V],int m)
{
	int *color=(int*)malloc(V*sizeof(int));
	int i;
	for(i=0;i<V;i++)
	{
		color[i]=0;
	}
	if(coloringutil(graph,0,m,color)==1)
	{

		printsol(color);
		return 1;
	}

	else
	{
	printf("coloring not possible");
	return 0;
}
}
void printsol(int color[])
{
	int i;
	for(i=0;i<V;i++)
	{
		printf("%d",color[i]);
	}
}
int main()
{

	/* Create following graph and test whether it is 3 colorable
      (3)---(2)
       |   / |
       |  /  |
       | /   |
      (0)---(1)
    */
    bool graph[V][V] = {{0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0},
    };
    int m = 3; // Number of colors
    coloring (graph, m);
    return 0;
}
