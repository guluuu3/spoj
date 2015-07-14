#include <iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
long long int visited[10000001];
int main()
{

	int t;
	cin>>t;
	//long long int visited[10000001];
	//memset(visited,0,sizeof(visited));
	while(t--)
	{
		int c=0;
		set<int>myset;
		int x,y;
		cin>>x>>y;
		long long int rem;
		if(x==0)
		{
			for(int i=0;i<=25;i++)
			{
				 rem=y/(1<<i);
				myset.insert(rem);
			}

		set<int>::iterator i;
		for(i=myset.begin();i!=myset.end();i++)
		{
			visited[*i]++;
		}
		}
		if(x==1)
		{
			myset.clear();
			for(int i=0;i<=25;i++)
			{
			    rem=y/(1<<i);
				myset.insert(rem);
			}
		for(set<int>::iterator i=myset.begin();i!=myset.end();i++)
		{
			visited[*i]--;
		}
		}
		if(x==2)
		{
			cout<<visited[y]<<endl;
		}

	}

    //cout << "Hello World!" << endl;
    return 0;
}
