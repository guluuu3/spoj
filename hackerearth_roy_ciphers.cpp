#include<iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;

		int cur=0;

		for (int i=0;i<str.size();i++)
		{
		    int c=0;
		    int a=0;
		    int j=cur;
			int p=str[i]-'a';
			while(1)
			{
			if(j==p)
			break;
			c=c+1;
			j=(j+1)%26;
			}
			j=cur;
			while(1)
			{
				if(j==p)
				break;
				a=a+1;
				j=(j-1+26)%26;

			}
			if(c<a)
			cout<<c<<" ";
			else
			cout<<-a<<" ";

			cur=p;

		}
		cout<<endl;
	}
return 0;
}
