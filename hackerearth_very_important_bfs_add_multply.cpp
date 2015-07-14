#include <iostream>
#include<bits/stdc++.h>
#include<list>
#define MAX 1000000
using namespace std;
int visited[1000001];
int mul,add,divide,sub;
void bfs(int src,int dest)
{
	list<int>q;
	q.push_back(src);
	visited[src]=0;
	while(!q.empty())
	{
		int val=q.front();
		q.pop_front();
		if(visited[val]>=visited[dest])
		{
			return;
		}
		if(val*mul<=1e6 && visited[val*mul]==1e9)
		{
			visited[val*mul]=visited[val]+1;
			q.push_back(val*mul);
		}
		if(val/divide>=2 && visited[val/divide]==1e9)
		{
			visited[val/divide]=visited[val]+1;
			q.push_back(val/divide);
		}
		if(val+add <=1e6 && visited[val+add]==1e9 && add!=0)
		{
			visited[val+add]=visited[val]+1;
			q.push_back(val+add);
		}
		if(val-sub>=2 &&sub!=0&&visited[val-sub]==1e9)
		{
			visited[val-sub]=visited[val]+1;
			q.push_back(val-sub);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int src,dest;
		cin>>src>>dest;
		//memset(visited,MAX,sizeof (visited));
		for (int i=0; i<1000000; i++)
            visited[i]=1e9;

			cin>>mul>>divide>>add>>sub;

		if(src==dest)
		{
			cout<<0<<endl;
		}
		bfs(src,dest);
		if(visited[dest]!=1e9)
		{
			cout<<visited[dest]<<endl;
		}
		else
		cout<<-1<<endl;

	}


    //cout << "Hello World!" << endl;
    return 0;
}
