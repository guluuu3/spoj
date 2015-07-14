#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#define pi pair<int,int>
#define pii pair<int,pi>
vector<pii>adjlist[11111];
#define MAX 11111
#define INT_MAXI 1061109567
int dp[11111][3];
int visited[11111][3];
int n,m,k,src,dest;
void dij()
{
    priority_queue<pi>q;
    q.push(pi(0,src));
    int frm,to,wt,dir;
    for(int i=0;i<MAX;i++)
    {

        dp[i][0]=INT_MAXI;
        dp[i][1]=INT_MAXI;
        visited[i][0]=0;
        visited[i][1]=0;
    }
    dp[src][0]=0;
    dp[src][1]=0;
    visited[src][0]=1;
    visited[src][1]=1;
    while(!q.empty())
    {
        frm=q.top().second;
        q.pop();
        for(int i=0;i!=adjlist[frm].size();i++)
        {
            to=adjlist[frm][i].first;
            wt=adjlist[frm][i].second.first;
            dir=adjlist[frm][i].second.second;
            if(dir==1)
            {
                if(dp[to][0]>dp[frm][0]+wt&& visited[to][0]==0&&dp[frm][0]!=INT_MAXI)
                {
                    dp[to][0]=dp[frm][0]+wt;
                    q.push(pi(-dp[to][0],to));
                }
                if(dp[to][1]>dp[frm][1]+wt&& visited[to][1]==0&&dp[frm][1]!=INT_MAXI)
                {
                    dp[to][1]=dp[frm][1]+wt;
                    q.push(pi(-dp[to][1],to));
                }
            }
            else
            {
                if(dp[to][1]>dp[frm][0]+wt&& visited[to][1]==0&&dp[frm][0]!=INT_MAXI)
                {
                    dp[to][1]=dp[frm][0]+wt;
                    q.push(pi(-dp[to][1],to));
                }
            }

        }
        visited[frm][0]=1;
        visited[frm][1]=1;
    }
    if(min(dp[dest][0],dp[dest][1])==INT_MAXI)
   {
      puts("-1");
      return ;
   }
   printf("%d\n",min(dp[dest][0],dp[dest][1]));

}
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d",&n,&m,&k,&src,&dest);
        for(int i=0;i<MAX;i++)
        {
            adjlist[i].clear();
        }
        for(int i=0;i<m;i++)
        {
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            adjlist[x].push_back(pii(y,pi(z,1)));
        }
        for(int i=0;i<k;i++)
        {
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            adjlist[x].push_back(pii(y,pi(z,2)));
            adjlist[y].push_back(pii(x,pi(z,2)));
        }
        dij();
    }
    return 0;
}
