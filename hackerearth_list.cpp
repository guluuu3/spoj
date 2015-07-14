#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		string str2;
		cin>>str;
		int c=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]!='X')
			str2[c++]=str[i];
		}
		cout<<endl;
		list<int>l;
		for(int i=0;i<str.size()-c;i++)
		{
			int x;
			cin>>x;
			l.push_back(x);
		}
		list<int>::iterator i;
		for(i=l.begin();i!=l.end();i++)
		{
			cout<<*i<<" ";
		}
		cout<<endl;
	    int x=l.back();
	    l.pop_back();
	    int y=l.back();
	     l.pop_back();
	    int z=x+y;
	    l.push_back(z);
	    for(i=l.begin();i!=l.end();i++)
		{
			cout<<*i<<" ";
		}
	}
    //cout << "Hello World!" << endl;
    return 0;
}
