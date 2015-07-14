#include <stdio.h>
#include<stdlib.h>
#define T 100;
void battle(int arr[],int n)
{
    int i,d;
    char **strings=(char**)malloc((n+1)*sizeof(char*));
    printf("enter the day of the battle");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(arr[i]%3==0)
             strings[i]="SL";

         if(arr[i]%3==1)
strings[i]="LB";

         if(arr[i]%3==2)
            strings[i]="BS";

    }

        printf("%s\n",strings[d-1]);

return;
}
int main()
{
    int n;
    //printf("enter the day number of the battle");
    scanf("%d",&n);
    int arr[100];
	int i,j;
	int k=0;
	for( i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			arr[k++]=i+1;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	battle(arr,n);
	return 0;
}
