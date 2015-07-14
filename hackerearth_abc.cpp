#include <iostream>
#include<string>
#include<stdlib.h>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string str;
		cin>>str;
		long long int l=0;
		long long int c=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='a'||str[i]=='b'||str[i]=='c')
			{
				l=l+i;
			}
			c=c+l;
		}
		cout<<c<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
