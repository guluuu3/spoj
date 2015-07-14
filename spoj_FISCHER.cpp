#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,t;
int matrix_time[200][200];
int matrix_money[200][200];
bool visited[200];
int money_ans;
int tym_ans;

void dfs(int node,int tym,int money)
{
	if(tym>t)
		return ;
	if(money>money_ans)
		return;
	if(node==n-1)
	{
		if(money<money_ans)
		{
			money_ans=money;
			tym_ans=tym;
		}
	    else if(money==money_ans)
	    {
	    	if(tym<tym_ans)
	    	{
	    		tym_ans=tym;
	    		money_ans=money;
	    	}
	    }
	    return ;
	}
	for(int i=0;i<n;i++)
	{
		if(i!=node)
		{
			if(visited[i]==false)
			{
				visited[i]=true;//wow//dont move back to the same node while in a path//
				dfs(i,tym+matrix_time[node][i],money+matrix_money[node][i]);
				visited[i]=false;//wow u have to get back if possible in a different configuration//unlike normsl dfs we can have cycles//
			}
		}
	}
	return ;
}
int main()
{
    freopen("test.txt","r",stdin);
   while(scanf("%d %d",&n,&t))
   {
   	if(n==0 || t==0)
   		break;
   	for(int i=0;i<n;i++)
   	{
   		for(int j=0;j<n;j++)
   		{
   			scanf("%d",&matrix_time[i][j]);
   		}
   	}
   	for(int i=0;i<n;i++)
   	{
   		for(int j=0;j<n;j++)
   		{
   			scanf("%d",&matrix_money[i][j]);
   		}
   	}
   	money_ans=INT_MAX;
    tym_ans=INT_MAX;
   	for(int i=0;i<n;i++)
   	{
   		visited[i]=false;
   	}
   	visited[0]=true;
   	dfs(0,0,0);
   	printf("%d %d\n",money_ans,tym_ans);
   }
return 0;
}
