#include <iostream>
#include<list>
#include<stdlib.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		list<int>f;
		list<int>::iterator it;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			f.push_back(x);
		}
		for( it=f.begin();it!=f.end();it++)
		{
			if(d==0)
			  break;
			int temp=*(f.begin());
			int res=*it;
			it++;
			int res1=*it;
			if(res>res1)
			continue;
			else
			{
				--it;
				f.erase(it);
				int temp1=*it;
				if(temp!=temp1)
				  --it;
				  else
				  it=f.begin();
				  d--;

			}
		}
			if(d!=0)
			{
				for(int i=0;i<d;i++)
				{
					f.pop_back();
				}
			}
		    for(it=f.begin();it!=f.end();it++)
		    {
		    	cout<<*it<<" ";
		    }
			cout<<endl;



	}
    //cout << "Hello World!" << endl;
    return 0;
}
