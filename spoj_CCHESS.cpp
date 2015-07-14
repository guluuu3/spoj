#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
#define piii pair <int,pi>
#define MP make_pair
int x_new[] = {1,2,1,2,-1,-2,-1,-2};
int y_new[] = {2,1,-2,-1,2,1,-2,-1};
int n,m;

int visited[10][10];

bool issafe(int x,int y)
{
	if(x<0 || x>=8 || y<0 || y>=8)
		return false;
	return true;
}
void bfs(int a,int b,int c,int d)
{
	priority_queue<piii>Q;
	Q.push(MP(0,MP(a,b)));

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			visited[i][j]=-1;

		}
	}
	while(!Q.empty())
	{
		int cost=-Q.top().first;
		int x=Q.top().second.first;
		int y=Q.top().second.second;
		Q.pop();

		if(visited[x][y]>0)
            continue;
		visited[x][y]=cost;
		//cout<<x<<" "<<y<<" "<<endl;


		for(int i=0;i<8;i++)
		{
			int xnew=x+x_new[i];
			int ynew=y+y_new[i];
			int costnew = cost + x*xnew + y*ynew;

			if(issafe(xnew,ynew)&&(visited[xnew][ynew]==-1))// && cost[x][y] + costnew < cost[xnew][ynew]))
			{

				    Q.push(MP(-costnew,MP(xnew,ynew)));
					//cost[xnew][ynew]=cost[x][y]+costnew;


			}
		}

	}

	printf( "%d\n", visited[ c ][ d ] );

}
int main()
{
	freopen("test.txt","r",stdin);
	int a,b,c,d;
	while(scanf("%d",&a)!=EOF)
	{
		scanf( "%d%d%d", &b, &c, &d );
		bfs( a, b, c, d );

	}
	return 0;
}
