#include<stdio.h>
#define MAX 100
void swap(int a,int b);
int sorted(int *arr,int low,int up);
int main()
{
int i,n,arr[MAX];
printf("enter the number of elements in array 1");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the %d element",(i+1));
scanf("%d",&arr[i]);
}
while(i>=0 && (arr[i]<arr[i-1]))
{
i--;
}
swap(arr[i],sorted(arr[i+1],i+1,n-1));
sorted(arr[i+1],i+1,n-1);
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
int sorted(int *arr,int low,int up)
{
int i,temp,j;
for(i=low;low<=up;low++)
{
int min=arr[i];
for(j=i+1;j<=up;j++)
{
if( arr[min] > arr[j] )
				min=j ;


}
if( i != min )
		{
			temp=arr [i];
			arr[i]=arr[min];
			arr[min]=temp ;
		}

}
return arr[low];
}
void swap(int a,int b )
{
int temp=a;
a=b;
b=temp;

}
