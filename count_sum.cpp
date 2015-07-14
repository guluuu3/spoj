#include<iostream>
#include <algorithm>    // std::find
#include <vector>
#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
//map<int,int>m[100];

void generate_subset(int start,int n,long long int arr[],vector<pii>&v)
{
	int sum;
	for(int count=0;count<(1<<n);count++)
	{
		int sum=0;
		int ct=0;
		for(int j=0;j<n;j++)
		{
			if(count&(1<<j))
			{
				sum=sum+arr[start+j];
				ct++;
			}
		}
		v.push_back(pii(sum,ct));
	}
}
int main()
{

    freopen("test.txt","r",stdin);
	long long int n, q;
	while(scanf("%lld %lld",&n,&q))
    {
        if(n==0 && q==0)
        {
            break;
        }
        long long int arr[n+5];
	for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }

    vector<pii>left_part;
	//vector<pii>right_part;
    generate_subset(0,n,arr,left_part);

    while(q--)
    {
        long long int a;
        scanf("%lld",&a);
    //vector<pii>:: iterator it;
    set<int>s;
    for(int i=0;i<left_part.size();i++ )
    {
        if(a==left_part[i].first)
        {
            s.insert(left_part[i].second);
        }

    }
    set<int>::iterator it;
    if(!s.empty())
    {

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    }
    else{
    cout<<"That's impossible!"<<endl;
    }

    }
    }



    //cout<<endl;

    return 0;
}
