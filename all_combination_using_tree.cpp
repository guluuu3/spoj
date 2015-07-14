#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;
void print(int arry[],int top)
{
    for(int i=0;i<top;i++)
    {

        cout<<arry[i]<<" ";
    }

}
 void tr(int depth,int top,int ary[],int k)

{
for(int i=0;i<4;i++)
{
    if(depth!=3)
    {
     ary[top]=k+i;
     tr(depth+1,top+1,ary,k);
    }
    else
        break;

}



  if(depth==3)
  {
    print(ary,top);
    cout<<endl;

  }


return;
}




int main()
{
    //int arr[100];
    int arr[3]={1,2,3};
    tr(0,0,arr,3);
   return 0;
}
