#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
void sum(string str)
{
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum=sum+str[i]-48;
    }
    cout<<sum<<endl;
}
int main()
{

char *str = "0123456789";
//char str1[100];
char str2[100];
for(int i=0;i<strlen(str);i++)
{       char *str1=str+i;
        printf("%s\n",str1);
        char *str2=str+strlen(str)-i-1;
        printf("%s\n",str2);


    //printf("%.*s\n", i, str);

    //printf("%.*s\n", strlen(str)-i, str+i);
    //sum(str1);
}



    return 0;
}
