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
                break;
        }
        if (j == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
           return 1;

        }



    }

return 0;
    }





int main()
{
    int n,i;
    char str[100000];
    printf("enter the number of inputs");
    scanf("%d",&n);
char **txt=(char*)malloc(n*sizeof(char*));
char **pat=(char*)malloc(n*sizeof(char*));
for(i=0;i<n;i++)
{
    scanf("%s",&str);
    txt[i]=str;
}
for(i=0;i<n;i++)
{
printf("%s",txt[i]);
}
//printf("%d",matching(a,pat));


   getchar();
   return 0;
}
