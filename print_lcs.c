#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
//0	1	2	3	4	5	6	7
//Ø	M	Z	J	A	W	X	U
//0	Ø	0	0	0	0	0	0	0	0
//1	X	0	0	0	0	0	0	1	1
//2	M	0	1	1	1	1	1	1	1
//3	J	0	1	1	2	2	2	2	2
//4	Y	0	1	1	2	2	2	2	2
//5	A	0	1	1	2	3	3	3	3
//6	U	0	1	1	2	3	3	3	4
//7	Z	0	1	2	2	3	3	3	4//
void lcs(char *x,char *y,int m,int n)
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

int index=l[m][n];
char sequence[index+1];
sequence[index]='\0';
 i=m;
 j=n;
while(i>0 &&j>0)
{
if(x[i-1]==y[j-1])
{
sequence[index-1]=x[i-1];
i--,j--,index--;
}
if(l[i-1][j]>l[i][j-1])
i--;
else j--;

printf("%s\n",sequence);



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

   lcs( X, Y, m, n );

  getchar();
  return 0;
}
