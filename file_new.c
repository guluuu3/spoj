#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{

       int i;

       FILE *fp = NULL;





       fp = fopen("new.txt", "r");

       FILE *out = fopen("out.txt", "a");
       if (fp == NULL)

       {

             printf(" file not  not found");

             return 0;

       }


       char buffer[10000][40];
       char pattern[]="IFCPOLYLOOP";
       int k=0;
       while (fgets(buffer[k], sizeof(buffer), fp) != 0)
       {
          if (strstr(buffer[k], pattern))

             {

                    fputs(buffer[k], stdout);
                    printf("%d",k);
                    fprintf(out, "%s\n", buffer);

     k++;

  //k++;//This is the new line added to the file out.txt


             }







       }







       return 0;

}



