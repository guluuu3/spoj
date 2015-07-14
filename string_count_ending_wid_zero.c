#include<stdio.h>
#include<stdlib.h>
int count_string(int n)
{
int a[n],b[n],i;
a[0]=b[0]=1;
for( i=1;i<n;i++)
{
a[i]=a[i-1]+b[i-1];
b[i]=a[i-1];

}
return a[n-1]+b[n-1];

}
int main()
{

    int x,i;
    for(i=1;i<10;i++)
    {
    x=count_string(i);

    printf("%d\n",x);
    }
        return 0;
}



