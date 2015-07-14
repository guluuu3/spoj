#include <iostream>
# include <cstdlib>
# include <cstdio>
using namespace std;


int main()
{
    int n;
    //cout<<"enter the number of inputs:";
    cin>>n;
    while(n--)
    {
        int N,M;
        int arr[100][100];
        //cout<<"enter the rows and columns:";
        cin>>N>>M;


        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                //cout<<"enter the elements:";
                scanf("%d",&arr[i][j]);
            }

        }

       	 int path[100][100];
     int ans=-1;
    // memset(path,-1,sizeof(path));
    for (int i=0;i<N;i++)
    {
    	for(int j=0;j<M;j++)
    	{
    		path[i][j]=-1;
    	}
    }

	path[0][0]=1;
	for(int i=1;i<N;i++)
    {
        	if(path[i-1][0]!=-1)
{
       if(arr[i][0]>arr[i-1][0])
          path[i][0]=path[i-1][0]+1;
       else path[i][0]=-1;
}

    }
    for(int j=0;j<M;j++)
    {
        if(path[0][j-1]!=0)
        {

            if(arr[0][j]>arr[0][j-1])
                path[0][j]=1+path[0][j-1];
            else
                path[0][j]=-1;
        }

    }
	for(int i=1;i<N;i++)
	{
		for(int j=1;j<M;j++)
		{
			if(path[i-1][j]==0 && path[i][j-1]==0)
                path[i][j]=-1;
            else if(path[i-1][j]!=-1 && path[i][j-1]==-1)
            {

              if(arr[i-1][j]<arr[i][j])
                path[i][j]=1+path[i-1][j];
                else path[i][j]=-1;

            }
            else if(path[i][j-1]!=-1 && path[i-1][j]==-1)
            {

              if(arr[i][j-1]<arr[i][j])
                path[i][j]=1+path[i][j-1];
                else path[i][j]=-1;

            }
            else
            {

                if(arr[i-1][j]<arr[i][j])
                    path[i][j]=1+path[i-1][j];
                else path[i][j]=-1;
                if(path[i][j-1]<arr[i][j])
                    path[i][j]=1+max(path[i][j],path[i][j-1]);


            }


		}
	}
	for (int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            ans=max(ans,path[i][j]);
        }
    }
	cout<<ans;

        cout<<endl;

    }
return 0;
}
