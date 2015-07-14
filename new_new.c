#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("Wall_01_Allplan.ifc","r");
    FILE *out = fopen("out.txt", "a");
    if(fp==NULL)
    {

        printf("file not found");
        return 0;
    }
       char buffer[4000];

       char pattern[]="IFCWALL";
       int k=0;
       while (fgets(buffer, sizeof(buffer), fp))
       {
           k++;
       }
       printf("%d",k);



    return 0;
}
