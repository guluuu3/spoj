#include<iostream>
#include <cstdio>
#include<stdlib.h>
#include<string.h>
using namespace std;

void sear(char pat[],char txt[])
{
int i,j;
int m=strlen(txt);
int n=strlen(pat);
for(i=0;i<=m-n;i++)
{
for(j=0;j<n;j++)
{

if(txt[i+j]!=pat[j])
break;
}
if(j==n)
{
printf("Pattern found at %d\n",i);//this will give the cursor position
return;
}

}
printf("Pattern not found");
}

int main()
{
    char txt[100];
    char pat[100];
    scanf ("%[^\n]%*c", txt);
    scanf ("%[^\n]%*c", pat);
    //cin>>txt>>pat;
	sear(pat,txt);
    //printf("Hello World!\n");
    return 0;
}
