#include<iostream>
#include <list>
#define CHARS 26
using namespace std;

// A class that represents an undirected graph
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // A dynamic array of adjacency lists
    int *in;
public:
    // Constructor and destructor
    Graph(int V);
    ~Graph()   { delete [] adj; delete [] in; }

    // function to add an edge to graph
    void addEdge(int v, int w) { adj[v].push_back(w);  (in[w])++; }

    // Method to check if this graph is Eulerian or not
    bool isEulerianCycle();

    // Method to check if all non-zero degree vertices are connected
    bool isSC();

    // Function to do DFS starting from v. Used in isConnected();
    void DFSUtil(int v, bool visited[]);

    Graph getTranspose();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
    in = new int[V];
    for (int i = 0; i < V; i++)
       in[i] = 0;
}

/* This function returns true if the directed graph has an eulerian
   cycle, otherwise returns false  */
bool Graph::isEulerianCycle()
{
    // Check if all non-zero degree vertices are connected
    if (isSC() == false)
        return false;

    // Check if in degree and out degree of every vertex is same
    for (int i = 0; i < V; i++)
        if (adj[i].size() != in[i])
            return false;

    return true;
}

// A recursive function to do DFS starting from v
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
Graph Graph::getTranspose()
{
	Graph g(V);
	for(int v=0;v<V;v++)
	{
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		adj[*i].push_back(v);
		in[v]++;
	}
}
return g;
}
bool Graph ::isSC()
{
	bool *visited=new bool [V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
	}
	for(int n=0;n<V;n++)
	{
		if(adj[n].size()!=0)
		break;
		DFSUtil(n,visited);

	}
	for(int i=0;i<V;i++)
	{
		if(adj[i].size()>0 && visited[i]==false)
		return false;
	}
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
	}
	Graph gr=getTranspose();
	for(int i=0;i<V;i++)
	{
		if(adj[i].size()!=0)
		break;
		gr.DFSUtil(i,visited);
	}
	for(int i=0;i<V;i++)
	{
		if(adj[i].size()>0 && visited[i]==false)
		return false;
	}
	return true;
	}

int main()
{
    // Create a graph given in the above diagram
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 0);

    if (g.isEulerianCycle())
       cout << "Given directed graph is eulerian \n";
    else
       cout << "Given directed graph is NOT eulerian \n";
    return 0;
}
