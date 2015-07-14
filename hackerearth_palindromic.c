#include <stdio.h>
#include<string.h>
static int k=0;
int arr[101000];
int matching(char *txt,char *pat);
void print(int arra[],int l );
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

   int *str[100000];
   if (i == n)
   {
     matching(pat,a)
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
int matching(char *txt,char *pat)
{
    int i,l;
    //int k=0;
    int M = strlen(pat);
    //for(l=0;l<x;l++)
   // {
    int N = strlen(txt);
    int flag=1;

    /* A loop to slide pat[] one by one */
    for ( i = 0; i <= N-M; i++)
    {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
        {
            if (txt[i+j] != pat[j])
            {

                break;
            }
        }
        if (j == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
           flag=1;
           return 1;
        }



    }
return 0;

    }

int factorial(int x)
{
 if()
}



int main()
{
char a[] = "hacks";

char pat[]="indiakahsc";
int x=strlen(a);
permutate(a,pat,0,x-1);


   getchar();
   return 0;
}
