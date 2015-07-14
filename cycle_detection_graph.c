#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Edge
{
	int src,dst;
};

struct Graph
{
int V ,E;
struct Edge *edge;
};
struct Graph *creategraph(int V,int E)
{
	struct Graph *graph=(struct Graph*)malloc(sizeof(struct Graph));
	graph->V=V;
	graph->E=E;
	graph->edge=(struct Edge*)malloc(graph->E*sizeof(struct Edge));
	return graph;
}
int find(int parent[],int i)
{
	if(parent[i]==-1)
	return i;
	find(parent,parent[i]);
}
void Union(int parent[],int x,int y)
{
	int xset=find(parent,x);
	int yset=find(parent,y);
	parent[xset]=yset;
}
int iscycle(struct Graph *graph)
{
	int *parent=(int*)malloc(graph->V*(sizeof(int)));
	memset(parent,-1,sizeof(int)*graph->V);
	int i;
	for(i=0;i<graph->E;i++)
	{
		int x=find(parent,graph->edge[i].src);
		int y=find(parent,graph->edge[i].dst);
		if(x==y)
		return 1;
		Union(parent,x,y);
		}
		return 0;
}
int main()
{
struct Graph *graph=	creategraph(3,3);
graph->edge[0].src=0;
graph->edge[0].dst=1;
graph->edge[1].src=1;
graph->edge[1].dst=2;
graph->edge[2].src=0;
graph->edge[2].dst=2;
	if(iscycle(graph)==1)
	printf("cycle found");
	else
	printf("no cycle detected");
	}
//O(ELOGV)//
