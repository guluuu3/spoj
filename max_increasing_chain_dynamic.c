#include<stdio.h>
#include<stdlib.h>
struct box
{
int h;
int w;
int d;
};
int max(int x,int y)
{
	return (x>y)?x:y;
}
int min(int x,int y)
{
	return (x<y)?x:y;
}
int compare(const void *a,const void *b)
{
	return ((*(box*)b).w*(*(box*)b).d-(*(box*)a).w*(*(box*)a).d);
	
}
int box_stack(int arr[],int n)
{
	int max_val=0;
	struct box rot[3*n];
	int i,j,index=0;
	for(i=0;i<n;i++)

{
	rot[index]=arr[i];
	index++;
	
	rot[index].h=arr[i].d;
	rot[index].d=max(arr[i].h,arr[i].d);
	rot[inex].w=min(arr[i].h.arr[i].d);
	index++;
	rot[index].h=arr[i].d;
	rot[index].d=max(arr[i].h,arr[i].w);
	rot[index].w=min(arr[i].h,arr[i].w);
	index++;
}
	n=n*3;
	qsort(rot,n,sizeof(rot[0]),compare);
	int *mis=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		mis[i]=rot[i].h;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if( mis[i]<mis[j]+rot[i].h &&rot[i].w < rot[j].w &&
              rot[i].d < rot[j].d &&)
              mis[i]=mis[j]+rot[i].h;
		}
	}
	for(i=0;i<n;i++)
	{
		if(max_val<mis[i])
		max_val=mis[i];
	}
	return max_val;
}	
	
	
int main()
{
	
struct	Box arr[] = { {4, 6, 7}, {1, 2, 3}, {4, 5, 6}, {10, 12, 32} };
  int n = sizeof(arr)/sizeof(arr[0]);
 
  printf("The maximum possible height of stack is %d\n",
         box_stack (arr, n) );
         return 0;
         }