#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int r,c,n;
bool visited[100][100];
int p_x[]={-1,1,-1,1};
int p_y[]={-1,1,1,-1};
bool issafe(int i,int j)
{
	if(i<0 ||i>=r || j<0 || j>=c)
		return false;
	return true;
}
int find(int a,int b)
{
     int x_c;
     int y_c;
     int max_value=0;
     	for(int i=0;i<4;i++)
     	{
     		x_c=p_x[i]+a;
     		y_c=p_y[i]+b;
     		int ct_x=0;
            int ct_y=0;
     		if(issafe(x_c,y_c))
     		{
     			if(visited[x_c][y_c]==false)
     			{

                      while(visited[x_c][y_c]==false && issafe(x_c,y_c))
                      {
                      	  x_c=p_x[i]+x_c;
                      	  ct_x++;
                      }
                      while(visited[x_c][y_c]==false && issafe(x_c,y_c))
                      {
                      	  y_c=p_y[i]+y_c;
                      	  ct_y++;
                      }
     			}
     		}
     		max_value=max(max_value,(ct_x*ct_y));
     	}

  return max_value;
}
int main()
{
	freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d %d",&r,&c,&n);

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			visited[i][j]=false;
		}
	}
    int res=0;
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		for(int i=0;i<c;i++)
		{
              visited[a][i]=true;
		}
		for(int i=0;i<r;i++)
		{
			visited[i][b]=true;
		}
		int res=max(res,find(a,b));
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<visited[i][j]<< " ";
		}
		cout<<endl;
	}
	cout<<res<<endl;
	}
return 0;
}
