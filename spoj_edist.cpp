#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[2002][2002];
void  edit_distance(char *a, char *b)
{
	int m=strlen(a);
	int n=strlen(b);
    //int dp[m][n];
	int left_cell,right_cell,corner_cell;

	for(int i=0;i<=m;i++)
	{
		dp[i][0]=i;
	}
	for(int j=0;j<=n;j++)
	{
		dp[0][j]=j;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			left_cell=dp[i][j-1];//deletion
			left_cell=left_cell+1;
			right_cell=dp[i-1][j];//insertion
			right_cell=right_cell+1;
			corner_cell=dp[i-1][j-1];
			corner_cell=corner_cell+(a[i-1]!=b[j-1]);
			dp[i][j]=min(left_cell,min(right_cell,corner_cell));
		}
	}

}

int main()
{
int t;
cin>>t;
while(t--)
{
	char a[2002];
	char b[2002];
	cin>>a;
	cin>>b;
	int m=strlen(a);
	int n=strlen(b);
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			dp[i][j]=0;
		}
	}
    edit_distance(a,b);
	cout<<dp[m][n]<<endl;

}
	// your code here

	return 0;
}
