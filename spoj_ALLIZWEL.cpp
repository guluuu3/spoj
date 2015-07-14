#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool dp[110][110];
char matrix[110][110];
int n,m;
bool issafe(int i,int j)
{
	if(i<0 ||i>=n || j<0 || j>=m)
		return false;
	return true;
}
int x_c[]={0, 0, 1, -1, 1, -1, 1, -1};
int y_c[]={1, -1, 0, 0, 1, -1, -1, 1};
char str[]="ALLIZZWELL";
bool  dfs(int x,int y,int k)
{
    //cout<<flag<<str[k]<<endl;
    //cout<<k<<endl;
     if(k==10)
     {

         return true;
     }

     dp[x][y]=true;
     for(int i=0;i<8;i++)
     {
     	int new_x=x+x_c[i];
        int new_y=y+y_c[i];
        if(issafe(new_x,new_y))
        {
        	if(matrix[new_x][new_y]==str[k]&& dp[new_x][new_y]==false)
        	{
        		//cout<<flag<<new_x<<new_y<<endl;
        		if(dfs(new_x,new_y,k+1))
        		{
        		    return true;

        		}

        	}
        }
     }
dp[x][y]=false;
return false;
}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{

		scanf("%d %d",&n,&m);

		int x,y;
		bool flag=false;
		for(int i=0;i<n;i++)
		{
			scanf("%s",matrix[i]);
		}
		for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {

                dp[i][j]=false;
            }
        }
		/*for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }*/
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(matrix[i][j]=='A')
				{

				    if(dfs(i,j,1))
					  flag=true;
				}
			}
		}
		//cout<<flag<<x<<y<<endl;
		/*if(flag==true)
        {
            printf("YES\n");
        }

		else if(flag=false)
		{
			printf("NO\n");
		}*/
		printf("%s\n", flag ? "YES" : "NO");
	}
	return 0;
}
