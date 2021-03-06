#include <iostream>
#include<stdlib.h>
#include<string>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

long long int edit_distance(char x[],char y[])
{
	int m=strlen(x)+1;
	int n=strlen(y)+1;
	int top_cell,corner_cell;
	long long int dp[m][n];
	//int cost=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			dp[i][j]=-1;
		}
	}
	for(int i=0;i<m;i++)
	{
         dp[i][0]=i;
	}
	for(int j=0;j<n;j++)
	{
		dp[0][j]=j;
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			top_cell=dp[i][j-1];
			//top_cell=top_cell+0;//no cost for addition;
			corner_cell=dp[i-1][j-1];//replacement
			corner_cell=corner_cell+(x[i-1]!=y[j-1]);
			dp[i][j]=min(top_cell,corner_cell);
		}
	}
	return dp[m-1][n-1];
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y
		cin>>x;
		cin>>y;
		int ct=0;
		int maxi=INT_MAX;
		if(x.size()==y.size())
		{
			for(int i=0;i<x.size();i++)
			{
				if(x[i]!=y[i])
				ct++;
			}
			maxi=ct;
		}
		else
		{
			if(x.size()>y.size())
			{
				string temp=x;
				x=y;
				y=temp;

			}
			for(int i=0;i<y.size()-x.size();i++)
			{
				for(int j=0;j<x.size();j++)
				{
					if(x[i]!=y[j+i])//similar to pattern mating naive approach
					ct++;
				}
				if(count<maxi)
				maxi=count;
			}
		}
		cout<<maxi<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
