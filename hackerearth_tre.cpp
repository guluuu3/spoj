#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <sstream>
#include <map>
#include <queue>
#include <fstream>
#include <list>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

//#define MAX 2000

//int k=0;
int main()
{
    //int t=MAX;
    //cin>>t;

      string ch;


    	  char target[10];
    	  char m[30];
    	while(getline(cin,ch))
        {
char str[60];
for(int i=0;i<ch.size();i++)
{
    str[i]=ch[i];

}
    int pos=0;
    int temp=0;
    for(int i=0;i<strlen(str);i++)
    {
    if(str[i]=='/' &&str[i+1]=='/')
    {
    	pos=i;
        break;
    }
    }
    //cout<<pos<<endl;
    for(int i=0;i<strlen(str);i++)
    {
    	if(i<=pos && pos>0)
    	{

    		if(str[i]=='-'&& str[i+1]=='>')
    		{
    			temp=i;
    			break;
    		}
    	}
    }
    //cout<<temp<<endl;
    if(temp>0)
    {
    strncpy(target, str, temp+1);
    target[temp+1] = '\0'; // IMPORTANT
//replace(target.begin(),target.end(),'-','.');
    target[temp]='.';
    //cout<<target<<endl;
    int z=temp+2;


    	for(int i=0;i<(strlen(str)-(temp+2));i++)
    m[i]=str[z++];
   //cout<<m<<endl;
    strcat(target,m);
    cout<<target<<endl;

    }
    else
    cout<<str<<endl;
    //k++;
}

    return 0;
}
