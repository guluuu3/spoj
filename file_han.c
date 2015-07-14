#include <stdio.h>
#include <string.h>

int main()
{
    int i;
   FILE *f;
   char buffer[1000];
   char *pattern = "IFCFACE";



   if (f = fopen("text.txt", "r") == NULL)
    {
     printf(" Pattern  not found");
      return 0;
   }

   while (fgets(buffer, sizeof(buffer), f))
   {
      if (strstr(buffer, pattern))
      {
       fputs(buffer,stdout);
         return 1;
      }
   }

   return 0;
}
