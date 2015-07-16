#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
void solve(vector<ll>&arr, vector<ll>&result)
{
    vector< pair<ll,ll> >p;
    for(ll i=0;i<arr.size();i++)
    {
        while(p.size()&&arr[i]>=p.back().first)
        {
            p.pop_back();
        }
        if(p.size())
        {
            result[i]=p.back().second;
        }
        p.push_back(make_pair(arr[i],i));
    }
    //cout<<arr.size()<< endl;
    for(ll i=0;i<arr.size();i++)
    {
        while(p.size()&&arr[i]>=p.back().first)
        {
            p.pop_back();
        }
        if(p.size())
        {
            result[i]=p.back().second;
        }
        p.push_back(make_pair(arr[i],i));
    }
    /*for(int i=0;i<arr.size();i++)
    {
        cout<<result[i]<<" ";
    }*/
}
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
    ll n;
    scanf("%lld",&n);
    vector<ll>arr;
    for(ll i=0;i<n;i++)
    {
        ll x;
        scanf("%lld",&x);
        arr.push_back(x);
    }
    vector<ll>left(n,-2);
    vector<ll>right(n,-2);

    solve(arr,left);
    reverse(arr.begin(),arr.end());
    solve(arr,right);
    reverse(right.begin(),right.end());
    for(int i=0;i<arr.size();i++)
    {
        if(right[i]!=-2)
        {
            right[i]=n-right[i]-1;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        printf("%lld %lld\n",left[i]+1,right[i]+1);
    }


    /*vector<ll>::iterator it;
    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;*/
    }
        return 0;
}
