#include<iostream>
#include<limits>
#include<list>
using namespace std;
class Graph
{
	int V;
	list<int>*adj;//array of adjacency list
	//bool DFSUtil(int s,int d,bool visited[]);
	public:
	Graph(int V);
	void addEdge(int v,int w);
	bool DFS(int s,int d);
};
Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
}
 void Graph ::addEdge(int v,int w)
 {
 	adj[v].push_back(w);
 }

bool Graph ::DFS(int s,int d)
{
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
	}
	visited[s]=true;
 cout<<s<<"";
 list<int>::iterator i;
 for(i=adj[s].begin();i!=adj[s].end();++i)
 {
 if(*i==d)
 return true;

 	if(!visited[*i])
 	{

 	DFS(*i,d);
 	}
}
return false;
}
int main()
{
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    int u = 1, v = 3;
    if(g.DFS(u, v))
        cout<< "\n There is a path from " << u << " to " << v;
    else
        cout<< "\n There is no path from " << u << " to " << v;

    u = 3, v = 1;
    if(g.DFS(u, v))
        cout<< "\n There is a path from " << u << " to " << v;
    else
        cout<< "\n There is no path from " << u << " to " << v;

    return 0;
}
