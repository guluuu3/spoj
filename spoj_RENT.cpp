#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
	int start;
	int end;
	int cost;

};
node arr[10000];
bool operator<(const node &x ,const node &y)
{
	if(x.start !=y.start)
		return x.start < y.start;
	else return x.end <y.end;
}
int find(int low,int high,int element)
{
	while(high-low>1)
	{
		int mid=(low+high)/2;
		if(arr[mid].start>element)//if lower element has greater start than uooer end elemernt move more upwards till we find overlapping intervals
		{
			high=mid;
		}
		else low=mid;//else move downward since we will have a more larger elements downwards this may gove the same set of solutions also
	}
	if(arr[low].start>element)
		return low;
	else
		return high;
}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			int x,y,z;
			scanf("%d %d %d",&x,&y,&z);
			arr[i].start=x;
			arr[i].end=y;
			arr[i].cost=z;
			arr[i].end=arr[i].start +arr[i].end;
		}
		sort(arr+1,arr+n+1);
		int dp[10005];
		for(int i=0;i<=n;i++)
		{
			dp[i]=0;
		}
		dp[n]=arr[n].cost;
		for(int i=n-1;i>=1;i--)
		{
			if(arr[n].start > arr[i].end)
			{
				int res=find(i,n,arr[i].end);
				//cout<<res<< " ";
				dp[i]=max(dp[i+1],arr[i].cost +dp[res]);
			}
			else
			{
				dp[i]=max(dp[i+1],arr[i].cost);
			}

		}
		printf("%d\n",dp[1]);
	}
	return 0;
}
