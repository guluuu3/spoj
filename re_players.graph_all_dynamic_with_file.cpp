#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<climits>
#include<float.h>
#include<fstream>

using namespace std;
static int k=0;
static int l=0;
int aray[100][10];
int matrix[100][100];
int mass[100][100];
int dp[100][100];
int power_consumption[]={10,20,3,43,5,11};
double min(double x,double y)
{
    return (x<y)?x:y;
}
double max(double x,double y)
{
    return (x>y)?x:y;
}
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



void mmc(struct Graph *graph,int m)
{
    FILE *fp=fopen("example.txt","a");
int n=graph->V;
int E=m;
//cout<<
for (int i = 0; i < n; ++i)
    {
     memset(dp[i + 1], 0x7f, sizeof(dp[i + 1]));
for (int j = 0; j < m; ++j)
    {
    int u = graph->edge[j].src, v = graph->edge[j].des, w = graph->edge[j].weight;
if (dp[i][u] != INT_MAX) dp[i + 1][v] = min(dp[i + 1][v], dp[i][u] + w);
}
}
double res = DBL_MAX;
for (int i = 1; i <= n; ++i) {
if (dp[n][i] == INT_MAX) continue;
double value = -DBL_MAX;
for (int j = 0; j < n; ++j) {
value = max(value, (double)(dp[n][i] - dp[j][i]) / (n - j));
}
res = min(res, value);
}
if(res!=DBL_MAX)
{
 cout<<res;
 fprintf(fp,"Minimum mean weighted cycle : %f ",res)  ;
}

else
{
    fprintf(fp,"Minimum mean weighted cycle doesnt exits : %d ",res)  ;
  cout<<"No cycle exits";
}
fclose(fp);

return ;
}

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
    FILE *fp=fopen("example.txt","a");
    for( i=0;i<m;i++)
    {
        fprintf( fp ,"%d %d %d ",graph->edge[i].src,graph->edge[i].des,graph->edge[i].weight);
        fprintf( fp,"\n");
    }
    fclose(fp);

    mmc(graph,m);

    return;
}

void print_graph(int matrix[][100],int mass[][100],int power)
{
  FILE  *fp=fopen("example.txt","a");
    for(int i=0;i<power;i++)
    {
        for(int j=0;j<power;j++)
        {
            fprintf(fp,"%d  ",matrix[i][j]);
        }
        fprintf(fp,"\n");
    }
   fprintf(fp,"\n");

    for(int i=0;i<power;i++)
    {
        for(int j=0;j<power;j++)
        {
           fprintf(fp,"%d  ",mass[i][j]);
        }
        fprintf(fp,"\n");
    }
    fprintf(fp,"\n");
    fclose(fp);
}
void print(int aray[][10],int n,int power,int r[],int f[],int x)
{
//FILE *fp=fopen("example.txt","a");
    for(int i=0;i<n;i++)
        printf("%d  ",aray[k][i]);
         k++;

int temp_dec[100];

if(k==power)
    {
        printf("\n");


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
                            matrix[i][m]=1;



                            l++;//l++count number of edges;
                        }
                        else
                            matrix[i][m]=0;
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
                   if((aray[i][j]-f[j]<aray[0][j]) && matrix[i][m]==1)
                   {
                       temp_dec[j]=aray[i][j]-aray[0][j];
                       mark=1;
                       //cout<<temp_dec[j]<<" ";

                       if((aray[i][j]+r[j]==aray[m][j]) || (aray[i][j]-temp_dec[j]==aray[m][j]))
                        {

                            flag=1;

                        }
                            else
                        flag=0;
                       temp_dec[j]=f[j];
                      // cout<<temp_dec[j]<<endl;

                   }


               }

               if(flag==1 && mark==1)
                        {
                            matrix[i][m]=1;
                            l++;//l++count number of edges;
                        }


           }
       }



if(n!=1)
{
for(int i=0;i<power;i++)
        {
            for(int m=0;m<power;m++)
            {
                bool mark=true;
                for(int j=0;(j<n && mark==true) ;j++)
                {
                    if(aray[i][j]-f[j]==aray[m][j] && matrix[i][m]==1)
                         mark=true;
                         else
                            mark=false;

                }
                if(mark==true)
                {
                                      matrix[i][m]=0;
                                      l--;
                }

            }
        }


for(int i=0;i<power;i++)
       {

           for(int m=0;m<power;m++)
           {
               int flag=1;
                int mark=0;
                bool label=true;

               for(int j=0; (j<n && (flag==1&&label==true));j++)
               {
                   if((aray[i][j]-f[j]<aray[0][j]) && matrix[i][m]==1)
                   {
                       temp_dec[j]=aray[i][j]-aray[0][j];
                       mark=1;
                      // cout<<temp_dec[j]<<" this is change ";

                       if( (aray[i][j]-temp_dec[j]==aray[m][j]))
                        {

                            flag=1;
                            label=true;

                        }
                            else
                            {
                              flag=0;
                              label=false;
                            }

                       temp_dec[j]=f[j];
                       //cout<<temp_dec[j]<<endl;

                   }


               }

               if(flag==1 && mark==1 &&label==true)
                        {
                            matrix[i][m]=0;



                            l--;//l++count number of edges;
                        }


           }
       }
}

FILE *fp=fopen("example.txt","a");
       for(int i=0;i<power;i++)
       {
           for(int m=0;m<power;m++)
           {
               if(matrix[i][m]==1)
               {
                  for(int j=0;j<n;j++)
                    fprintf(fp,"%d  ",aray[i][j]);
                   fprintf(fp,"\t");
                   for(int j=0;j<n;j++)
                    fprintf(fp,"%d  ",aray[m][j]);
                   //cout<<" { "<<aray[i][j]<<" } "<<" { "<<aray[i][j]<<" } ";
                   fprintf(fp,"\n");

               }
           }
       }

fclose(fp);
//for(int i=0;i<n;i++)
    //cout<<temp_dec[i]<<endl;




for(int i=0;i<power;i++)
{
    for(int m=0;m<power;m++)
    {
        int w=0;
        for(int j=0;j<n;j++)
        {
           if(aray[i][j]-f[j]==aray[m][j] && matrix[i][m]==1)
           {
               w=w+power_consumption[j];
           }
        }
        mass[i][m]=w;
    }
}


        print_graph(matrix,mass,power);
        create_edge_set(matrix,power,l);


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

    FILE *fp=fopen("example.txt","a");
    power=pow((n2-n1-1),p);
    int *arr=(int*)malloc(((n2-n1)-1)*sizeof(int*));
    for( i=n1+1;i<n2;i++)
	{
		arr[m]=i;
		m++;
	}
	for( i=0;i<(n2-n1-1);i++)
	fprintf( fp,"%d \n",arr[i]);

	int r[]={1,2,2,3,2};
	int f[]={1,2,3,3,2};


	printf("Total number of nodes in graph : %d",power);
	printf("\n");
	fclose(fp);
    tr(0,0,arr[0],arr,band_diff,p,power,r,f);

    return 0;
}
