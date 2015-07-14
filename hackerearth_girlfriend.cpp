#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int issafe(char *str,int i,int n)
{
	if(*(str+i)==*(str+i+1))
	return 0;
	return 1;
}
bool is_girl_friend(char *str,int i,int n)
{
	if(i>=n)
	return 1;
	if(issafe(str,i,n))
	{
		if(is_girl_friend(str,i+1,n))
		return 1;
	}
	return 0;
}

int main()
{
	char *str[1000];
	int n,x,i;

	printf("enter the number of string :");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the string:")
    scanf("%s",str[i]);
    printf("\n");
}
	    for(i=0;i<n;i++)
        {
            x=strlen(str[i]);
	    if(is_girl_friend(str[i],0,x)==1)
        {
            printf("KISS");
        }
        else printf("SLAP");

    //cout << "Hello World!" << endl;
    return 0;
}
