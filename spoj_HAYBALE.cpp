#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAXVAL 1000004
int bit_tree[MAXVAL];
long long int bit_tree_sum[MAXVAL];
int n;
long long int get_sum(int idx)
{
    long long int sum=0;
	while(idx>0)
	{
       sum=sum+bit_tree[idx];
       idx=idx-(idx&-idx);
	}
	return sum;
}
void update(int idx,int value)
{
	while(idx<=n)
	{
       bit_tree[idx]=bit_tree[idx]+value;
       idx += (idx & -idx);
	}
}
int main()
{
    freopen("test.txt","r",stdin);
	int q;
	scanf("%d %d",&n,&q);
	for(int i=0;i<MAXVAL;i++)
	{
        bit_tree[i]=0;
	}
	for(int i=0;i<q;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		update(a+1,1);
		update(b+2,-1);
	}
	int j=0;

	memset(bit_tree_sum,0,sizeof(bit_tree_sum));
	for(int i=0;i<=n;i++)
	{
		bit_tree_sum[j++]=get_sum(i);
	}
	/*for(int i=0;i<j;i++)
    {
        cout<<bit_tree_sum[i]<< " ";
    }
    cout<<endl;*/
	sort(bit_tree_sum,bit_tree_sum+j);
	if(j%2!=1)
	printf("%d\n",bit_tree_sum[(n/2)]);
	else
    {
        printf("%d\n",bit_tree_sum[(n/2)+1]);
    }
return 0;

}
