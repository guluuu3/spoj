#include <stdio.h>
#include<stdlib.h>
#define V 5
#define bool int
void printsol(int path[]);
bool issafe(bool graph[V][V],int path[],int v,int pos)
{
    int i;
if(graph[path[pos-1]][v]==0)
return 0;

for(i=0;i<V;i++)
if(path[i]=v)
return 0;
else
return 1;
}
bool cycle_util(bool graph[V][V],int pos,int path[])
{
	if(pos==V)
	{
		if(graph[path[pos-1]][path[0]]==1)
		return 1;
		else
            return 0;
	}

	int v;
	for(v=1;v<V;v++)
	{
	if(issafe(graph,path,v,pos)==1)
	{
		path[pos]=v;
		if(cycle_util(graph,pos+1,path)==1)
		return 1;
		path[pos]=-1;
	}

}
	return 0;
}
bool cycle(bool graph[V][V])
{
	int *path=(int*)malloc(V*sizeof(int));
	//int path[V];
	int i;
	for(i=1;i<V;i++)
	{
		path[i]=-1;
	}
	path[0]=0;
	if(cycle_util(graph,1,path)==0)
	{
		printf("sol doesnt exit");
		return 0;
	}

printsol(path);

	return 1;

}
void printsol(int path[])
{
	int i;
	for(i=0;i<V;i++)
	{
		printf("%d",path[i]);

	}
	printf("%d",path[0]);
	printf("\n");
	printf("\n");
}

int main(void) {
/* Let us create the following graph
      (0)--(1)--(2)
       |   / \   |
       |  /   \  |
       | /     \ |
      (3)-------(4)    */
   bool graph1[V][V] = {{0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1},
                      {0, 1, 0, 0, 1},
                      {1, 1, 0, 0, 1},
                      {0, 1, 1, 1, 0},
                     };

    // Print the solution
    cycle(graph1);
printf("\n");
   /* Let us create the following graph
      (0)--(1)--(2)
       |   / \   |
       |  /   \  |
       | /     \ |
      (3)       (4)    */
    bool graph2[V][V] = {{0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1},
                      {0, 1, 0, 0, 1},
                      {1, 1, 0, 0, 0},
                      {0, 1, 1, 0, 0},
                     };

    // Print the solution
    cycle(graph2);
	return 0;
}
