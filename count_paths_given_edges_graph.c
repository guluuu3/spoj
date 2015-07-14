#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define V 4
int countWalks( bool graph[V][V],int u,int v,int k)
{
	int count=0;
	if(k==0 && u==v)
	return 1;
	if(k==1 && graph[u][v])
	return 1;
	if(k<=0)
	return 0;
	int i;
	for(i=0;i<V;i++)

		if(graph[u][i])
		count+=countWalks(graph,i,v,k-1);

	return count;
}
int main()
{
	int graph[V][V] = { {0, 1, 1, 1},
                        {0, 0, 0, 1},
                        {0, 0, 0, 1},
                        {0, 0, 0, 0}
                      };
    int u = 0, v = 3, k = 2;
 int x=countWalks(graph, u, v, k);
    printf("%d",x);
    return 0;
}
