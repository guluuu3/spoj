#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int lcs(char *x,char *y,int m,int n)
{
int l[m+1][n+1];
int i,j;
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)
{
if(i==0||j==0)
{
l[i][j]=0;
}
else if(x[i-1]==y[j-1])
{

l[i][j]=l[i-1][j-1]+1;
}
else
l[i][j]=max(l[i][j-1],l[i-1][j]);
}

}

return l[m][n];
}
int max(int x,int y)
{
return (x>y)?x:y;
}
int main()
{
char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";

  int m = strlen(X);
  int n = strlen(Y);

  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) );

  getchar();
  return 0;
}
