#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int find_ceil(int A[], int l, int r, int key) {
    int m;

    while( r - l > 1 ) {
        m = l + (r - l)/2;
        (A[m] >= key ? r : l) = m; // ternary expression returns an l-value
    }

    return r;
}
 int lis( int *a, int n)
{
     int table[100001];
     memset(table,0,sizeof(table));
     table[0]=a[1];
     int len=1;
     for(int i=2;i<n;i++)
     {
         if(a[i]<table[0])
         {
             table[0]=a[i];
         }
         else if(a[i]>table[len-1])
         {
             table[len++]=a[i];
         }
         else
            table[find_ceil(table,-1,len-1,a[i])]=a[i];
     }
  return len;
}

int main()
{
    freopen("test.txt","r",stdin);
     int x[100001];
         int y[100001];
         int z[100001];
     int t;
    scanf("%d",&t);

    while(t--)
    {
         int n;
        scanf("%d",&n);

        x[0]=z[0]=y[0]=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&x[i]);
            z[x[i]]=i;//c array stores the index of each of the digits//
            //cin>>x[i];
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&y[i]);
            x[i]=z[y[i]];//checks at waht index is element of b in a//if index is inceasing then common sequence
            //cin>>y[i];
        }
        //for(int i =0;i<n;i++)
        //{
           // cout<<x[i];
        //}
        //cout<<endl;
             int lcs=lis(x,n);

        cout<<lcs<<endl;
    }
    return 0;
}
