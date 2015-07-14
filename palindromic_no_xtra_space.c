#include<stdlib.h>
#include<stdio.h>
int ispalindromic(int x)
{
int div=1;
int l,r;
while(x/div>10)
{
div=div*10;
}
while(x!=0)
{
l=x/div;
r=x%10;
if(l!=r)
return 0;
x=(x%div)/10;
div/=100;

}
return 1;
}
int main()
{
int x=ispalindromic(1551);
printf("%d",x);
return 0;
}
