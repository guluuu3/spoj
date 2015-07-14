#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;
#define INF 100
 static int x=-1;
 static int m=-1;
 int min(int x,int y)
 {
     return (x<y?x:y);
 }



int main()
{
	int power, p,n1,n2,i;


	int k=0;
	cout<<"enter the number of players: ";
	scanf("%d",&p);//Number of players
	cout<<"enter the starting number: ";
	scanf("%d",&n1);
	printf("enter the ending number: ");
	scanf("%d",&n2);
	int *arr=(int*)malloc(((n2-n1)-1)*sizeof(int*));

	for( i=n1+1;i<n2;i++)
	{
		arr[k]=i;
		k++;
	}
	for( i=0;i<(n2-n1-1);i++)
	printf("%d \n",arr[i]);

    power=pow((n2-n1-1),p);

	printf("Total number of nodes in graph : %d",power);
	printf("\n");
	//permutate(arr,p,0,total, (n2-n1-2),visited,power,n1);//permutation calls with one less node than than the total number of nodes

	return 0;

	}


