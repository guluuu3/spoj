#include<stdio.h>
#include<stdlib.h>
void compare(int **arr,int n)
{
    int i,j;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if((*(*(arr+i))+1== *(*(arr+j)) && (*(*(arr+i)+1)+1==*(*(arr+j)+1))))
                printf(" {%d %d } {%d %d}\n",*(*(arr+i)) ,*(*(arr+i)+1) ,*(*(arr+j)), *(*(arr+j)+1));
        }
    }
    return ;

}
int main()
{
    int n,i,j;
    printf("enter the number elements");
    scanf("%d",&n);
    int **arr=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        arr[i]=(int *)malloc(2*sizeof(int));
    }
    for( i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the elements of the array");
            scanf("%d" ,&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d  %d \n" ,*(*(arr+i)) ,*(*(arr+i)+1));
    }
    compare(arr,n);
    return 0;
}
