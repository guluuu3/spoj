#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
#define vii vector<pi>
#define MP 	make_pair
int matrix[105][105];
int m,n;
int x_new[]={0,0,1,-1};
int y_new[]={1,-1,0,0};
int  visited[105][105];
int value[105][105];
bool issafe(int x,int y)
{
	if(x<1 || x>m || y<1 || y>n)
		return false;
	return true;
}
typedef bool (*comp)(pi,pi);

bool compare(pi a,pi b)
{
	return value[a.first][a.second]>value[b.first][b.second];
}
void bfs(int a,int b,int c,int d,int time)
{
	priority_queue<pi,vii,comp>Q(compare);
	value[1][1]=matrix[1][1];
	Q.push(pi(1,1));
	visited[1][1]=1;

	while(!Q.empty())
	{

		int x=Q.top().first;
		int y=Q.top().second;
		Q.pop();

         if(x==c && y==d)
            return;
		for(int i=0;i<4;i++)
		{
			int xnew=x+x_new[i];
			int ynew=y+y_new[i];
			//int cost_new=cost+matrix[xnew][ynew];
			if(issafe(xnew,ynew) && visited[xnew][ynew]==0 && value[xnew][ynew]>matrix[xnew][ynew]+value[x][y])
			{
				 value[xnew][ynew]=matrix[xnew][ynew]+value[x][y];
				 Q.push(pi(xnew,ynew));
				 visited[xnew][ynew]=1;
			}

		}
	}
	//cout<<visited[c][d]<<endl;


	return ;

}
int main()
{
	freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{

		scanf("%d %d",&m,&n);
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d",&matrix[i][j]);
				value[i][j]=INT_MAX;
				visited[i][j]=0;
			}
		}
		/*for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%d ",matrix[i][j]);
			}
			cout<<endl;
		}
		cout<<endl;*/
		int c,d,time;
		scanf("%d %d %d",&c,&d,&time);
		//cout<<c<<d;
		bfs(1,1,c,d,time);

		 //cout<<value[c][d]<" ";
		if(value[c][d]<=time)
        {
        printf("YES\n");
        printf("%d\n", time-value[c][d]);
        }
        else
        {
        printf("NO\n");
        }
	}
	return 0;
}
