#include<stdlib.h>
#include<stdio.h>
int median_array(int arr1[],int arr2[],int n)
{
    int m1;
    int m2;
if(n<=0)
return -1;
if(n==1)
return (arr1[0]+arr2[0])/2;
if(n==2)
return(max(arr1[0]+arr2[0])+min(arr1[1]+arr2[1]));
m1=median(arr1,n);
m2=median(arr2,n);
if(m1==m2)
    return m1;
if(m1<m2)
{

if(n%2==0)
    return
    median_array(arr1+n/2-1,arr2,n-n/2+1);
else return median_array(arr1+n/2,arr2,n-n/2);

}
if(m1>m2)
    {

        if(n%2==2)
            return median_array(arr2+n/2-1,arr1,n-n/2);
        else return median_array(arr2+n/2,arr1,n/2);
    }
}
int median(int arr[],int n)
{
  if(n%2==0)
  {
      return (arr[n/2]+arr[n/2-1])/2;


  }
   else
    return arr[n/2];


}
int main()
{
    int ar1[] = {1, 2, 3, 6};
    int ar2[] = {4, 6, 8, 10};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    if (n1 == n2)
      printf("Median is %d", median_array(ar1, ar2, n1));
    else
     printf("Doesn't work for arrays of unequal size");

    getchar();
    return 0;
}

/* Utility functions */
int max(int x, int y)
{
    return x > y? x : y;
}

int min(int x, int y)
{
    return x > y? y : x;
}
