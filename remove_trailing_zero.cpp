#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<algorithm>
using namespace std;
void swap(string *str,string *str2);
void rem(string str)
 {
 int  i=0;

  while(str[i]=='0')
  {
  i++;
  }
 for(int k=i;k<str.size();k++)

 {

 cout<<str[k];
 }

 }
int main()
{

string str="2";
string str1="77";
str[1]=str[1]+str1[1];
str[0]=str[0]+str1[0];
cout<<str[0]<<str[1];
string str2;
int i=0;
int j=str.size()-1;
//reverse(str.begin(),str.end());
//rem(str);
return 0;
}
