#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void compute_lps(char *pat, int m, int *lps);
void KMPSearch(char *pat, char *txt)
{
int n=strlen(txt);
int m=strlen(pat);

int *lps=(int*)malloc(sizeof(int)*m);
int j=0;
compute_lps(pat,m,lps);
int i=0;
while(i<n)
{
if(pat[j]==txt[i])
{
j++;
i++;
}
if(j==m)
{
printf("pattern found at %d",i-j);
j=lps[j-1];
}
else if(pat[j]!=txt[i])
{
if(j!=0)
j=lps[j-1];

else i++;
}
}

free (lps);
}
void compute_lps(char *pat,int m,int *lps)
{
int len=0;
lps[0]=0;
int i;
i=1;
while(i<m)
{
if(pat[i]==pat[len])
{
len++;
lps[i]=len;
i++;
}
else
{
if(len!=0)
{
len=lps[len-1];
}
else
{
lps[i]=0;
i++;
}
}
}
}
int main()
{
   char *txt = "ABABDABACDABABCABAB";
   char *pat = "ABABCABAB";
   KMPSearch(pat, txt);
   return 0;
}
