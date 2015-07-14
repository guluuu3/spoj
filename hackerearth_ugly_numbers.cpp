#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    int n,start,end;
	char str[110];
	//cout<<"enter the number of inputs";
    cin>>n;
    bool flag=1;

    while(n--)
    {
    	cin>>str;
    	for(int i=0;i<strlen(str);i++)
    	{
    	if(str[i]!='0' && str[i]!='1' && str[i]!='8')
    	{
    		flag=0;
    		break;
    	}

    	}
    	if(!flag)
    	cout<<"NO"<<endl;
    	else
    	{
    	flag=1;
        start=0;
    	end=strlen(str)-1;
    	while(start<end)
    	{
    		if(str[start]!=str[end])
    		{
    			flag=0;
    			break;
    		}
    		start++;
    		end--;
    	}
    	if(flag)
    	cout<<"YES"<<endl;

    	else cout<<"NO"<<endl;


    	}
    }


}

