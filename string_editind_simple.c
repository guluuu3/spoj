#include <stdio.h>
#include <string.h>
int main(void) {
	int n;
	int i;

scanf("%d",&n);
if(n>=1 && n<=100)
{

for(i=0;i<n;i++)
{int total=0;
	 char strings[200];
	 //printf("enter the string : ");
	 scanf("%s",&strings);

	 int length=strlen(strings);
	 printf("%d\n",length);
	 char *p=(strings+4);
    // printf("%s\n",p);
     p[strlen(p)-4]=0;
     int x=strlen(p);
     printf("%d\n",x);
    for(i=0;i<strlen(p);i++)
    {
    	if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
        {
x--;
        }//printf("%c\n",*(p+i));
    }

    total=x+4;
    printf("%d / %d",total,length);

}
}

	// your code goes here
	else return 0;
}

