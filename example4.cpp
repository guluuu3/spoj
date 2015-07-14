#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<cstdio>
using namespace std;
//char *strncpy(char *string1,const char *string2, size_t n);
int main()
{
char arr[200][20];
for(int i=0;i<1;i++)
{
    cout<<"enter the string";
    cin>>arr[i];
}

   char *m=*(arr+0)+2;
 //char *x=strstr(arr[0
                  char *x=strchr(arr[0],'>');
                  //int y=(int)*x;
                  //char *x=arr[0].substring(0,5);
                  char target[100];

strncpy(target, arr[0], 8);
target[8] = '\0'; // IMPORTANT
//replace(target.begin(),target.end(),'-','.');
target[7]='.';


strcat(target,x);
 //string s=*(target+0)+3;
//cout<<str;
string gul[50];
gul[0]="gulshan";
std::cout>>gul[0];
cout<<m;

return 0;
}


