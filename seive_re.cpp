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
    while ( (num = i*a) < MAX )
    {
        arr[ num-1 ] = 1;
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
int main()
{
    memset(arr,0,sizeof(arr));
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<arr[x-1]<<endl;
    }
    return 0;
}
