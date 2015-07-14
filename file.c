#define _CRT_SECURE_NO_DEPRECATE
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
       FILE *fp;
       int c;
       char *ptr;
       ptr =(char*)malloc( 512);
       char *pattern="gulshankumar";




       fp = fopen("text.txt", "r");

       while ((c = fgetc(fp)) != EOF)
       {
             putchar(c);
             if (c != '\n')
             {
                while(fgets(ptr, sizeof(ptr), fp)!=NULL)
                {
                if(strstr(ptr,pattern)!=NULL)
                {
                fputs(ptr,stdout);
               // printf("\n");
                }
                }
                    }
       }

       fclose(fp);
       getchar();
       return 0;

}
