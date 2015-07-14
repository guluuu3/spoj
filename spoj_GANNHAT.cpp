#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define INF 100000
int main()
{
    freopen("test.txt","r",stdin);
	long long int t;
	scanf("%lld",&t);
    pair<long long int ,long long int>p[t+5];
    for(long long int i=0;i<t;i++)
    {
    	long long int x,y;
    	scanf("%lld %lld",&x,&y);
    	p[i].first=x;
    	p[i].second=y;
    }
    for(long long int i=0;i<t;i++)
    {
    	long long int mini=LONG_LONG_MAX;
    	for(long long int j=0;j<t;j++)
    	{
    		if(i!=j)
    		{
    			if((abs(p[i].first-p[j].first)+abs(p[i].second-p[j].second))<mini)
    				mini=(abs(p[i].first-p[j].first)+abs(p[i].second-p[j].second));
    		}
    	}
    	printf("%lld\n",mini);
    }
    return 0;
}
