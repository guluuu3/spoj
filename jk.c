#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



#include <string.h>







int main()



{



       int i, n;



       FILE *f = NULL;



       char buffer[1000];



       char pattern[512];



       printf("enter the number of patterns to search :");

       scanf("%d", &n);

       while (n--)

       {

             printf("enter the pattern ");

             scanf("%s", &pattern);







             f = fopen("latest.txt", "r");

             FILE *out = fopen("output.txt", "a");
             if (f == NULL)
             {
                    printf(" Pattern  not found  \n");

                    return 0;
             }
             while (fgets(buffer, sizeof(buffer), f))
             {
                    if (strstr(buffer, pattern))
                    {
                        fputs(buffer, stdout);

                           fprintf(out, "%s\n", buffer);//This is the new line added to the file out.txt
                           printf("\n");
                    }

             }

       }

       return 0;
}
