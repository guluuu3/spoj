#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char matrix[3][3];
/*bool visited[6][6];
bool issafe(int i,int j)
{
	if(i<0 ||i>=3 || j<0 || j>=3)
		return false;
	return true;
}
int count(char matrix[][3], char t)
{
  int c = 0;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      if(matrix[i][j]==t)
        c++;
  return c;
}
int x_c[]={0, 0, 1, -1, 1, -1, 1, -1};
int y_c[]={1, -1, 0, 0, 1, -1, -1, 1};
bool dfs_vertical(int x,int y,int k)
{
    //cout<<k<<endl;
    if(k==3)
    	return true;
    visited[x][y]=true;
     for(int i=2;i<4;i++)
     {
     	int new_x=x+x_c[i];
        int new_y=y+y_c[i];
        if(issafe(new_x,new_y))
        {
        	if(matrix[new_x][new_y]=='X'&& visited[new_x][new_y]==false)
        	{
        		//cout<<flag<<new_x<<new_y<<endl;
        		if(dfs_vertical(new_x,new_y,k+1))
        		{
        		    return true;

        		}

        	}
        }
     }
visited[x][y]=false;
return false;

}
bool dfs_horizontal(int x,int y,int k)
{
    //cout<<k<<endl;
    if(k==3)
    	return true;
    visited[x][y]=true;
     for(int i=0;i<2;i++)
     {
     	int new_x=x+x_c[i];
        int new_y=y+y_c[i];
        if(issafe(new_x,new_y))
        {
        	if(matrix[new_x][new_y]=='X'&& visited[new_x][new_y]==false)
        	{
        		//cout<<flag<<new_x<<new_y<<endl;
        		if(dfs_horizontal(new_x,new_y,k+1))
        		{
        		    return true;

        		}

        	}
        }
     }
visited[x][y]=false;
return false;

}
bool dfs_right_diagonal(int x,int y,int k)
{
    //cout<<k<<endl;
    if(k==3)
    	return true;
    visited[x][y]=true;
     for(int i=4;i<6;i++)
     {
     	int new_x=x+x_c[i];
        int new_y=y+y_c[i];
        if(issafe(new_x,new_y))
        {
        	if(matrix[new_x][new_y]=='X'&& visited[new_x][new_y]==false)
        	{
        		//cout<<flag<<new_x<<new_y<<endl;
        		if(dfs_right_diagonal(new_x,new_y,k+1))
        		{
        		    return true;

        		}

        	}
        }
     }
visited[x][y]=false;
return false;

}
bool dfs_left_diagonal(int x,int y,int k)
{
    //cout<<k<<endl;
    if(k==3)
    	return true;
    visited[x][y]=true;
     for(int i=6;i<8;i++)
     {
     	int new_x=x+x_c[i];
        int new_y=y+y_c[i];
        if(issafe(new_x,new_y))
        {
        	if(matrix[new_x][new_y]=='X'&& visited[new_x][new_y]==false)
        	{
        		//cout<<flag<<new_x<<new_y<<endl;
        		if(dfs_left_diagonal(new_x,new_y,k+1))
        		{
        		    return true;

        		}

        	}
        }
     }
visited[x][y]=false;
return false;

}*/
bool dfs(char t)
{
  if(matrix[0][0]==t && matrix[0][1]==t&& matrix[0][2]==t)
    return true;
  if(matrix[0][0]==t && matrix[1][1]==t&& matrix[2][2]==t)
    return true ;
  if(matrix[0][0]==t && matrix[1][0]==t&& matrix[2][0]==t)
    return true;
  if(matrix[1][0]==t && matrix[1][1]==t&& matrix[1][2]==t)
    return true;
  if(matrix[2][0]==t && matrix[2][1]==t&& matrix[2][2]==t)
    return true;
  if(matrix[0][1]==t && matrix[1][1]==t&& matrix[2][1]==t)
    return true;
  if(matrix[0][2]==t && matrix[1][2]==t&& matrix[2][2]==t)
    return true;
  if(matrix[2][0]==t && matrix[1][1]==t&& matrix[0][2]==t)
    return true;

return false;
}
int count( char t)
{
  int c = 0;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      if(matrix[i][j]==t)
        c++;
  return c;
}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		for(int i=0;i<3;i++)
		{
			scanf("%s",matrix[i]);
		}
		/*for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				visited[i][j]=false;
			}
		}*/
		/*(for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;*/

    int countx = count('X');
    int counto = count('O');
    bool flag=false;
    if(countx<counto || countx-counto>1)
    {
      printf("no\n");
      flag=true;
    }
    if(countx==counto && dfs('X'))
    {
      printf("no\n");
      flag=true;
    }
    if(countx>counto && dfs('O'))
    {
      printf("no\n");
      flag=true;
    }
    if(flag==false)
    {
      printf("yes\n");
    }


	}
	return 0;
}
