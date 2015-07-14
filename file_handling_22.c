#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{

       int i,k,no_of_lines;
       char pattern[99];
       char buffer[10000][99];
       char str[10000][99];
       printf("Enter charater to search: ");
       scanf("%s",&pattern);
       printf("enter the number of lines :");
       scanf("%d",&no_of_lines);

       FILE *fp = NULL;
       fp = fopen("Wall_01_Allplan.ifc", "r");

       FILE *out = fopen("out.txt", "a");
       FILE *f = fopen("f.txt", "a");
       if (fp == NULL)

       {

             printf(" file not  not found");

             return 0;

       }
       k=0;
       while (fgets(buffer[k], sizeof(buffer), fp) != 0)
       {

           k++;
       }

       k=0;
      for(i=0;i<k;i++)
      {
          fprintf(f, "%s\n", buffer[i]);
          fputs(buffer[i],stdout);

          if(buffer[i][strlen(buffer[i])-1]=='(' && buffer[i+1][strlen(buffer[i+1])-1]==';')
          {
            strcat(buffer[i],buffer[i+1]);
            i++;
          }
          k++;//Number of lines finally
      }

      for(i=0;i<k;i++)
      {
          if(strstr(buffer[i],pattern))
          {

              while(no_of_lines--)
              {

                  fgets(str[i], sizeof(str), fp);
                  fputs(str[i],stdout);
                  printf("\t");
                  fprintf(out, "%s\n", str[i]);
              }
          }

      }






       return 0;

}



