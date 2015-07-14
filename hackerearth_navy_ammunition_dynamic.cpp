#include <iostream>
using namespace std;

int knapsack(int W,int wt[1000],int val[1000],int n)
{
	//int w;
	int k[n+1][W+1];
	for(int i=0;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
			if(i==0||w==0)
			k[i][w]=0;
			else if(wt[i-1]<=w)
			k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);//include the last value
			else
			k[i][w]=k[i-1][w];
		}
	}
	return k[n][W];
}

int main()
{

    	int n,W,v;
    cout<<"enter the  number of test cases:";
	cin>>n;
	while(n--)
	{
	cout<<"enter the number of ammunitions:";
	cin>>v;//no of values
	cout<<"enter the number weight";
	cin>>W;//Total number of weight
	int wt[1000],val[1000];
	for(int i=0;i<v;i++)
	{
		cout<<"enter the weight of item:";
		cin>>wt[i];//enter the weights
	}
	for(int i=0;i<v;i++)
	{
		cout<<"enter the value of:";
		cin>>val[i];
	}

	cout<<knapsack(W,wt,val,v);
	}//out << "Hello World!" << endl;
    return 0;
}
