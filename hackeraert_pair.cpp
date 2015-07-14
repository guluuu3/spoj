#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x;
		scanf("%d",&x);
		int high=x-1;
		int low=1;
		if(high>=low)
		{
			printf("%d %d",high,low);
		}
		else
		{
			printf("%d %d",low,high);
		}
	}
    //printf("Hello World!\n");
    return 0;
}
