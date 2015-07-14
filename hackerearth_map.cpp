#include<iostream>
#include<map>
#include<algorithm>
#include<array>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int c=0;
	while(t--)
	{
	array<long long ,3>ary;
	map<array<long long, 3>, long> visited;
	cin>>ary[0]>>ary[1]>>ary[2];
	sort(visited.begin(),visited.end());
	visited[ary]++;

	for(int i=visited.begin();i<visited.end();i++)
	{
		if(i->second==1)
		   c++;
	}


	}

	cout<<c<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
