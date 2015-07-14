#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
	long long int n;
	scanf("%lld",&n);
	long long int arr[n+5];
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	int k;
	scanf("%d",&k);

	deque<int>Q(k);
	int i;
	for(i=0;i<k;i++)
	{
		while(!Q.empty()&& arr[i]>=arr[Q.back()])
		{
			Q.pop_back();
		}
		Q.push_back(i);
		//cout<<i<<" ";
	}
	//cout<<endl;
	/*while(!Q.empty())
	{
	     cout<<Q.front()<< " ";
	     Q.pop_back();
	}*/
	     for(;i<n;i++)
	     {

	     	//printf("%lld ",arr[Q.front()]);
            cout<<i<<endl;
	        while((!Q.empty()) && Q.front()<=i-k)//removing elements of last window//it means the gap is more and ut is not a part of current slinding window so beetr pop it and resize the window wowooo...//
	        {
	            //cout<<Q.front()<< " "<< i;
	        	Q.pop_front();
	        }
             //cout<<endl;
	        while((!Q.empty())&& arr[i]>=arr[Q.back()])
	        {
	        	Q.pop_back();
	        }
	        Q.push_back(i);
	        //cout<<i<<" ";

	     }
	     //printf("%lld ",arr[Q.front()]);
	return 0;
}
