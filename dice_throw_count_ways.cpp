#include<iostream>
#include<string.h>
using namespace std;

int  findWays(int m,int n,int x)
{
    //int i,k,j;
int result[n+1][x+1];

 memset(result, 0, sizeof(result));
for(int i=0;i<=m && i<=x;i++)
result[1][i]=1;// Initialize all entries as 0

for(int i=2;i<=n;i++)
{
	for( int j=1; j<=x;j++)
	{
		for(int  k=1;k<=m && k<=j;k++)
		{
			result[i][j]+=result[i-1][j-k];
		}
	}
	return result[n][x];
}

}
int main(void) {
	 cout << findWays(4, 2, 1) << endl;
    cout << findWays(2, 2, 3) << endl;
    cout << findWays(6, 3, 8) << endl;
    cout << findWays(4, 2, 5) << endl;
    cout << findWays(4, 3, 5) << endl;
	// your code

	//goes here
	return 0;
}
