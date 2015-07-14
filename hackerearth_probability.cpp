#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
# define MAX 10000005
long long int arr[MAX];
void markmultiples(int a)
{
	long long int i=2,num;
	while((num=i*a)<=MAX)
	{
		arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
	}
	return;
}
void cal()
{

    memset(arr,0,sizeof(arr));
    arr[0]=1;
	for(long long int i=1;i<MAX;i++)
	{
		if(arr[i]==0)
		{
			markmultiples(i+1);
		}//means i+1 is prime
	}
	return ;
}
int main()
{
	int t;
	cin>>t;
	cal();
	while(t--)
    {
       long long int x,y;
       cin>>x>>y;
       long long int prime=0;
       for(int i=x;i<=y;i++)
       {
           if(arr[i-1]==0)
           {
               prime++;
               //cout<<i<<endl;

           }
       }
       float prob=(float)(prime)/(y-x+1);
       printf("%.4f", ((signed long)(prob * 100) * 0.01f));
    }


    //cout << "Hello World!" << endl;
    return 0;
}
