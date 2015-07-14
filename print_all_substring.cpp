#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;
//int sum=0;


 void print_char(char *ptr, int num,int sum) {
        int i;
        char str[10000];
        for (i = 0; i < num; i++)
        {
                 str[i]=*(ptr + i);
        }
        for (i = 0; i < num; i++)
        {
                 cout<<str[i];
        }
        int low=0;
        int high=num-1;
        bool flag=true;
        while(low<=high)
        {
            if(str[low++]!=str[high--])
            {
                flag=false;
                break;
            }

        }
        if(flag==true)
            {
             sum=sum+(num*num);
            }


        return;
  }

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	char str[1000];
	cin>>str;
	int i=0;
	int sum=0;
    str[strlen(str)] = '\0';
	while(str[i]!='\0')
	{
		for(int j=1;j<=strlen(str) - i;j++)
		{

			int num=j;
			char *ptr=(str+i);
        char str[10000];
        for ( int k = 0; k < num; k++)
        {
                 str[k]=*(ptr + k);
        }
        for (int k = 0; k < num; k++)
        {
                 cout<<str[k];
        }
        int low=0;
        int high=num-1;
        bool flag=true;
        while(low<=high)
        {
            if(str[low++]!=str[high--])
            {
                flag=false;
                break;
            }

        }
        if(flag==true)
            {
             sum=sum+(num*num);
            }

		}
		i++;

	}
       cout<<sum<<endl;
	}
	// your code goes here
	return 0;
}
