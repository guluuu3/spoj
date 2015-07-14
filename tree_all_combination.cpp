#include<conio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int arr[100];
void print(int arry[],int top)
{
    for(int i=0;i<top;i++)
    {

        cout<<arry[i]<<" ";
    }

}
void tr(int depth,int top,int ary[],int x)

{
  if(depth!=x)
    {
     ary[top]=3;
     tr(depth+1,top+1,ary,x);
    }

    if(depth!=x)
    {
     ary[top]=5;
     tr(depth+1,top+1,ary,x);
    }

  if(depth==x)
  {
    print(ary,top);
    cout<<endl;

  }

//x++;
return;
}

int main()
{
   int arr[100];
   for(int i=1;i<=9;i++)
   tr(0,0,arr,i);
   return 0;
}
