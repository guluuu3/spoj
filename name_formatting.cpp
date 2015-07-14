#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	cout<<"enter the number of names :";
	cin>>t;


	    char str[200];
		cout<<"enter the name :";
		for(int i=0;i<;i++)
        {
            cin>>str[i];
        }

		int k=1;
		for(int i=0;i<strlen(str);i++)
        {
            cout<<str[i];
        }
		//char arr[200];//or u can dynamically allocate the char array
		//arr[0]=str[0];//to store the first letter;
		//cout<<str[0]<<".";
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]==' ')
			{
				//arr[k++]=i;
				//to store the the elements where space were found
				//cout<<str[i+1]<<".";
				cout<<i;
			}
		}

        cout<<endl;


    //cout << "Hello World!" << endl;
    return 0;
}
