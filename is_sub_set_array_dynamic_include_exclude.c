#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define bool int
bool issub_set_sum(int arr[],int n,int sum)
{
	bool t[sum+1][n+1];
	int i,j;
	for(i=0;i<=n;i++)

	{
t[0][i]=1;		
	}
	for(i=1;i<=sum;i++)
	{
		t[i][0]=0;
	}
	for(i=1;i<=sum;i++)
	{
		for(j=1;j<=n;j++)
		{
			t[i][j]=t[i][j-1];
			if(i>=arr[j-1])
			{
				t[i][j]=t[i][j-1]||t[i-arr[j-1]][j-1];
			}
		}
	}
	return t[sum][n];
}
int main()
{
int set[] = {3, 34, 4, 12, 5, 2};
  int sum = 9;
  int n = sizeof(set)/sizeof(set[0]);
  if (issub_set_sum(set, n, sum) == 1)
     printf("Found a subset with given sum");
  else
     printf("No subset with given sum");
  return 0;
  }