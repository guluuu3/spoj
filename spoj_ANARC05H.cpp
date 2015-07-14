#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int dp[32][256];
char str[32];
int len,ct;
 int recur(int pos,int prev_sum)
{
    if(pos==len)
        return 1;
     int &res=dp[pos][prev_sum];
    if(res!=-1)
        return res;
    res=0;
    int sum=0;
    for(int i=pos;i<len;i++)
    {
        sum=sum+str[i]-'0';
        if(sum>=prev_sum)
        {
            res=res+recur(i+1,sum);
        }
    }
    return res;
}
int main()
{
    //freopen("text.txt","r",stdin);
	ct = 1;
	while(scanf("%s", str)==1 && isdigit(str[0])) {
		memset(dp, -1, sizeof dp);
		len = strlen(str);
		printf("%d. %d\n", ct++, recur(0, 0));
	}
	return 0;
}
