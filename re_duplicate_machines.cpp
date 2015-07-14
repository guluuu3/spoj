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
int mass[100][100];
int power_consumption[]={1,2,3,4,5,6};
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
    			graph->edge[m].weight=mass[i][j];
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






void print_graph(int graph[][100],int mass[][100],int power)
{

    for(int i=0;i<power;i++)
    {
        for(int j=0;j<power;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<power;i++)
    {
        for(int j=0;j<power;j++)
        {
            cout<<mass[i][j]<<" ";
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
            for(int m=0;m<power;m++)
            {
                int flag=1;
                for(int j=0;j<n && flag==1;j++)
                {
                        if((aray[i][j]+r[j]==aray[m][j]) || (aray[i][j]-f[j]==aray[m][j]))
                        {

                            flag=1;

                        }
                            else
                        flag=0;
                }
                        if(flag==1)
                        {
                            graph[i][m]=1;

                            for(int z=0;z<n;z++)
                                cout<< aray[i][z]<< " ";
                            cout<<" -";
                            for(int z=0;z<n;z++)
                                cout<<aray[m][z]<< " ";

                            cout<<endl;

                            l++;//l++count number of edges;
                        }
                        else
                            graph[i][m]=0;
            }

        }

        for(int z=0;z<n;z++)
                            {
                                temp_dec[z]=f[z];
                            }

for(int i=0;i<power;i++)
       {

           for(int m=0;m<power;m++)
           {
               int flag=1;
                int mark=0;

               for(int j=0; j<n && flag==1;j++)
               {
                   if(aray[i][j]-f[j]<aray[0][j])
                   {
                       temp_dec[j]=aray[i][j]-aray[0][j];
                       mark=1;
                      // cout<<temp_dec[j]<<" this is change ";

                       if((aray[i][j]+r[j]==aray[m][j]) || (aray[i][j]-temp_dec[j]==aray[m][j]))
                        {

                            flag=1;

                        }
                            else
                        flag=0;
                       temp_dec[j]=f[j];
                       //cout<<temp_dec[j]<<endl;

                   }


               }

               if(flag==1 && mark==1)
                        {
                            graph[i][m]=1;

                            for(int z=0;z<n;z++)
                                cout<< aray[i][z]<< " ";
                            cout<<" -";
                            for(int z=0;z<n;z++)
                                cout<<aray[m][z]<< " ";

                            cout<<endl;

                            l++;//l++count number of edges;
                        }


           }
       }



for(int i=0;i<power;i++)
        {
            bool mark=true;

            for(int m=0;m<power && mark==true;m++)
            {
                for(int j=0;j<n ;j++)
                {
                    if(aray[i][j]-temp_dec[j]!=aray[m][j])
                         mark=false;

                }
                if(mark==true)
                {
                                      graph[i][m]=0;
                                      l--;
                }

            }
        }

for(int i=0;i<power;i++)
{
    for(int m=0;m<power;m++)
    {
        int w=0;
        for(int j=0;j<n;j++)
        {
           if(aray[i][j]-f[j]==aray[m][j] && graph[i][m]==1)
           {
               w=w+power_consumption[j];
           }
        }
        mass[i][m]=w;
    }
}


        print_graph(graph,mass,power);
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
void tr(int depth,int top,int m, int *arr,int x,int machines,int power,int r[],int f[])
{
    for(int i=0;i<x;i++)
    {

       if(depth!=machines)
       {
	   arr[top]=m+i;
	   tr(depth+1,top+1,m,arr,x,machines,power,r,f);
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
	int r[]={1,2};
	int f[]={1,2};


	printf("Total number of nodes in graph : %d",power);
	printf("\n");
    tr(0,0,arr[0],arr,band_diff,p,power,r,f);
    return 0;
}
