#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>


 static int k=0;
int main()

{

       int i;

       FILE *f = NULL;

       char *buffer[1000];

       char *pattern = "IFCFACE";

       f = fopen("C:/01basictests/102IfcWall/wall01/Wall_01_Allplan.ifc", "r");

       FILE *out = fopen("C:/shubhang/checker.txt", "a");
       if (f == NULL)

       {

             printf(" Pattern  not found");

             return 0;

       }



       while (fgets(buffer[k], sizeof(buffer), f))

       {

             if (strstr(buffer[k], pattern))

             {

                    int n=4;
                    int i=k;
                    while(n--)
                    {
                        printf("%s   ",buffer[i--]);

                   }



       }

       k++;


       }

       return 0;

}
