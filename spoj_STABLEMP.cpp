#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int n;
long long int male_matrix[510][510];
long long int women_matrix[510][510];
bool priority(int m1,int m,int w)
{
	for(int i=1;i<=n;i++)
	{
		if(women_matrix[w][i]==m1)
			return true;
		if(women_matrix[w][i]==m)
			return false;
	}
}
void solve()
{
	bool mset[n+1];
	long long int wset[n+1];
	memset(mset,false,sizeof(mset));
	memset(wset,-1,sizeof(wset));
	int ct=n;
	while(ct>0)
	{
		int m;
		for( m=1;m<=n;m++)
		{
			if(mset[m]==false)
				break;
		}
		for(int i=1;i<=n && mset[m]==false;i++)
		{
			int w=male_matrix[m][i];
			if(wset[w]==-1)
			{
				wset[w]=m;
				mset[m]=true;
				ct--;
			}
			else
			{
				int m1=wset[w];
				if(priority(m1,m,w)==false)
				{
					wset[w]=m;
					mset[m]=true;
					mset[m1]=false;
				}
			}

		}
	}

    for (int i = 1; i <= n; i++)
       printf("%d %d\n",i,wset[i]);
       return ;
}

int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{

		scanf("%lld",&n);

		for(int i=1;i<=n;i++)
		{
		    int x;
            scanf("%d",&x);
			for(int j=1;j<=n;j++)
			{
				scanf("%lld",&male_matrix[i][j]);
			}
		}
		for(int i=1;i<=n;i++)
		{
		    int x;
            scanf("%d",&x);
			for(int j=1;j<=n;j++)
			{
				scanf("%lld",&women_matrix[i][j]);
			}
		}
		/*for(int i=1;i<=n;i++)
		{

			for(int j=1;j<=n;j++)
			{

				printf("%lld ",male_matrix[i][j]);
			}
			cout<<endl;
		}

		cout<<endl;
		for(int i=1;i<=n;i++)
		{

			for(int j=1;j<=n;j++)
			{

				printf("%lld ",women_matrix[i][j]);
			}
			cout<<endl;
		}*/
		solve();

	}
	return 0;
}
