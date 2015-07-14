#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pr pair<int,int>
bool operator < (const pr &ac, const pr &bc) {
  if(ac.first < bc.first)
    return true;
  if(ac.first > bc.first)
    return false;
  return ac.second < bc.second;
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
		pair<int,int>p[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&p[i].first);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&p[i].second);
		}
		sort(p,p+n);
		/*for(int i=0;i<n;i++)
		{
			cout<<p[i].first<<" "<<p[i].second << "    ";
		}
		cout<<endl;*/
		int mis[n+1];
		mis[0]=1;

		for(int i=1;i<n;i++)
		{
		    mis[i]=1;
			for(int j=0;j<i;j++)
			{
				if(p[i].second >=p[j].second && mis[i]<mis[j]+1)
				{
					mis[i]=mis[j]+1;
				}
			}
		}
		int maxi=1;
		for(int i=1;i<n;i++)
		{
			if(maxi<mis[i])
			{
				maxi=mis[i];
			}
		}
		printf("%d\n",maxi);


	}
	return 0;

}
