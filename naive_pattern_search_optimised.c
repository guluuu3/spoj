#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void search_naive(char *pat ,char *txt)
{
int i=0;
int m=strlen(pat);
int n=strlen(txt);
while(i<=n-m)
{
int j;
for(j=0;j<m;j++)
{
if(pat[j]!=txt[i+j])
break;
}
if(j==m)
{
printf("pattern found at %d",i);
i=i+m;
}
if(j==0)
{
i++;
}
else
i=i+j;
}
}
int main()
{
   char *txt = "ABCEABCDABCEABCD";
   char *pat = "ABCD";
   search_naive(pat, txt);
   getchar();
   return 0;
}
