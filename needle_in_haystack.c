#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int permutate(char *a,char *pat, int i, int n)
{

   int j;
   if (i == n)
   {
    int z,l;
    int flag=0;
    int N = strlen(pat);
    int M = strlen(a);

    for ( z = 0; z <= N-M; z++)
    {
        int f;

        /* For current index i, check for pattern match */
        for (f = 0; f < M; f++)
        {
            if (pat[z+f] != a[f])
                break;
        }
        if (f == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
           //printf("yes");

           return M;

        }


   }
   }
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permutate(a,pat ,i+1, n);
          swap((a+i), (a+j));
       }
   }




}





int main()
{
char a[] = "hacks";

char pat[]="india";
int x=strlen(a);
 printf("%d",permutate(a,pat,0,x-1));



   getchar();
   return 0;
}
