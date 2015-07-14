#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
     int i,cx,l,n,k;
  // printf("enter the number of elements");
   scanf("%d",&l);
   float x;

//int result=lgamma(10);
char buffer[100]
while(l--)
{
    scanf("%d %d",&n ,&k);
  double result= exp( lgamma(n+1)-lgamma(k+1)-lgamma(n-k+1));
  cx = snprintf ( buffer, 100,  "%f", result );
  snprintf ( buffer+cx, 100-cx,"");
 // puts (buffer);
 // printf("%d\n",cx);

  //printf("%c\n",*(buffer+(cx-10)));
  int m=0;
  while(m<=cx)
  {
     if(*(buffer+m)=='.')
        break;
     m++;
  }
  for(i=0;i<m;i++)
  {
  printf("%c",*(buffer+i));
  }
}
return 0;

}
