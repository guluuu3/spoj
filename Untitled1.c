#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{

       int i;

       FILE *fp = NULL;
    fp = fopen("Wall_01_Allplan.ifc", "r");
    FILE *out = fopen("out.txt", "a");

       if (fp == NULL)

       {

             printf(" file not  not found");

             return 0;

       }


       char buffer[10000][40];
       char str[10000][40];
       char pattern[] = "IFCOPENINGELEMENT";
       int k = 0;
       int l = 0;

       while (fgets(buffer[k], sizeof(buffer), fp) != NULL)
       {
           if(buffer[k][strlen(buffer[k]-1)]!=';')
           {
               strcat(buffer[k-1],buffer[k]);
             if (strstr(buffer[k], pattern))

                 {
                         int n = 9;
                         int i = k - 4;
                         while (n--)
                         {
                                fgets(str[i], sizeof(str), fp);
                                fputs(str[i], stdout);
                                fprintf(out, "%s\n", str[i]);

                                i++;
                        }

                 }

                        k++;
                        if (k > 9000)
                        k = 0;

       }
       }



       return 0;

}
