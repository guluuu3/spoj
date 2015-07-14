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
			for(int j=i;j<str.size();j++)
			{

				  l=l+1;
			}


		}
		cout<<l<<endl;

	}
    //cout << "Hello World!" << endl;
    return 0;
}
