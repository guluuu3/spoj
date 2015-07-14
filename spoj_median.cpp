#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
priority_queue<long> q1,q2;
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	int i,j,n,m,b,k,c;
	double median;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		median=-1;
		scanf("%d",&n);
		while(!q1.empty())
			q1.pop();
		while(!q2.empty())
			q2.pop();
		for(i=1;i<=n;i++)
		{
			scanf("%d",&b);
			if(b<=median || median==-1)
				q1.push(b);
			else
				q2.push(-b);
            if(q1.size()-q2.size()>1)
			{
				q2.push(-q1.top());
				q1.pop();
			}
			if(q2.size()>q1.size())
			{
				q1.push(-q2.top());
				q2.pop();
			}


			if(q1.size()!=q2.size())
			{
				median=q1.top();
				printf("%d\n",q1.top());

			}

			else
			{
				median=double(q1.top())/double(2)-double(q2.top())/double(2);
				if(median-(int)median==0)
					printf("%d\n",(int)median);
				else
				{
					printf("%d",(int)median);
					printf(".5\n");
				}
			}
		}
	}
	return 0;
}
