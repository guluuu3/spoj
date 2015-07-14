#include<stdio.h>
#include<stdio.h>
#include<string.h>
int palindromic(char *x,int i,int j)
{
int len;
if(i==j)
return 1;
if((x[i]==x[j] &&j=i+1)
return 2;
else if(x[i]==x[j])
return palindromic(x,i+1,j-1)+2;
else return max(palindromic(x,i,j-1).palindromic(x,i+1,j));
}
int max(int x,int y)
{

return (x>y)?x:y;
}
int main()
{
char seq[] = "GEEKS FOR GEEKS";
int n=strlen(seq);
    int n = strlen(seq,0,n-1);
    printf ("The lnegth of the LPS is %d", lps(seq));
    getchar();
    return 0;
}