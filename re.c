#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{

	int i;

	FILE *fp = NULL;
	fp = fopen("C:/Wall_01_Allplan.ifc", "r");
	FILE *out = fopen("out.txt", "a");

	if (fp == NULL)

	{

	printf(" file not  not found");

	return 0;

	}



	char pattern[4][40] = {"IFCWINDOW","IFCOPENINGELEMENT","IFCWALL","IFCDOOR"};


	printf("*******************************************************************************************************************\n");
	printf("The  element is IFCWINDOW\n");
	printf("The properties of IFCWINDOW ARE-\n");

int loops=4;

while(loops)
{
    int z;
	int k = 0;
	int l = 0;
        //char **buffer = (char **)malloc(10000 * sizeof(int *));
   // for (z=0; z<10000; z++)
         //buffer[z] = (int *)malloc(40 * sizeof(int));

    //char **str = (char **)malloc(10000 * sizeof(int *));
    //for (z=0; z<10000; z++)
         //str[z] = (int *)malloc(40 * sizeof(int));
         char buffer[10000][40];
         char str[10000][40];

	while (fgets(buffer[k], sizeof(buffer), fp) != NULL)
	{
	if ((strstr(buffer[k],pattern[4-loops] ))) //|| (strstr(buffer[k], pattern1)) || (strstr(buffer[k], pattern2)))

	{
	int n = 16;
	int i = k;
	while (n-- && i > 0)
	{
	fgets(str[i], sizeof(str), fp);
	fputs(str[i], stdout);
	fprintf(out, "%s\n", str[i]);

	i--;

	}

	}
	k++;
	if (k > 9000)
	k = 0;

	}

	rewind(fp);
	printf("*******************************************************************************************************************\n");
	printf("The next element is IFCOPENINGELEMENT\n");
	printf("The properties of  IFCOPENINGELEMENT are-\n");

free (buffer);
free (str);
loops--;
}

fclose(fp);

}
