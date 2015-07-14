#include<iostream>
#include<algorithm>
#include<cstdio>
#include<stdlib.h>
using namespace std;
static int k=0;
static int m=0;


    int compare1(const void *a,const void *b)
{
	return (*(int *)a-*(int *)b);
}
   int compare2(const void *a,const void *b)
{
	return (*(int *)b-*(int *)a);
}
int main()
{
	int t;
    cin>>t;
    int neg[100],pos[100];
   while(t--)
   {
   	int n;
   	//cout<<"enter the number of eements:";
   	cin>>n;
   	for(int i=0;i<n;i++)
   	{
   		int x;
   		cin>>x;
   		if(x>=0)
   		pos[k++]=x;
   		else
   		neg[m++]=-x;

   	}
   	qsort(pos,k,sizeof(int),compare1);
   	qsort(neg,m,sizeof(int),compare2);
   	for(int i=0;i<m;i++)
   	{
   		cout<<-neg[i]<<endl;
   	}
   	for(int i=0;i<k;i++)
   	{
   		cout<<pos[i]<<endl;
   	}

   }
   return 0;
}


