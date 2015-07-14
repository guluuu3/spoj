//http://www.quora.com/How-do-I-solve-the-JAPAN-problem-using-Binary-Indexed-Tree
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 1100
int bit_tree[MAX];
pair<int,int> p[1000010];
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
	while(idx<=MAX)
	{
       bit_tree[idx]=bit_tree[idx]+value;
       idx += (idx & -idx);
	}
}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	int c=1;
	while(t--)
	{
	    printf("Test case %d: ",c);
	    c++;
	    memset(bit_tree,0,sizeof(bit_tree));
		int n,m,k;
		scanf("%d %d %d",&n,&m,&k);
		for(int i=0;i<k;i++)
		{
            int x,y;
            scanf("%d %d",&x,&y);
            p[i].first=x;
            p[i].second=y;
		}
		sort(p,p+k);
		/*for(int i=0;i<k;i++)
		{
			cout<<p[i].second<< " ";
		}*/
		//cout<<endl;
		long long int sum=0;
		for(int i=0;i<k;i++)
		{
			update(p[i].second,1);//update all the nodes
			sum=sum+(get_sum(MAX)-get_sum(p[i].second));//find the sum of those nodes that are greater thhan th current second value.
			//cout<<sum;


		}
		/*for(int i=0;i<k;i++)
        {
            //cout<<bit_tree[p[i].second]<< " ";
            cout<<get_sum(p[i].second);
        }*/

		printf("%d\n",sum);

	}
	return 0;
}
