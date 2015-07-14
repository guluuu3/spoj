#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{

       int i;

       FILE *fp = NULL;
       fp = fopen("C:\Users\Gulshan\Desktop\Wall_01_Allplan.ifc", "r");
       FILE *out = fopen("C:\Users\Gulshan\Desktop\out.txt", "a");

       if (fp == NULL)

       {

             printf(" file not  not found");

             return 0;

       }


       char buffer[10000][40];
       char str[10000][40];
       char pattern[] = "IFCWINDOW";
       //char pattern1[] = "IFCOPENINGELEMENT";
       //char pattern2[] = "IFCWALL";



       int k = 0;
       int l = 0;
       int count = 0;
       while (fgets(buffer[k], sizeof(buffer), fp) != NULL)
       {
             if ((strstr(buffer[k], pattern))) //|| (strstr(buffer[k], pattern1)) || (strstr(buffer[k], pattern2)))

                 {
                         int n = 13;
                         int i = k;
                         while (n-- && i>0)
                         {
                                fgets(str[i], sizeof(str), fp);
                                fputs(str[i], stdout);
                                fprintf(out, "%s\n", str[i]);
                                 count++;
                                i--;

                           }

                 }
                        k++;
                        if (k > 9000)
                        k = 0;

       }


       printf("\nCOUNT =\t%d", count);





       return 0;

}
