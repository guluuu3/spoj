#include <stdio.h>
#include<stdlib.h>
# def MACHINES
struct Edge
{
	int src;//	source
	int des;// destination
    int weight;
};
struct Graph
{
	int V;//no of vertices
	int E;//no pf edges
	struct Edge* edge;
};
struct  Graph* graph_create_graph(int V,int E)
{
	struct Graph* graph=(struct Graph*)malloc(sizeof(struct Graph));
	graph->V=V;
	graph->E=E;

	graph->edge=(struct Edge*)malloc(graph->E*sizeof(struct Edge));
	return graph;
};
void create_edge_set(int matrix[5][5],int weight[])
{
	int V = 5;  // Number of vertices in graph
    int E = 100;
    int m=0;

    int i,j;// Number of edges in graph
    struct Graph* graph = graph_create_graph(V, E);
    for( i=0;i<V;i++)
    {
    	for( j=0;j<V;j++)
    	{
    		if(matrix[i][j]==1)
    		{
    			graph->edge[m].src=i;
    			graph->edge[m].des=j;
    			graph->edge[m].weight=1;
    			m++;
    		}

    	}
    }
    for( i=0;i<m;i++)
    {
        printf("%d %d %d ",graph->edge[i].src,graph->edge[i].des,graph->edge[i].weight);
        printf("\n");
    }

    return;
}



int main(void)
{
                   int  matrix[5][5]= {{0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1},
                      {0, 1, 0, 0, 1},
                      {1, 1, 0, 0, 1},
                      {0, 1, 1, 1, 0},
                     };
                     create_edge_set(matrix);

	// your code goes here
	return 0;
}
