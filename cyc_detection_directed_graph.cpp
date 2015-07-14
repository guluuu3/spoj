
#include<iostream>
#include <list>
#include <limits.h>

using namespace std;

class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    bool is_cycle_util(int v, bool *visited, bool *rs);  // used by isCyclic()
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // to add an edge to graph
    bool is_cycle();    // returns true if there is a cycle in this graph
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
bool Graph::is_cycle_util(int v,bool *visited,bool *recstack)
{
	if(visited[v]==false)
	{
		visited[v]=true;
		recstack[v]=true;
	}
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i)
	{
		if(!visited[*i] && is_cycle_util(*i,visited,recstack))
		return true;
		else if(recstack[*i])
		return true;
	}

	recstack[v]=false;
	return false;
}
bool Graph::is_cycle()
{
	bool *visited=new bool[V];
	bool *recstack=new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
		recstack[i]=false;
	}
	for(int i=0;i<V;i++)
	{
		is_cycle_util(i,visited,recstack);
		return true;
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

    if(g.is_cycle())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}
