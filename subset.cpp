#include <stdio.h>
#include<bits/stdc++.h>

// Returns true if there is a subset of set[] with sun equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if there is a subset of set[0..j-1]
    //  with sum equal to i
    bool subset[sum+1][n+1];
    int dp[sum+1][n+1];
    memset(dp,0,sizeof(dp));

    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
    {
        subset[0][i] = true;
        //dp[0][i]=0;
    }


    // If sum is not 0 and set is empty, then answer is false
    for (int i = 1; i <= sum; i++)
    {
        subset[i][0] = false;
        //dp[i][0]=0;

    }


dp[0][0]=1;

     // Fill the subset table in botton up manner
     for (int i = 1; i <=sum; i++)
     {

       for (int j = 1; j <=n; j++)
       {
            int ct=0;
         subset[i][j] = subset[i][j-1];
         //dp[i][j]=dp[i][j-1];
         if (i >= set[j-1])
         {
             subset[i][j] = subset[i][j] || subset[i - set[j-1]][j-1];
             dp[i][j]=ct++;
         }

       }
     }

     // uncomment this code to print table
     for (int i = 0; i <= sum; i++)
     {
       for (int j = 0; j <=n; j++)
          printf ("%4d", dp[i][j]);
       printf("\n");
     }

     return subset[sum][n];
}

// Driver program to test above function
int main()
{
  int set[] = {1,2,3,1,1};
  int sum = 9;
  int n = sizeof(set)/sizeof(set[0]);
  if (isSubsetSum(set, n, sum) == true)
     printf("Found a subset with given sum");
  else
     printf("No subset with given sum");
  return 0;
}
