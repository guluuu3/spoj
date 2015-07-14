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
             printf(" file  not found");
             return 0;
       }
       int n;
       char buffer[10000][40];
       char str[10000][40];
       char pattern[40];
       printf("Enter charater to search: ");
       scanf("%s",&pattern);
       printf("enter the number of lines :");
       scanf("%d",&n);
       int k=0;
       int l=0;
       while (fgets(buffer[k], sizeof(buffer), fp) != 0)
       {
          if (strstr(buffer[k], pattern))

             {

                 int i=k;
             //printf("%d  ",i);
               while(n-- && i>0)
               {
                  fgets(str[i], sizeof(str), fp);
                  fputs(str[i],stdout);
                  printf("\t");
                  fprintf(out, "%s\n", str[i]);
                  //printf("%s ",str[l]);
                  //printf("%d\n",i);
                  //l++;
                  i--;
               }

                    //fputs(buffer[k], stdout);

                    //printf("%d",k);
             }

       k++;
       }

//int j;
  //for(j=0;j<l;j++)
  //{
      //printf("%s \n",str[j]);
  //}




       return 0;

}



