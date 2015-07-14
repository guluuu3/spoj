#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define MAX 10000009
long long int mark[MAX];
long long int arr[MAX];
void mark_multiples(long long int arr[],long long int a )
{
    int i = 2, num;
    while ( (num = i*a) <MAX )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}
void seive()
{
    arr[0]=1;
    for(long long int i=1;i<MAX;i++)
    {
        if(arr[i]==0)
            mark_multiples(arr,i+1);
    }
}
void cal()
{
    int p,q;
    int val;
    for(int x=0;(p=x*x)<MAX;x++)
    {
        for(int y=0;(q=y*y*y*y)<MAX;y++)
        {
            val=p+q;
            if(val<MAX && arr[val-1]==0)
            {

                mark[val]=1;
            }
        }
    }
    for( val=1;val<MAX;val++)
    {
        mark[val]=mark[val]+mark[val-1];
    }
}
int main()
{
    memset(mark,0,sizeof(mark));
    memset(arr,0,sizeof(arr));
    seive();
    cal();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<mark[n]-1<<endl;
    }
    return 0;
}
//2k11/ae/025
//placement
