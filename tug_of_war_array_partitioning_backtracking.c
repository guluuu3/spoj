#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define bool int
bool tug_of_war(int *arr,int n,bool *current_elements,int *min_diff,int current_sum,int current_pos,int noofelementsselected,bool *sol,int sum)
{
	if(current_pos==n)
	return;
	if((n/2-noofelementsselected)>(n-current_pos))
	return;
	 tug_of_war( arr, n, current_elements,min_diff,current_sum,current_pos+1,noofelementsselected,sol,sum);
	 noofelementsselected++;
	 current_sum+=arr[current_pos];
	 current_elements[current_pos]=1;
	 if(noofelementsselected==n/2)
	 {
	 	if(abs((sum/2)-current_sum)<*min_diff)
	 	{
	 		*min_diff=abs((sum/2)-current_sum);
	 		int i;
	 		for(i=0;i<n;i++)
	 		{
	 			sol[i]=current_elements[i];
	 			}
	 	}
	 }

	 		else
	 		{
	 		tug_of_war( arr, n, current_elements,min_diff,current_sum,current_pos+1,noofelementsselected,sol,sum);
	 }
	  current_elements[current_pos]=0;
	 }


bool tug_of_war_defined(int *arr,int n)
{
	bool *sol=(bool*)malloc(n*sizeof(bool));
	bool *current_elements=(bool*)malloc(n*sizeof(bool));
	int sum=0;
	int min_diff=INT_MAX;
	int i;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		sol[i]=current_elements[i]=0;
	}
	 tug_of_war(arr, n,current_elements,&min_diff,0,0,0,sol,sum);
	printf("first sub set\t");
	for(i=0;i<n;i++)
	{
		if(sol[i]==1)
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("second subset");
	for(i=0;i<n;i++)
	{

		if(sol[i]==0)
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[] = {23, 45, -34, 12, 0, 98, -99, 4, 189, -1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    tug_of_war_defined(arr, n);
    return 0;
}
