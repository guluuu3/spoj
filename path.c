//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{

       int i;

       FILE *fp = NULL;
       fp = fopen("C:/Wall_01_Allplan.ifc", "r");
       FILE *out = fopen("output.txt", "a");

       if (fp == NULL)

       {

             printf(" file not  not found");

             return 0;

       }


       char buffer[10000][40];
       char str[10000][40];
       char buffer1[10000][40];
       char str1[10000][40];
       char pattern1[] = "IFCFACE";
       char pattern[] = "IFCOPENINGELEMENT";
       //char pattern1[] = "IFCWALL";



       int k = 0;
       int l = 0;
      // int count = 0;
       while (fgets(buffer[k], sizeof(buffer), fp) != NULL && k<10000)
       {
             if ((strstr(buffer[k], pattern))) //|| (strstr(buffer[k], pattern1)) || (strstr(buffer[k], pattern2)))

                 {
                         int n = 9;
                         int i = k;
                         while (n-- )
                         {
                                fgets(str[i], sizeof(str), fp);
                                fputs(str[i], stdout);
                                fprintf(out, "%s\n", str[i]);
                                 //count++;
                                i++;

                           }

                 }
                        k++;


       }
       fprintf(fp," Change ");
       fclose(fp);

       FILE *fnew=fopen("C:/Wall_01_Allplan.ifc", "r");



   k=0;
   while (fgets(buffer1[k], sizeof(buffer1), fnew) != NULL && k<10000)
       {
             if ((strstr(buffer1[k], pattern1))) //|| (strstr(buffer[k], pattern1)) || (strstr(buffer[k], pattern2)))

                 {
                         int n = 9;
                         int i = k;
                         while (n-- )
                         {
                                fgets(str1[i], sizeof(str1), fnew);
                                fputs(str1[i], stdout);
                                fprintf(out, "%s\n", str1[i]);
                                 //count++;
                                i++;

                           }

                 }
                        k++;


       }


      // printf("\nCOUNT =\t%d", count);





       return 0;

}
