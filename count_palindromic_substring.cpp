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
bool ispalindromic(string str)
{
	string rev=str;
	reverse(rev.begin(),rev.end());
	if(str==rev)
	return true;
	else return false;
}
int main()
{
	string str;
	cin>>str;
	generate(str);
	int c=0;
	for( vector<string>::const_iterator it = substring.begin(); it != substring.end(); ++it )
	//cout<<*it<<endl;
	if(ispalindromic(*it)==true)
	{
		c++;
	}
	cout<<c<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
