#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define MAX 111111
vector< int>adjlist[MAX];
set<int>next_node;
vector<int>order;
int indeg[MAX];
int ct;
void topological_sort()
{
    int u,v;
    ct=0;
    while(!next_node.empty())
    {
        u=*next_node.begin();
        next_node.erase(next_node.begin());
        order.push_back(u);
        ct++;
        for(int i=0;i!=adjlist[u].size();i++)
        {
            v=adjlist[u][i];
            indeg[v]--;
            if(!indeg[v])
                next_node.insert(v);
        }
    }
}
int main()
{
    //freopen("test.txt","r",stdin);
    int x,y;

    scanf("%d%d",&x,&y);
    for(int i=1;i<=y;i++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        adjlist[m].push_back(n);
        indeg[n]++;
    }
    for(int i=1;i<=x;i++)
    {
        if(!indeg[i])
        {
            next_node.insert(i);
        }
    }
    topological_sort();
    if(ct!=x)
        {
            printf("Sandro fails.");
            return  0;
        }

            printf("%d",order[0]);
	for(int i=1; i<x; i++)
        printf(" %d", order[i]);


	//printf("\n");
	return 0;

}
