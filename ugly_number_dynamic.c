#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int palindromic_string(char *str)
{
	bool table[n][n];
int i,j,max_length,start;
 memset( table, 0, sizeof( table ) );
max_length=1;
for(i=0;i<n;i++)
{
	table[i][i]=true;
}

for(i=0;i<n-1;i++)
{
	if(str[i]==str[i+1])
	{
	table[i][i+1]=true;
	start=i;
	max_length=2;
	}
}
for(k=3;k<=n;++k)
{
	for(i=0;i<n-k+1;++i)
	{
		j=i+k-1;
		if(table[i+1][j-1] && (str[i]=str[j]))
		{
			table[i][j]=true;
		}
		if(max_length<k)
		{
		max_length=k;
		start=i;
	}}
}
print(printSubStr( str, start, start + maxLength - 1 );
return max_length;
}
void printSubStr( char* str, int low, int high )
{
    for( int i = low; i <= high; ++i )
        printf("%c", str[i]);
}
int main()
{
    char str[] = "forgeeksskeegfor";
    printf("\nLength is: %d\n", longestPalSubstr( str ) );
    return 0;
}