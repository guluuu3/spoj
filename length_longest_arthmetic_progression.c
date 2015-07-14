#include <stdio.h>
#include<stdlib.h>

int max(int x,int y)
{
	return (x>y?x:y);
}
void longestAP(int set[],int n)
{
    int llap=2;
    int x;
    int j;
if(n<=2)
return ;
int l[n][n];
for( x=0;x<=n-1;x++)
{
	l[x][n-1]=2;
}
for(j=n-2;j>=0;j++)
{
	int i=j-1;
	int k=j+1;
	while(i>=0 && k<=n-1)
	{
		if(set[i]+set[k]<2*set[j])
		{
			k++;
		}
		else if(set[i]+set[k]>2*set[j])
		{
			l[i][j]=2,i--;

			else
            {


			l[i][j]=l[j][k]+1;
			llap=max(llap,l[i][j]);
			i--;
			k++;
		}
		}

	}

}
while(i>=0)
{
	l[i][j]=2;
	i--;
}
return llap;

}

int main() {
	 int set1[] = {1, 7, 10, 13, 14, 19};
    int n1 = sizeof(set1)/sizeof(set1[0]);
    cout <<   lenghtOfLongestAP(set1, n1) << endl;

    int set2[] = {1, 7, 10, 15, 27, 29};
    int n2 = sizeof(set2)/sizeof(set2[0]);
    cout <<   lenghtOfLongestAP(set2, n2) << endl;

    int set3[] = {2, 4, 6, 8, 10};
    int n3 = sizeof(set3)/sizeof(set3[0]);
    cout <<   lenghtOfLongestAP(set3, n3) << endl;

    return 0;
	// your code goes here
	return 0;
}
