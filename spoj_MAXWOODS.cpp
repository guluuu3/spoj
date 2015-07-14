#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
int dp[2][210][210];
int matrix[210][210];
char str[210][210];
bool issafe(int i,int j)
{
	if(i<0 || i>=n || j<0 || j>=m )
		return false ;
	return true;
}
int solve(int i,int j,int dir)
{
	if(!issafe(i,j) || str[i][j]=='#')
		return 0 ;
	if(!dp[dir][i][j]==-1)
		return dp[dir][i][j];
	int maxi=INT_MIN;
	if(matrix[i][j])
	{
		if(dir==1)//direction is right
		{
			maxi=max(maxi,max(solve(i,j+1,1),solve(i+1,j,0))+matrix[i][j]-1);

		}
		if(dir==0)//direction is left
		{
			maxi=max(maxi,max(solve(i+1,j,1),solve(i,j-1,0))+matrix[i][j]-1);
		}
	}
	dp[dir][i][j]=maxi;
	return maxi;

}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{

		scanf("%d %d",&n,&m);

		for(int i=0;i<n;i++)
		{
			cin>>str[i];
		}
		/*for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<str[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;*/

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(str[i][j]=='T')
				{
					matrix[i][j]=2;
				}
				else if(str[i][j]=='0')
				{
					matrix[i][j]=1;
				}
				else
				{
					matrix[i][j]=0;
				}
			}
		}
		memset(dp,-1,sizeof(dp));
		int maxi=0;
		int x=solve(0,0,1);
		maxi=max(maxi,x);
		printf("%d\n",maxi);
	}
	return 0;
}
