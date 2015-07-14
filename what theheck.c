#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fp=NULL;
fp=fopen("Wall_01_Allplan.ifc","r");
if(fp==NULL)
{
printf("file not found");

}
char buffer[400];
int k=0;
while(fgets(buffer,sizeof(buffer),stdin)!=0)
{
k++;
}

printf("%d",k);
return 0;
}
