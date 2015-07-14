#include<iostream>
#include<queue>
#define V 4
using namespace std;
bool is_bipatite(int  Graph[][V],int src)
{
	int color[V];
	for(int i=0;i<V;i++)
	{
		color[i]=-1;
	}
	queue<int>q;
	q.push(src);
	while(!q.empty())
	{
		int 	v=q.front();
			q.pop();
	for(int u=0;u<V;u++)
	{
	if(Graph[v][u]&& color[v]==-1)
	{
		color[u]=1-color[v];
		q.push(u);
	}
	else if(Graph[v][u]&& color[u]==color[v])
	return false;
	}
	}
	return true;
}
int main()
{
	int G[][V] = {{0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
    };

    is_bipatite(G, 0) ? cout << "Yes a bipartite graph" : cout << "No";
    return 0;
}
