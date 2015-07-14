#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
	long long int n;
	while(scanf("%lld",&n))
	{
		if(n==0)
			break;
		long long int ht[n+1];
		for(long long int i=1;i<=n;i++)
		{
			scanf("%lld",&ht[i]);

		}
		long long int top=1;
		long long int st[n+1];
		long long int maxi=0;
		ht[0]=st[0]=ht[++n]=0;
		for(int i=1;i<=n;i++)
		{
			while(top>1 && ht[st[top-1]]>=ht[i])
			{
				maxi=max(maxi,ht[st[top-1]]*(i-st[top-2]-1));
				top--;
			}
			st[top++]=i;
		}
        printf("%lld\n",maxi);





	}
	return 0;
}
