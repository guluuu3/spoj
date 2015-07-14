#include <iostream>
#include<stack>
#include<list>
using namespace std;
list<int>adjlist[100000];
stack<int>Stack[10000];
void dfs(int u,int k,int y)
{
	Stack[k].push(u);
	list<int>::iterator i;
	for(i=adjlist[u].begin();i!=adjlist[u].end();i++)
	{
		if((*i)==y)
        {
         adjlist[*i].erase(adjlist[*i].begin(),adjlist[*i].end());
         break;
        }

		else
		 dfs((*i),k,y);

	}
	return ;

}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		adjlist[i].clear();
		while(!Stack[i].empty())
		{
			Stack[i].pop();
		}
	}


	for(int i=1;i<n;i++)
	{
	   int x;
	   cin>>x;
	   adjlist[x].push_back(i);
	}
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int y;
		cin>>y;
		dfs(0,i,y);

	}
	for(int i=0;i<test;i++)
	{
		cout<<Stack[i].top()<< " ";
	}

    //cout << "Hello World!" << endl;
    return 0;
}
