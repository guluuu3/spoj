#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int n,m,money;
//long long int matrix_length[105][105];
//long long int matrix_cost[105][105];
/*typedef pair<int /*longitud, int > weight;*/
/*vector<pair<int, weight> > graph[100];
int length_ans;
int cost_ans;
bool visited[105];*/
/*void dfs(int node,int cost,int length)
{
	if(cost>money)
		return;
	if(length>length_ans)
		return;
		if(node==n-1)
        {
            if(length<length_ans)
            {
                length_ans=length;
                cost_ans=cost;
            }
            else if(length==length_ans)
            {
                if(cost<cost_ans)
                {
                    cost_ans=cost;
                    length_ans=length;
                }
            }
        }

    //vector<int>::iterator i;
	for(int i=0;i<graph[node].size();i++)
	{
	            int to = graph[node][i].first;
			    int l = graph[node][i].second.first;
			    int toll = graph[node][i].second.second;

			if(visited[to]==false)// && matrix_cost[node][i]!=-1 &&matrix_length[node][i]!=-1)
			{
				visited[to]=true;

				dfs(to,cost+toll,length+l);
				visited[to]=false;
			}

	}
	return ;
}*/
	struct node{
    int pos,len,cost;

    node(){}

    node(int _pos, int _len, int _cost){
        pos = _pos; len = _len; cost = _cost;
    }

    bool operator < (node X)const{
        if(len != X.len) return len > X.len;
        return cost > X.cost;
    }
}aux;

bool visited[105][1004];
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
    int money,n,m;
    scanf("%d %d %d",&money,&n,&m);
    vector<int>adjlist[100],adjlist_cost[100],adjlist_length[100];
    for(int i=0;i<n;i++)
    {
    	adjlist[i].clear();
    	adjlist_cost[i].clear();
    	adjlist_length[i].clear();
    }
     /*for(int i=1;i<=n;i++)
    }
    {
        for(int j=1;j<=n;j++)
        {
            matrix_cost[i][j]=-1;
        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           matrix_length[i][j]=-1;
        }

    }*/
    for(int i=0;i<m;i++)
    {
        int x,y,a,b;
        scanf("%d %d %d %d",&x,&y,&a,&b);
        adjlist[x-1].push_back(y-1);
        adjlist_length[x-1].push_back(a);
        adjlist_cost[x-1].push_back(b);
    }
    priority_queue<node>Q;
    //priority_queue<node,vector<node>, compare >Q;
    memset(visited,false,sizeof(visited));
    Q.push(node(0,0,0));
    int ans=-1;
    while(!Q.empty())
    {
    	aux=Q.top();
    	Q.pop();
    	if(visited[aux.pos][aux.cost]==true)
    		continue;
    	visited[aux.pos][aux.cost]=true;
    	if(aux.pos==n-1)
    	{
    		ans=aux.len;
    		break;
    	}
    	for(int i=adjlist[aux.pos].size()-1;i>=0;i--)
    	{
    		int new_pos=adjlist[aux.pos][i];
    		int new_len=adjlist_length[aux.pos][i]+aux.len;
    		int new_cost=adjlist_cost[aux.pos][i]+aux.cost;
    		if(new_cost<=money)
    		{
    			Q.push(node(new_pos,-new_len,-new_cost));
    		}
    	}
    }

    //cout<<money<< " "<<n<< " "<<m<<endl;




       /* length_ans=INT_MAX;
        for(int i=0;i<=n;i++)
        {
        	visited[i]=false;
        }
        visited[0]=true;
        length_ans=INT_MAX;
        cost_ans=INT_MAX;
		dfs(0,0,0);
		if(length_ans!=INT_MAX)
		printf("%d\n",length_ans);
		else
        {
            printf("-1\n");
        }*/
            printf("%d\n",ans);
	}
	return 0;
}
