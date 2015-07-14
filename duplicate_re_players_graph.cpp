#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;
static int k=0;
static int l=0;
int aray[100][10];
int graph[100][100];

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
void create_edge_set(int matrix[][100],int power,int l)
{
	int V = power;  // Number of vertices in graph
    int E = l;
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
    			graph->edge[m].weight=8;
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






void print_graph(int graph[][100],int power)
{

    for(int i=0;i<power;i++)
    {
        for(int j=0;j<power;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
void print(int aray[][10],int n,int power,int r[],int f[],int x)
{

    for(int i=0;i<n;i++)
        cout<<aray[k][i]<< " ";

         k++;

int temp_dec[100];


if(k==power)
    {
        cout<<endl;
         for(int i=0;i<power;i++)
         {
             for(int j=0;j<n;j++)
             {
                 if(aray[i][j]-f[j]<aray[0][j])
                    temp_dec[j]=aray[i][j]-aray[0][j];
                 else
                    temp_dec[j]=f[j];
             }
         }






        for(int i=0;i<power;i++)
        {
            for(int m=0;m<power;m++)
            {
                int flag=1;
                for(int j=0;j<n && flag==1;j++)
                {


                        if((aray[i][j]+r[j]==aray[m][j]) || (aray[i][j]-temp_dec[j]==aray[m][j]))
                        {

                            flag=1;

                        }
                            else
                        flag=0;
                }
                        if(flag==1)
                        {

                            for(int z=0;z<n;z++)
                                cout<< aray[i][z]<< " ";
                            cout<<" -";
                            for(int z=0;z<n;z++)
                                cout<<aray[m][z]<< " ";

                            cout<<endl;
                            graph[i][m]=1;
                            l++;//count number of edges;
                        }
                        else
                            graph[i][m]=0;
            }

        }

        for(int i=0;i<power;i++)
        {
            bool mark=true;

            for(int k=0;k<power && mark==true;k++)
            {
                for(int j=0;j<n ;j++)
                {
                    if(aray[i][j]-temp_dec[j]!=aray[k][j])
                         mark=false;

                }
                if(mark==true)
                {
                                      graph[i][k]=0;
                                      l--;
                }

            }
        }


        print_graph(graph,power);
        create_edge_set(graph,power,l);

    }

    return;
}
void add(int ary[], int n,int power,int r[],int f[],int x)
{
    for ( int i = 0; i < n; ++i)
    {
        aray[k][i]=ary[i];
    }


     print(aray,n,power,r,f,x);
}
void tr(int depth,int top,int k, int *arr,int x,int machines,int power,int r[],int f[])
{
    for(int i=0;i<x;i++)
    {

       if(depth!=machines)
       {
	   arr[top]=k+i;
	   tr(depth+1,top+1,k,arr,x,machines,power,r,f);
       }

    }
if(depth==machines)
{
	add(arr,top,power,r,f,x);
    cout<<endl;
}
return ;
}

int main()
{

    //int arr[100];
    int power, p,n1,n2,i;
	int m=0;
	cout<<"enter the number of machines: ";
	cin>>p;//Number of players
	cout<<"enter the starting band: ";
    cin>>n1;
	cout<<"enter the ending band: ";
	cin>>n2;

    int  band_diff = n2-n1-1;
    cout<<band_diff<<endl;


    power=pow((n2-n1-1),p);
    int *arr=(int*)malloc(((n2-n1)-1)*sizeof(int*));
    for( i=n1+1;i<n2;i++)
	{
		arr[m]=i;
		m++;
	}
	for( i=0;i<(n2-n1-1);i++)
	printf("%d \n",arr[i]);
	int r[]={1,2,3,2,1};
	int f[]={1,2,3,2,2};

	printf("Total number of nodes in graph : %d",power);
	printf("\n");
    tr(0,0,arr[0],arr,band_diff,p,power,r,f);
    return 0;
}
