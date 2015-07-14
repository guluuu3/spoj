#include <iostream>
#include <stdio.h>

#define maxVal 10005

using namespace std;

int tree[maxVal]={0};

void update(int idx,int val)
{
	while(idx<=maxVal)
	{
		tree[idx]+=val;
		idx+=(idx&-idx);
	}
}

long long int get_sum(int idx)
{
	long long int sum=0;
	//cout<<"idx="<<idx<<endl;
	while(idx>0)
	{
		//cout<<"idx="<<idx<<endl;
		sum+=tree[idx];
		//cout<<"sum="<<sum<<endl;
		idx-=(idx&-idx);
	}
	return sum;
}

void update(int l,int r,int v)
{
	update(l+1,v);
	update(r+2,-v);
}



int main()
{
    freopen("test.txt","r",stdin);
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		for(int i=0;i<maxVal;i++)
		{
			tree[i]=0;
		}
		int n,u;
		scanf("%d %d",&n,&u);
		while(u--)
		{
			int l,r,v;
			scanf("%d %d %d",&l,&r,&v);
			update(l,r,v);
		}

		int q;
		scanf("%d",&q);
		while(q--)
		{
			int index;
			scanf("%d",&index);
			long long int ans=get_sum(index+1);
			printf("%lld\n",ans );
		}
	}
}
