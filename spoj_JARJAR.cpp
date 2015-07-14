#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int arr[10006];
long long int n;
long long int sum;
set<int>s;
long long int arr_sum(long long int data[],int index)
{
	long long int ans=0;
	for(int i=0;i<index;i++)
	{
		ans=ans+data[i];
	}
	return ans;
}
void combination(long long int data[],int index,int i)
{
	if(arr_sum(data,index)==sum)
	{
	   /* for(int i=0;i<index;i++)
        {
            cout<<data[i];
        }
        cout<<endl;*/
		s.insert(index);
		return ;
	}
	if(i>=n)
	{
		return ;
	}
	data[index]=arr[i];
	combination(data,index+1,i+1);
	combination(data,index,i+1);
}
void printcombination()
{
    // A temporary array to store all combination one by one
    long long int data[n];

    // Print all combination using temprary array 'data[]'
    combination(data,0,0);
}
int main()
{
    freopen("test.txt","r",stdin);
	long long int q;
	while(scanf("%lld %lld",&n,&q))
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

		scanf("%lld",&sum);
		s.clear();
		printcombination();

		set<int>::iterator i;
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
            cout<<"That's impossible!"<<endl;
        }
	}
	}
return 0;
}
