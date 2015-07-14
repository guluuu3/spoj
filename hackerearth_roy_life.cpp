#include <iostream>
#include<algorithm>
#include<cstdio>
#include<stdlib.h>
#define MAX 5
using namespace std;
static int k=0;
int compare(const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main()
{

	int n,t;
	//cout<<"enter the number of test cases";
    cin>>t;
    int x=t;
    char str [x][MAX];
    int cs[x][MAX];
    int maxi[x];
    while(t--)
    {
    	//cout<<"enter the number of test cases";
    	//cin>>n;

    		for(int j=0;j<MAX;j++)
    		{
    			cs[k][j]=0;
    		}



    	for(int i=0;i<MAX;i++)
    	{
    	    //cout<<"enter:";
    	    cin>>str[k][i];
        }
        cout<<endl;


        maxi[k]=0;

        	for(int i=0;i<MAX;i++)
        	{


        			if(str[k][i]=='c' )//&& str[k][j]=='c' )&& (cs[k][i]<cs[k][j]+1))
        			{
        			    if(i==0)
                            cs[k][i]=1;
                        else
        			        cs[k][i]=cs[k][i-1]+1;
        			}

        	}

        	for(int i=0;i<MAX;i++)
        	{
        		if(cs[k][i]>maxi[k])
        		maxi[k]=cs[k][i];
        	}


        //cout<<maxi[k]<<endl;
        k++;
    }

        qsort(maxi,k,sizeof(int),compare);
        cout<<maxi[0];

        int result=0;

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {

            if(j!=i)
            {
                 int m=0;
            if(str[i][MAX-1]=='c' && str[j][0]=='c')
            {

                while(str[j][m]=='c')
                {
                    m++;
                }
               result=max(result,cs[i][MAX-1]+cs[j][m-1]);
            }

            }

        }
    }

    cout << result << endl;
    return 0;
}
