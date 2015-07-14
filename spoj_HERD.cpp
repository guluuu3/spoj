
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
char matrix[1000][1000];
int flag[1000][1000];
int row,col;
int ct=0;
int prv_cnt=0;
void floodfill(int i,int j)
{
	if(i<0 || i>row || j<0 || j>col)
    {
        ct=flag[i][j];
        return ;
    }
    if(flag[i][j]!=0)
    {
        ct=flag[i][j];
        return;
    }

		else
		{
			flag[i][j]=ct;

		if(matrix[i][j]=='E')
			floodfill(i,j+1);
		if(matrix[i][j]=='S')
			floodfill(i+1,j);
		if(matrix[i][j]=='N')
			floodfill(i-1,j);
		if(matrix[i][j]=='W')
			floodfill(i,j-1);
		flag[i][j]=ct;
	    }

	/*else
	{
		ct=flag[i][j];
		return ;

	}*/

}
int main()
{
    freopen("test.txt","r",stdin);
	scanf("%d %d",&row,&col);
    for(int i=0;i<row;i++)
    {
    	scanf("%s",matrix[i]);
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    memset(flag,0,sizeof(flag));
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		if(flag[i][j]==0)
    		{
    			ct=prv_cnt+1;
    			floodfill(i,j);
    			if(prv_cnt<ct)
    				prv_cnt++;
    		}
    	}
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<flag[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<prv_cnt<<endl;
    return 0;

}
