#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;
static int k=0;
int aray[100][10];
void print(int aray[][10],int n)
{

    for(int i=0;i<n;i++)
        cout<<aray[k][i]<< " ";
    k++;
}
void add(int ary[], int n)
{
    for ( int i = 0; i < n; ++i)
    {
        aray[k][i]=ary[i];
    }


    print(aray,n);
}
void tr_one(int depth,int top,int k, int *arr,int x)
{
if(depth!=x)
{
	arr[top]=k+1;
	tr_one(depth+1,top+1,k,arr,x);
}
if(depth==x)
{
	add(arr,top);
    cout<<endl;
}
return ;
}
void tr_two(int depth,int top,int k, int *arr,int x)
{

if(depth!=x)
{
	arr[top]=k;
	tr_two(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+1;
	tr_two(depth+1,top+1,k,arr,x);
}
if(depth==x)
{
	add(arr,top);
    cout<<endl;
}
return ;
}
void tr_three(int depth,int top,int k, int *arr,int x)
{

if(depth!=x)
{
	arr[top]=k;
	tr_three(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+1;
	tr_three(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_three(depth+1,top+1,k,arr,x);
}
if(depth==x)
{
	add(arr,top);
    cout<<endl;
}
return ;
}
void tr_four(int depth,int top,int k, int *arr,int x)
{

if(depth!=x)
{
	arr[top]=k;
	tr_four(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+1;
	tr_four(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_four(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_four(depth+1,top+1,k,arr,x);
}
if(depth==x)
{
	add(arr,top);
    cout<<endl;
}
return ;
}
void tr_five(int depth,int top,int k, int *arr,int x)
{

if(depth!=x)
{
	arr[top]=k;
	tr_five(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+1;
	tr_five(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_five(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_five(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_five(depth+1,top+1,k,arr,x);
}
if(depth==x)
{
	add(arr,top);
    cout<<endl;
}
return ;
}
void tr_six(int depth,int top,int k, int *arr,int x)
{

if(depth!=x)
{
	arr[top]=k;
	tr_six(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+1;
	tr_six(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_six(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_six(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_six(depth+1,top+1,k,arr,x);
}
if(depth!=x)
{
	arr[top]=k+2;
	tr_six(depth+1,top+1,k,arr,x);
}
if(depth==x)
{
	add(arr,top);
    cout<<endl;
}
return ;
}
int main()
{

    //int arr[100];
    int power, p,n1,n2,i;
	int m=0;
	cout<<"enter the number of machimes: ";
	cin>>p;//Number of players
	cout<<"enter the starting band: ";
    cin>>n1;
	cout<<"enter the ending band: ";
	cin>>n2;

    int  band_diff = n2-n1-1;
    cout<<band_diff<<endl;


    power=pow((n2-n1-1),p);
    int *arr=(int*)malloc(((n2-n1)-1)*sizeof(int*));
    for( i=n1+1;i<n2;i++)
	{
		arr[m]=i;
		m++;
	}
	for( i=0;i<(n2-n1-1);i++)
	printf("%d \n",arr[i]);

	printf("Total number of nodes in graph : %d",power);
	printf("\n");
	switch(band_diff)
	{
	    case 1:
	    tr_one(0,0,arr[0],arr,band_diff);
	    break;
	    case 2:
	    tr_two(0,0,arr[0],arr,band_diff);
	    break;
	    case 3:
	    tr_three(0,0,arr[0],arr,band_diff);
	    break;
	    case 4:
	    tr_four(0,0,arr[0],arr,band_diff);
	    break;
	    case 5:
	    tr_five(0,0,arr[0],arr,band_diff);
	    break;
	    case 6:
	    tr_six(0,0,arr[0],arr,band_diff);
	    break;
	    default:
            break;
	// your code goes here

   }
   return 0;
}
