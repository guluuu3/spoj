#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i;

       FILE *fp = NULL;





       fp = fopen("all.txt", "r");

       FILE *out = fopen("out.txt", "a");
       if (fp == NULL)

       {

             printf(" file not  not found");

             return 0;

       }


       char buffer[10000][40];
       char str[10000][40];
       int arr[10000];
       int aray[10000];

       char pattern1[]="IFCWALL";
       char pattern2[]="Allplan Attributes";
       int k=0;
       int l=0;
       while (fgets(buffer[k], sizeof(buffer), fp) != 0)
       {
          if (strstr(buffer[k], pattern1))

             {

                    arr[l++]=k;
             }

            k++;
       }

return 0;

}
