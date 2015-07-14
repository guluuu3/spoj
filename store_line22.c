#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{

       int i;

       FILE *fp = NULL;





       fp = fopen("shubhang.txt", "r");

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

       char pattern1[]="IFWALL";
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


       k=0;
       l=0;
       while (fgets(buffer[k], sizeof(buffer), fp) != 0)
       {
          if (strstr(buffer[k], pattern2))

             {

                    aray[l++]=k;
             }

            k++;
       }

for(i=0;i<l;i++)
{
    printf("%d",arr[i]);
}


       return 0;

}



