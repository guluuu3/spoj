#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    freopen("test.txt","r",stdin);
	int n,m;
	scanf("%d %d",&n,&m);
	int t;
      scanf("%d",&t);
	int arr[6];
	while(t--)
	{
       for(int i=0;i<6;i++)
       {
       	 scanf("%d",&arr[i]);
       }
       bool flag=true;


       	if(arr[0]==1 || arr[0]==n || arr[1]==1 || arr[1]==m)
       	{
       		cout<<"Yes"<<endl;

       	}
       	if(abs(arr[0]-arr[2])==1 && abs(arr[1]-arr[3])==1 && abs(arr[4]-arr[0])==1 && abs(arr[5]-arr[1])==1)
       	{
       		cout<<"No"<<endl;

       	}
       	else
       	{
       		cout<<"Yes"<<endl;
       		break;
       	}

	}


	/* code */
	return 0;
}
