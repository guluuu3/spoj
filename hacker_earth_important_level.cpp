#include <bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<cstdio>
#include<stdlib.h>
#define MAX 20
using namespace std;


void  reset()
{

	return;
}
int main()
{
set<int>layer[MAX];
list<int>adjlist[MAX];
bool visited[MAX];
int level[MAX];
int res[MAX];

memset(visited,false,sizeof(visited));
memset(level,-1,sizeof(level));
memset(res,0,sizeof(res));



	int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
	      int x,y;
	      cin>>x>>y;
	      adjlist[x].push_back(y);
	      adjlist[y].push_back(x);
	}
	int start;
	cin>>start;
	list<int>q;
	q.push_back(start);
	int total_layer=0;
    layer[0].insert(start);
    level[start] = 0;
	while(!q.empty())
	{
	    list<int>::iterator i;
		int s = q.front();
        q.pop_front();
        visited[s]=true;
        for(i=adjlist[s].begin();i!=adjlist[s].end();i++)
        {
        	if(visited[*i]==false)
        	{
        		if(level[*i]==-1)
        		{
        			level[*i]=level[s]+1;
        			layer[level[*i]].insert(*i);
        			total_layer=max(total_layer,level[*i]);
        			visited[*i]=true;
        			q.push_back(*i);
        		}
        	}
        }
	}

	for(set<int>::iterator itt=layer[total_layer].begin();itt!=layer[total_layer].end();itt++)
	{
		res[*itt]=1;
	}
	for(int j=total_layer-1;j>=0;j--)
	{
		set<int>::iterator it;
		for(it=layer[j].begin();it!=layer[j].end();it++)
		{
			list<int>::iterator iit;
			for(iit=adjlist[*it].begin();iit!=adjlist[*it].end();iit++)
			{
				if(level[*it]<level[*iit])
				{
					res[*it]=res[*iit]+res[*it];
				}
			}
		}
	}
	for(int j=1;j<n;j++)
	{
        cout<<res[j]<<" ";
    }
	cout<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
