#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,n,len1,len2,flag;
	int k;
	char strings[200];
	printf("enter the number of strings");
	scanf("%d ",&n);
		char **arr=(char**)malloc(sizeof(char*)*n);

	if(n>=1 && n<=100)
	{
	for(i=0;i<n;i++)
	{
		scanf("%s",&strings[i]);
		arr[i]=strings;
        //printf("%s",arr[i]);

	}
	//length=strlen(arr[0]);
	for(i=0;i<n-1;i++)
	{

		for(j=i+1;j<n;j++)
		{
		    len1=strlen(arr[i]);
		    len2=strlen(arr[j]);
		    flag=0;
		    if(len1==len2)
            {

		  for(k=0;k<len1;k++)
          {

			if(*(*(arr+i)+k)!= *(*(arr+j)+len1-k-1))
			{
flag=1;
		        break;
                //printf("%s - %d\n",*(arr+i),i);
                //printf("%s -%d\n",*(arr+j),j)
			}

		}
		if(flag!=1)
            printf("%d %c",len1,*(*(arr+i)+(len1/2)));


		}
		}
	}

	}
	return 0;
}
