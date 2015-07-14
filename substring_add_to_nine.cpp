#include <iostream>
#include<list>
#include<vector>
#include<string>
#include<stdlib.h>
#include<cstdio>
#include<algorithm>//for reverse
using namespace std;
vector<string>substring;
void  generate(string str)
{


	for(int i=0;i<str.size();i++)
	{
		for(int j=i+1;j<=str.size();j++)
		{
			substring.push_back(str.substr (i, j - i));
		}
	}
	return;
}
bool special(string str)
{
	int x=atoi(str.c_str());
	//cout<<x<<" ";
	long long int sum=0;
	while(x>0)
	{
		sum=sum+x%10;
		x=x/10;
	}
	if(sum%9==0)
	return true;
	else return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    substring.clear();
	string str;
	cin>>str;
	generate(str);
	long long int c=0;
	for( vector<string>::const_iterator it = substring.begin(); it != substring.end(); ++it )
    {
	//cout<<*it<<endl;
	if(special(*it)==true)
	{
		c++;
	}
	}
	cout<<c<<endl;
	}

    //cout << "Hello World!" << endl;
    return 0;
}
