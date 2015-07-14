
#include <stdio.h>
#include <string.h>
int main()
{



       int i;
       FILE *f = NULL;





       char buffer[1000];



       char *pattern = "qqq";



       f = fopen("text.txt", "r");



       FILE *out = fopen("out.txt", "a");

       if (f == NULL)



       {



             printf(" Pattern  not found");



             return 0;



       }







       while (fgets(buffer, sizeof(buffer), f))



       {



             if (strstr(buffer, pattern))



             {



                    fputs(buffer, stdout);

                    fprintf(out, "%s\n", buffer);//This is the new line added to the file out.txt

                    //return 1;



                    //continue;





             }







       }











       return 0;



}
