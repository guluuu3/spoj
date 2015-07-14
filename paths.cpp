#include<iostream>
#include <list>
#include<stack>

using namespace std;

// Graph class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[],stack<int> &Stack);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(int v);    // DFS traversal of the vertices reachable from v
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

void Graph::DFSUtil(int v, bool visited[],stack<int> &Stack)
{


    // Mark the current node as visited and print it
    visited[v] = true;
    //cout << v << " "<<endl;;
    Stack.push(v);

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;

    for(i = adj[v].begin(); i != adj[v].end(); ++i)
    {


            DFSUtil(*i, visited,Stack);


    }
    //Stack.push(x);




}

// DFS traversal of the vertices reachable from v. It uses recursive DFSUtil()
void Graph::DFS(int v)
{
      stack<int>Stack;
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited,Stack);

    while(Stack.empty()==false)
            {
            cout << Stack.top() << " ";
            Stack.pop();
            }
            cout<<endl;
}

int main()
{
    // Create a graph given in the above diagram


Graph g(13);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(1,5);
    g.addEdge(5,6);
    g.addEdge(6,7);
    g.addEdge(1,8);
    g.addEdge(8,9);
    g.addEdge(9,10);
    g.addEdge(2,11);
    g.addEdge(11,12);

    cout << "Following is Depth First Traversal (starting from vertex 2) \n";
    for(int i=0;i<6;i++)
    g.DFS(i);

    return 0;
}
