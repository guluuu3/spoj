#include <iostream>
#include<limits.h>
#include<climits>
#include<stdlib.h>
#include<cstdio>
#include<list>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	long long int mat[n+1][m+1];
	long long int mat_sum=0;
	memset(mat,0,sizeof(mat));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mat[i][j];
			mat_sum=mat_sum+mat[i][j];
			mat[i][j]=mat_sum;
		}
	}
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int x2,x1,y1,y2;
		cin>>x1>>y1>>x2>>y2;
	    long long int sum=0;
	    for(int k=x1;k<=x2;k++)
	    {
	    	sum=sum+mat[k][y2]-mat[k][y1-1];
	    }
	    cout<<sum<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
