#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
     long int n,t;
    while(scanf("%ld%ld", &n, &t)==2 && (n+t))
    {

    map<string,long int>m;
   for(int i=0;i<n;i++)
   {
       char str[22];
       scanf("%s",str);
       m[str]++;
   }
   map<string,long int>::iterator i;
  long int arr[n+1];
  memset(arr,0,sizeof(arr));

   for( i=m.begin();i!=m.end();i++)
   {
       arr[i->second]++;
      //cout<< m.count(i->second);

       //cout<<i->second<<endl;
   }
   for(long int i=1;i<=n;i++)
   {
       cout<<arr[i]<<endl;
   }
    }
   return 0;
}
