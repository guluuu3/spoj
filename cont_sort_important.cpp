#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
void countsort(string str)
{
	char output[str.size()];
	int coun[255+1];
	memset(coun,0,sizeof(coun));
	for(int i=0;i<str.size();i++)
	{
		coun[str[i]]++;
	}
	for(int i=1;i<=255;i++)
	{
		coun[i]=coun[i-1]+coun[i];
	}
	for(int i=0;i<str.size();i++)
	{
		output[coun[str[i]]-1]=str[i];
		coun[str[i]]--;
	}
	for(int i=0;i<str.size();i++)
	{
		str[i]=output[i];
	}
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,ti;
		cin>>n>>ti;
		string str;
		for(long long int i=0;i<str.size();i++)
		{
			cin>>str[i];
		}
	countsort(str);
	long long int sum=0;
		for(long long int i=0;i<ti&&i<str.size();i++)
		{
			sum=sum+str[str.size()-i];
		}
		cout<<sum<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
