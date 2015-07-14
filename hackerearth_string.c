#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    int k=0;

    scanf("%d",&n);
    char arr[111];
    //char **str=(char**)malloc(sizeof(char*)*n);
    char *str[n];
    int visited[27];
    for(i=0;i<27;i++)
    {
    	visited[i]=-1;
    }
    for(i=0;i<n;i++)
    {

    	scanf("%s",&arr[i]);
    	str[i]=arr;
    }

    for(i=0;i<n;i++)
    {

    for(j=0;j<strlen(str[i]);j++)
    {
    if(visited[*(*(str+i)+j)-97]== -1)
    {
    	k++;


       visited[*(*(str+i)+j)-97]=1;

    }
    }
    if(k==26)
    {
    printf("YES");
    printf("\n");
    }

    else
    {
    printf("NO");
    printf("\n");

    }
    }
    return 0;
}
