#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    priority_queue<long long int >q1,q2;

		int n;
		scanf("%d",&n);
		double median=-1;
		int a;
		for(int i=1;i<=n;i++)
		{

			scanf("%d",&a);
			//cout<<a<<endl;

			if(a<=median|| median==-1)
			{
				q1.push(a);
			}
			else if(a>median)
			{
				q2.push(-a);
			}
			if(q1.size()- q2.size()>1)
			{
				q2.push(-q1.top());
				q1.pop();
			}
			else if(q2.size()- q1.size()>1)
			{
				q1.push(-q2.top());
				q2.pop();
			}



			if(q1.size()-q2.size()==1)
            {

				median=q1.top();
				printf("%d\n",q1.top());

            }
            else if(q2.size()-q1.size()==1)
            {

				median=q2.top();
				printf("%d\n",q2.top());

            }
			else if(q1.size()==q2.size())
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

	// your code here

	return 0;
}
