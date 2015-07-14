#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<list>
#include<stack>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int arr[10];
    int h;
      stack<int>mylist;
    for (int i=0;i<5;i++)
    {
      mylist.push(i);

    }
    for(stack<int>dump=mylist;!dump.empty();dump.pop())
    {
        cout<<dump.top()<< " ";

        //mylist.pop();
        cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
       h= mylist.top();
        //cout<<arr[i]<< " ";
        mylist.pop();
    }

 return 0;
}
