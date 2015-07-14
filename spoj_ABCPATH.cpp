#include<iostream>
#include<bits/stdc++.h>
using namespace std; int dp[60][60];
int matrix[60][60];
int n,m;
bool issafe(int i,int j)
{
	if(i<0 ||i>=n || j<0 || j>=m)
		return false;
	return true;
}
int x_c[]={0, 0, 1, -1, 1, -1, 1, -1};
int y_c[]={1, -1, 0, 0, 1, -1, -1, 1};
int dfs(int x,int y)
{
	if(dp[x][y]!=-1)
		return dp[x][y];
	dp[x][y]=0;
	for(int i=0;i<8;i++)
	{
         int new_x=x+x_c[i];
         int new_y=y+y_c[i];
         if(issafe(new_x,new_y))
         {
         	if(matrix[x][y]+1==matrix[new_x][new_y])
         	{
         		dp[x][y]=max(dp[x][y],1+dfs(new_x,new_y));
         	}
         }
	}
	return dp[x][y];
}

int main()
{
    freopen("test.txt","r",stdin);
    int ct=1;
	while(scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0)
        break;
	char str[n][m];
	for(int i=0;i<n;i++)
	{
			scanf("%s",str[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
            matrix[i][j]=str[i][j]-65;
		}
	}
	int x=-1;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0 && dp[i][j]==-1)
			{
                 x=max(x,dfs(i,j));
			}
		}
	}
	printf("Case %d: %d\n", ct, x + 1);
	ct++;
}
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		cout<<endl;
	}*/
	/*for(int i=1;i<m;i++)
	{
		if(matrix[0][i]-matrix[0][i-1]==1)
		{
              dp[0][i]=dp[0][i-1]+1;
		}
	}
	for(int i=1;i<n;i++)
	{
		if(matrix[i][0]-matrix[i-1][0]==1 && matrix[i][0]-matrix[i-1][1]==1)
		{
			dp[i][0]=max(dp[i-1][0],dp[i-1][1])+1;
		}
		else if(matrix[i][0]-matrix[i-1][0]==1)
		{
			dp[i][0]=dp[i-1][0]+1;
		}
		else if(matrix[i][0]-matrix[i-1][1]==1)
		{
                 dp[i][0]=dp[i-1][1]+1;
		}
	}
   /* for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            printf("%d ",dp[i][j]);
        }
        cout<<endl;
    }
        for(int i=1;i<n;i++)
        {
        	for(int j=1;j<=m;j++)
        	{
                if(matrix[i][j]-matrix[i-1][j-1]==1 && matrix[i][j]-matrix[i-1][j]==1&& matrix[i][j]-matrix[i-1][j+1]==1&&matrix[i][j]-matrix[i][j-1]==1)
                	dp[i][j]=max(matrix[i-1][j-1],max(matrix[i-1][j+1],max(matrix[i-1][j],matrix[i][j-1])));
                else if(matrix[i][j]-matrix[i-1][j-1]==1)
        	}

        }*/

return 0;
}
