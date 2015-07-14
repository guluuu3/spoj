#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>
#define V 5

int min(int key[],bool mst[])
{
int min=INT_MAX;
int min_index;
int i;
for(i=0;i<V;i++)
{
	if(min>key[i]&&mst[i]==false)
	{
		min=key[i];
		min_index=i;
	}
}
return min_index;
}
int printMST(int parent[], int n, int graph[V][V])
{
    int i;
   printf("Edge   Weight\n");
   for (i = 1; i < V; i++)
      printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}

void spanning_tree(int graph[V][V])
{
	int parent[V];
	int key[V];
	bool mst[V];
	int i;
	for(i=0;i<V;i++)
	{
		mst[i]=false;
		key[i]=INT_MAX;
	}
	parent[0]=-1;
	key[0]=0;

int count;
for(count=0;count< V-1;count++)
{
	int u=min(key,mst);
	mst[u]=true;
	for(i=0;i<V;i++)
	{
		if(graph[u][i]&&mst[i]==false && graph[u][i]<key[u])
		{
			parent[i]=u;
			key[i]=graph[u][i];
		}
	}

}
printMST(parent, V, graph);
}
int main(void) {
/* Let us create the following graph
          2    3
      (0)--(1)--(2)
       |   / \   |
      6| 8/   \5 |7
       | /     \ |
      (3)-------(4)
            9          */
   int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
 spanning_tree(graph);
 	// your code goes here
	return 0;
}
