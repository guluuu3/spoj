#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[8][8];
    str[0]="abc";
    str[1]="xyz";
    printf("%c",*((str+1)+1));

    //printf("%d",x);
    return 0;
}
