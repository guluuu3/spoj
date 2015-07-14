#include<stdio.h>
#include<stdlib.h>
void swap(char *a,char *b)
{
char temp=a;
a=b;
b=temp;
}
void pemutate(char *a,int i,int n)
{
int j;
if(i==n)
printf("%s\n",a);
else
for(j=i;j<=n;j++)
{
swap((a+i),(b+j));
permutate(a,i+1,n);
swap((a+i),(b+j));
}
}
}
int main()
{
char a[] = "ABC";  
   permute(a, 0, 2);
   getchar();
   return 0;
}