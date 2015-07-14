#include <stdio.h>

int main()
{
	int c,i,j, N,M;
	scanf("%d",&N);
	scanf("%d",&M);
	int arr[N][M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
		    printf("enter the element:");
		scanf("%d",&arr[i][j]);
		}
	}
	int query[M];
	for(i=0;i<M;i++)
	{
	    printf("enter the number of query");
		scanf("%d",&query[i]);
	}
	printf("enter the number of inputs :");
	scanf("%d",&c);
	int input_array[c];
	for(i=0;i<c;i++)
    {
	    printf("enter the element to search");
		scanf("%d",&input_array[i]);
	}


	for(i=0;i<c;i++)
	{
	    	int k=0,l=M-1;
	while(k<M && l>=0)
	{
		if(arr[k][l]==input_array[i])
		{
		printf("%d %d \n",k, l);
		break;
		}
	    if(arr[k][l]>input_array[i])
	    l--;
	    else //if(arr[k][l]<input_array[i])
	    k++;
	    if(k==M || l==-1)
        {
            printf(" %d %d ", -1 -1);
        }
	}

	}



   // printf("Hello World!\n");
    return 0;
}
