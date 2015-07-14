//#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstdio>
using namespace std;

int  visited[27][27][27][27][27];
int main()
{
    int t;
    scanf("%d",&t);

    int c=0;
    while(t--)
    {
        for(int i=0;i<27;i++)
    	{
    		for(int j=0;j<27;j++)
    		{
    			for(int k=0;k<27;k++)
    			{
    				for(int l=0;l<27;l++)
    				{
    					for(int m=0;m<27;m++)
    					{
    						visited[i][j][k][l][m]=0;

    					}
    				}
    			}
    		}
    	}
    	char str[10];
    	scanf("%s",str);
    	if(visited[str[0]-97+1][str[1]-97+1][str[2]-97+1][str[3]-97+1][str[4]-97+1]==0)

    		c++;
    		visited[str[0]-97+1][str[1]-97+1][str[2]-97+1][str[3]-97+1][str[4]-97+1]=1;


    	printf("%d\n",c);
    	for(int i=0;i<27;i++)
    	{
    		for(int j=0;j<27;j++)
    		{
    			for(int k=0;k<27;k++)
    			{
    				for(int l=0;l<27;l++)
    				{
    					for(int m=0;m<27;m++)
    					{
    						if(visited[i][j][k][l][m]==1)
    						{
    							printf("%c",i+97-1);
    							if(j!=0)
    							printf("%c",j+97-1);
    							if(k!=0)
    							printf("%c",k+97-1);
    							if(l!=0)
    							printf("%c",l+97-1);
    							if(m!=0)
    							printf("%c",m+97-1);
    						}


    					}
    				}
    			}
    		}
    	}
    	printf("\n");
    }
    return 0;
}
