#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int row,col;
bool visited[200][200];
int distance_matrix[200][200];
//#define pi pair<int,int>
bool issafe(int i,int j)
{
	if(i<0 ||j<0 || i>=row || j>=col)
		return false;
	return true;
}
////int x_c[]={0,1,0,-1};
//int y_c[]={1,0,-1,0};
int x_c[] = {-1, 0, 1, 0};
int y_c[] = {0, -1, 0, 1};
struct node
{
    int src; int dest; int length;
    node(int _src, int _dest, int _length)
    {
        src = _src;
        dest = _dest;
        length = _length;
    }
};
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&row,&col);
	    //cout<<row<<col;
	    char matrix[row+5][col+5];
	    queue<node>Q;
	    for(int i=0;i<row;i++)
	    {
	    	cin>>matrix[i];
	    }


	    for(int i=0;i<row;i++)
        {

            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]=='1')
                {
                    Q.push(node(i,j,0));
                }

            }

        }
        //cout<<endl;

	    for(int i=0;i<row;i++)
        {
          for(int j=0;j<col;j++)
          {
              visited[i][j]=false;
              distance_matrix[i][j]=0;
          }
        }
	    //memset(visited,false,sizeof(visited));
	   // memset(distance,0,sizeof(distance));
	    while(!Q.empty())
	    {
	    	node u=Q.front();
	    	Q.pop();
	    	int i=u.src;
	    	int j=u.dest;
	    	int dist=u.length;
	    	//cout<<dist<<" ";
	    	if(visited[i][j])
	    		continue;
	    	visited[i][j]=1;
	    	distance_matrix[i][j]=dist;
	    	for(int k=0;k<4;k++)
	    	{
	    		int x_new=i+x_c[k];
	    		int y_new=j+y_c[k];
	    		if(issafe(x_new,y_new)&& visited[x_new][y_new]==false)
	    		{
	    			Q.push(node(x_new,y_new,dist+1));
	    		}
	    	}

	    }
	    for(int i=0;i<row;i++)
	    {
	    	for(int j=0;j<col;j++)
	    	{
	    		printf("%d ",distance_matrix[i][j]);
	    	}
	    	printf("\n");

	    }
	    cout<<endl;

	}
	return 0;
}
