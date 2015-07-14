#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int lcs(char *x,char *y,int m,int n)
{

    char *l=(char*)malloc(sizeof(char)*m);
    if(m==0||n==0)
{
return 0;
}
if( x[m-1]== y[n-1])
{

return 1+lcs(x,y,m-1,n-1);

}

else
{

return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));

}
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
