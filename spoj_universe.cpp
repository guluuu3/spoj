#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int visited[100000];
		memset(visited,0,sizeof visited);
		for(int i=1;i<=n;i++)
		{
		    int x;
		    cin>>x;

			visited[x]++;
		}
		for(int i=1;i<=100000;i++)
		{
			if(visited[i]==1)
			{
			      cout<<i<<endl;
			}
		}
	}
    //cout << "Hello World!" << endl;
    return 0;
}
