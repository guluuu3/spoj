#include<iostream>
#include<list>
using namespace std;
class Graph
{
	int V;
	list<int>*adj;
   void	DFSUtil(int v,bool *visited);
   public:
   Graph(int V)
   {
   	this->V=V;
   	adj=new list<int>[V];
   }
   ~Graph()
   {
   	delete[]adj;
   }
   void addEdge(int v,int w);
   bool is_SSC();
   Graph get_transpose();
};
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}
void Graph:: DFSUtil(int v,bool *visited)
{
	visited[v]=true;
	cout<<v<<""<<endl;

	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(!visited[*i])
		DFSUtil(*i,visited);
	}
}
Graph Graph ::get_transpose()
{
bool *visited=new bool[V];
Graph g(V);
for(int i=0;i<V;i++)
{

    visited[i]=false;
}
for( int v=0;v<V;v++)
{
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		g.adj[*i].push_back(v);
	}

}
for(int i=0;i<V;i++)
{
 if(visited[i]==false)
		g.DFSUtil(i,visited);
}
return g;
}
bool Graph::is_SSC()
{
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
    {
    visited[i]=false;
    }
    DFSUtil(0,visited);
    for(int i=0;i<V;i++)
    {
    if(visited[i]==false)
        return false;
    }
    Graph gr=get_transpose();
    for(int i=0;i<V;i++)
    {
    visited[i]=false;
    }
    gr.DFSUtil(0,visited);
    for(int i=0;i<V;i++)
    {
    if(visited[i]==false)
        return false;
    }
    return true;
}
int main()
{
	 Graph g1(5);
    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.addEdge(3, 0);
    g1.addEdge(2, 4);
    g1.addEdge(4, 2);
    g1.is_SSC()? cout << "Yes\n" : cout << "No\n";

    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.addEdge(2, 3);
    g2.is_SSC()? cout << "Yes\n" : cout << "No\n";

    return 0;
}
