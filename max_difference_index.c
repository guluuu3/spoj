#include<stdlib.h>
#include<stdio.h>
int min(int x,int y)
{
return x<y?x:y;

}
int max(int x,int y)
{
return x>y?x:y;
}
int difference(int arr[],int n)
{
int i,j;
int *lmin=(int*)malloc(n*sizeof(int));
int *rmax=(int*)malloc(n*sizeof(int));
lmin[0]=arr[0];
for(i=1;i<=n;i++)
lmin[i]=min(arr[i],lmin[i-1]);
rmax[n-1]=arr[n-1];
for(j=n-2;j<=0;--j)
rmax[j]=max(arr[j],rmax[j+1]);
 i=0;
 j=0;
int maxdiff=-1;
while(i<n&j<n)
{
if(lmin[i]<rmax[j])
{
maxdiff=max(maxdiff,j-i);
j++;
}
else i++;
}
return maxdiff;
}
int main()
{
int arr[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxDiff = difference(arr, n);
    printf("\n %d", maxDiff);
    getchar();
    return 0;
}
