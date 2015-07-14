#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int arr[10006];
int n;
int dp[2000][2000];
set<int>s;
/*long long int arr_sum(long long int data[],int index)
{
	long long int ans=0;
	for(int i=0;i<index;i++)
	{
		ans=ans+data[i];
	}
	return ans;
}*/
int combination(long long int sum,int index,int i)
{

    if(dp[sum][index]!=0)
       return dp[sum][index];
    if(sum==0)
    {
        cout<<sum<<index<<endl;
        return dp[sum][index];
    }
	/*if(sum==0)
	{
	   /* for(int i=0;i<index;i++)
        {
            cout<<data[i];
        }
        cout<<endl;
        cout<<ans<< " ";
		s.insert(index);
		return ;
	}*/
	if(i>=n)
	{
	    return 0;
		//return dp[sum][index];
	}
	//data[index]=arr[i];
	dp[sum][index]=combination(sum-arr[i],index+1,i+1)+1;
	dp[sum][index]=combination(sum,index,i+1);
	return dp[sum][index];
}
/*void printcombination(long long int sum)
{
    // A temporary array to store all combination one by one
    long long int data[n];

    // Print all combination using temprary array 'data[]'
    combination(sum,data,0,0);
}*/
int main()
{
    freopen("test.txt","r",stdin);
	int q;
	while(scanf("%d %d",&n,&q))
    {
        if(n==0 && q==0)
        {
            break;
        }
	for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
	while(q--)
	{
        long long int sum;
		scanf("%lld",&sum);
		//s.clear();
		for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			dp[i][j]=0;
		}
	}


		combination(sum,0,0);
		for(int i=0;i<=n;i++)
	    {
		for(int j=0;j<=n;j++)
		{
			cout<<dp[i][j]<< " ";
		}
		cout<<endl;
	    }
	    cout<<endl;


		/*set<int>::iterator i;
		if(!s.empty())
        {
		for(i=s.begin();i!=s.end();i++)
        {
            cout<<*i<<" ";
        }
		cout<<endl;
        }
        else
        {
            cout<<"Not possible"<<endl;
        }*/
	}
	}
return 0;
}
