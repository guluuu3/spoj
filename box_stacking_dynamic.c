#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	int f[2][2]={{1,1},{1,0}};
	if(n==0)
	return 0;
	power(f,n-1);
	return f[0][0];
}
void power(int f[2][2],int n)
{
	int m[2][2]={{1,1},{1,0}};
	if(n==0||n==1)
	return 0;
	power(f,n/2);
	multiply(f,f);
	if(n%2!=0)
	multiply(f,m);
}
void multiply(int f[2][2],m[2][2])
{
	int x=f[0][0]*m[0][0]+f[0]f[1]*m[1][0];
	
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
	f[0][0]=x;
	f[0][1]=y;
	f[1][0]=z;
	f[1][1]=w;
}
	int main()
	{
		
		int n = 9;
  printf("%d", fib(9));
  getchar();
  return 0;
	}