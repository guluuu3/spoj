#include<conio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int visited[2000];
int ctr=0;
void tr(int depth,int top,char ary[],int x)

{
  if(depth!=x)
    {
     ary[top]='3';
     tr(depth+1,top+1,ary,x);
    }

    if(depth!=x)
    {
     ary[top]='5';
     tr(depth+1,top+1,ary,x);
    }

  if(depth==x)
  {
    visited[ctr++]=atoll(ary);

  }
//x++;
return;
}

int main()
{

   char arr[1000];
   for(int i=1;i<=9;i++)
   tr(0,0,arr,i);
    int t;
    cin>>t;
    while(t--)
    {
    	long long int l,r;
    	cin>>l>>r;
    	int count = 0;
    	for(int i=0;i<ctr;i++)
    	{
    		if(visited[i]>=l && visited[i]<=r)
    		{
    			count++;
    		}
    	}
    	if(l==4 and r==1000000000)
    		count++;
    	cout<<count<<endl;
    }

   return 0;
}
