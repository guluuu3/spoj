#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindrom(char *x)
{
int n=strlen(x);
int i,j,cl,l[n][n];
for(i=0;i<n;i++)
{
L[i][j]=1;
}
for(cl=2;cl<=n;cl++)
{
for(i=0;i<n-cl+1;i++)
{
j=i+cl-1;
if(x[i]==x[j]&&cl==2)
l[i][j]=2;
else if(x[i]==x[j])
l[i][j]=l[i+1]l[j-1];
else
l[i][j]=max(l[i][j-1],l[i+1][j]);


}


}

return l[0][n-1];
}
int max(int x,int y)
{

return (x>y)?x:y;
}
int main()
{
char seq[] = "GEEKS FOR GEEKS";
    int n = strlen(seq);
    printf ("The lnegth of the LPS is %d", lps(seq));
    getchar();
    return 0;
}