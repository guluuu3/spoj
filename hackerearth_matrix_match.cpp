#include <iostream>
#include<stdlib.h>
#include<cstdio>
#include<string.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	    int x;
		cin>>x;
	    char str[x][x];
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<x;j++)
			{
			cin>>str[i][j];
			}
		}
		int low=0;
		int high=x-1;
		bool flag=true;
		while(low<=high && flag==true)
		{
		if(strcmp(str[low++],str[high--]) && flag==true)
		{
		 flag==true;
		}
		else
		   {
		   	flag==false;
		   	break;
		   }
		}
		bool mark=true;
       	for(int i=0;i<x && mark==true;i++)
       	{
       		for(int j=0;j<x && mark==true;j++)
       		{
       			if(str[j][i]==str[x-1-j][i])
       			{
       				mark=true;
       			}
       			else
       			    {
       			    	mark=false;
       			    	//break;
       			    }
       		}
       	}
       	if(mark==true && flag==true)
       	{
       		cout<<"BOTH"<<endl;
       	}
       	else if(mark==false && flag==true)
       	{
       		cout<<"HORIZONTAL";
       	}
       	else if(mark==true && flag==false)
       	{
       		cout<<"VERTICAL"<<endl;
       	}
       	else
       	cout<<"NO"<<endl;
	}


    //cout << "Hello World!" << endl;
    return 0;
}
