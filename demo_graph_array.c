#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#define INF 100
 static int x=-1;
 static int m=-1;
 int min(int x,int y)
 {
     return (x<y?x:y);
 }

void add(int a,int b, long int arra[100000][2],int k, int total,int power,int head,int n)
{
int l;

    int graph[power][power];
    int weight[power][power];
    //printf("%d",x++);
    int start=head;
    ++m;
        arra[m][0]=a;
        arra[m][1]=b;
        printf("%d %d %d\n",arra[m][0],arra[m][1],m);
        if(m==total-1)
        {
            for(l=0;l<n;l++)
            {
                ++m;
                start++;
                arra[m][0]=start;
                arra[m][1]=start;
                printf("%d %d %d\n",arra[m][0],arra[m][1],m);

            }
        }
        if(m==power-1)
        {
int i,j;

for(i=0;i<power;i++)
{
    for(j=0;j<power;j++)
    {
        graph[i][j]=0;
        weight[i][j]=INF;
    }
}
           for( i=0;i<power;i++)
    {
        for(j=0;j<power;j++)
        {

         if((*(*(arra+i))+1== *(*(arra+j)) && (*(*(arra+i)+1)+2==*(*(arra+j)+1))))
         {

                //printf("found forward edge");
                printf(" {%d %d } {%d %d}\n",*(*(arra+i)) ,*(*(arra+i)+1) ,*(*(arra+j)), *(*(arra+j)+1));
                graph[i][j]=1;
         }//Both increses

         if((*(*(arra+i))-1== *(*(arra+j)) && (*(*(arra+i)+1)+2==*(*(arra+j)+1))))
         {

                //printf("found forward edge");
                printf(" {%d %d } {%d %d}\n",*(*(arra+i)) ,*(*(arra+i)+1) ,*(*(arra+j)), *(*(arra+j)+1));
                graph[i][j]=1;
         }//First decreses and second increses
         if((*(*(arra+i))+1== *(*(arra+j)) && (*(*(arra+i)+1)-2==*(*(arra+j)+1))))
         {
             if((*(*(arra+i)+1)-2==head))
                {
                    printf("editing done\n");
                    printf(" {%d %d } {%d %d}\n",*(*(arra+i)) ,*(*(arra+i)+1) ,*(*(arra+j)), *(*(arra+j)+1)+1);
                }

                //printf("found forward edge");
              else
                {
                     printf(" {%d %d } {%d %d}\n",*(*(arra+i)) ,*(*(arra+i)+1) ,*(*(arra+j)), *(*(arra+j)+1));
                     graph[i][j]=1;
         }//First increses and second decreses
         }

        }
    }

     for(i=0;i<power;i++)
        {
            for(j=0;j<power;j++)
            {
                if(graph[i][j]!=0)
                {
                    weight[i][j]=rand()%power;
                }
            }

        }

        for(i=0;i<power;i++)
        {
            for(j=0;j<power;j++)
            {
                printf("%d  ",graph[i][j]);
            }
            printf("\n");
        }
        printf("\n \n");
        for(i=0;i<power;i++)
        {
            for(j=0;j<power;j++)
            {

                printf("%d  ",weight[i][j]);
            }
            printf("\n");
        }

        //Serach function starts//
        int u,v,start;
        printf("enter the starting node  of player A:");
     scanf("%d",&u);
     printf("\n");
     printf("enter the starting node  of player B:");
     scanf("%d",&v);
     for(i=0;i<power;i++)
     {
      if(arra[i][0]==u && arra[i][1]==v)
      {
        start=i;
        break;
       }
     }
     printf("%d\n",start);

     printf("%d\n",start);

    for(i=0;i<power;i++)
    {
        for(j=0;j<power;j++)
        {
            printf("%d  ",weight[i][j]);
        }
        printf("\n");
    }

 printf("enter the number of edge to traverse:");
     scanf("%d",&k);
int e,a;
int sp[power][power][k+1];
    //int path[k+1];
    //path[0]=u;
//

    // Loop for number of edges from 0 to k
    for (e = 0; e <= k; e++)
    {
        for (i = 0; i < power; i++)  // for source
        {
            for (j = 0; j < power; j++) // for destination
            {
                // initialize value
                sp[i][j][e] = INF;

                // from base cases
                if (e == 0 && i == j)
                    sp[i][j][e] = 0;
                if (e == 1 && weight[i][j] != INF)
                    sp[i][j][e] = weight[i][j];

                //go to adjacent only when number of edges is more than 1
                if (e > 1)
                {
                    for (a = 0; a < power; a++)
                    {
                        // There should be an edge from i to a and a
                        // should not be same as either i or j

                        if (weight[i][a] != INF && i != a &&
                            j!= a && sp[a][j][e-1] != INF)
                            {

                          sp[i][j][e] = min(sp[i][j][e], weight[i][a] +
                                                       sp[a][j][e-1]);

                            }

                            }

                    }
                }
           }
        }



    for( i=0;i<power;i++)
    {
    for( j=0;j<power;j++)
    {
        if(sp[i][j][k]!=INF)
        {
        printf(" path from %d to  %d with %d edges %d: \n" ,i,j,e ,sp[i][j][k]);
        }

            //printf("No path exits");

    }
    printf("\n");
    }
}








return ;
}
void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
void permutate(int *arr,int r,int i,int total,int n,int visited[],int power,int start)
{
    int j;

//int **store=(int**)malloc(sizeof(int**)*power);
int store[power][2];


if(i==n)
{

    int val;
    char str2[9],str1[9];
    int a[100000];
    itoa(arr[n-1], str1,10);
    itoa(arr[n], str2, 10);
    strcat(str1,str2);
    ++x;
    val=atoi(str1);
      a[x]=val;
//printf("%d-",a[x]);
  //printf("%d %d \n",*(arr+(n-2)), *(arr+(n-1)));
  if(visited[a[x]]==0)
{
		//printf("%d %d %d %d ",arr[0] ,arr[1],arr[2],arr[3]);
		 add( *(arr+(n-1)),*(arr+(n)),store,x,total,power,start,n+1);
	printf("\n");
	visited[a[x]]=1;
}


 //printf("%d",x);
  //store[x][0]=*(arr+(n-2));
  //store[x][1]=*(arr+(n-1));
  //printf("value of store :");
  //printf("%d %d  %d \n", store[x][0],store[x][1] ,x);

}
else
for(j=i;j<=n;j++)
{
	swap(arr+i,arr+j);
	permutate(arr,r,i+1 ,total,n,visited,power,start);
	swap(arr+i,arr+j);
}

//printf("%d",x);
//compare((int**)store,);
return;
}
int factorial(int n)
{
    if (n<=1)
        return(1);
    else
        n=n*factorial(n-1);
    return(n);//For two playersOnly
}
int main()
{
	int power, p,n1,n2,i;
	int visited[10000];
	for(i=0;i<10000;i++)
        {
            visited[i]=0;
        }
	int k=0;
	printf("enter the number of players: ");
	scanf("%d",&p);
	printf("enter the starting number: ");
	scanf("%d",&n1);
	printf("enter the ending number: ");
	scanf("%d",&n2);
	int *arr=(int*)malloc(((n2-n1)-1)*sizeof(int*));

	for( i=n1+1;i<n2;i++)
	{
		arr[k]=i;
		k++;
	}
	for( i=0;i<(n2-n1-1);i++)
	printf("%d \n",arr[i]);

	int fact=factorial((n2-n1-1));
	int total=fact/2;
    power=pow((n2-n1-1),2);

	printf("Total number of nodes in graph : %d",power);
	printf("\n");
	permutate(arr,p,0,total, (n2-n1-2),visited,power,n1);//permutation calls with one less node than than the total number of nodes

	return 0;

	}


