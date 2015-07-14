#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<cstdio>
using namespace std;
#define MAX 2000

int k=0;
int main()
{
    //int t=MAX;
    //cin>>t;

       char str[MAX][62];


    	char target[62];
    	while(1)
        {
        scanf("%[^\n]",str[k]);
        char c=getchar();
        if(c==EOF)break;
    int pos=0;
    int temp=0;
    for(int i=0;i<strlen(str[k]);i++)
    {
    if(str[k][i]=='/' &&str[k][i+1]=='/')
    {
    	pos=i;
        break;
    }
    }
    //cout<<pos<<endl;
    for(int i=0;i<strlen(str[k]);i++)
    {
    	if(i<=pos )
    	{

    		if(str[k][i]=='-'&& str[k][i+1]=='>')
    		{
    			temp=i;
    			break;
    		}
    	}
    }
    //cout<<temp<<endl;
    if(temp>0)
    {
    strncpy(target, str[k], temp+1);
    target[temp+1] = '\0'; // IMPORTANT
//replace(target.begin(),target.end(),'-','.');
    target[temp]='.';
    //cout<<target<<endl;
    char *m=(*(str+k)+(temp+2));
   //cout<<m<<endl;
    strcat(target,m);
    cout<<target<<endl;
    }
    else
    cout<<str[k]<<endl;
    k++;
}

    return 0;
}
