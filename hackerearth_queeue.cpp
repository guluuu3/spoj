#include <iostream>
#include<list>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	list<int>adjlist[100];
	int visited[a];
	for(int i=0;i<=a;i++)
	{
		visited[i]=-1;
	}
	for(int i=0;i<b;i++)
	{
		int x,y;
		cin>>x>>y;
		adjlist[x].push_back(y);
		adjlist[y].push_back(x);
	}

	for(int i=1;i<=a;i++)
	{
		list<int>q;
		if(visited[i]==-1)
		{

			q.push_back(i);
			visited[i]=0;
			list<int>::iterator k;
			while(!q.empty())
			{
				int value=q.front();
				q.pop_front();
				for(k=adjlist[value].begin();k!=adjlist[value].end();k++)
				{
					if(visited[*k]==-1)
					{
						visited[*k]=visited[value]+1;
						q.push_back(*k);
					}
				}

			}
		}
	}
	int c=0;
	for(int i=1;i<=a;i++)
	{
		if(visited[i]==0)
		{
			c++;
			//cout<<i<<endl;
		}
	}
	cout<<c<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
