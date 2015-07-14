#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;
string str[10] = {"_0", ".,?!1", "abc2", "def3", "ghi4", "jkl5", "mno6", "pqrs7", "tuv8", "wxyz9"};
bool issafe(char c)
{
	if(c>='a' &&  c<='z')
	return true;
	if(c>='0' && c<='9')
	return true;
	if (c=='.' || c==',' || c=='?' || c=='!' || c=='_')
	return true;
	else
	return false;
}
int get_press_count(char c,int pos)
{
	for(int i=0;i<str[pos].size();i++)
	{
		if(str[pos][i]=='c')
		{
			return i+1;
		}
	}
}
int get_box(char c)
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<str[i].size();j++)
		{
			if(str[i][j]=='c')
			return i;
		}
	}
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	string test;
    	cin>>test;
    	int pos=1;
    	int res=0;
    	for(int i=0;i<test.size();i++)
    	{
    		if(issafe(test[i])==true)
    		{
    			int position=get_box(test[i]);
    			if(position!=pos)
    			{
    				res++;
    			}
    			pos=position;
    		    res=res+get_press_count(test[i],pos);

    		}
    	}
    	cout<<res<<endl;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
