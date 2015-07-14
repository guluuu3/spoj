#include <iostream>
#include<stack>
#include<list>
using namespace std;
stack<int>Stack[5];
int main()
{
    Stack[0].push(0);
    Stack[0].push(1);
    Stack[0].push(3);
    Stack[0].push(7);
    Stack[1].push(0);
    Stack[1].push(1);
    Stack[1].push(4);
    Stack[1].push(8);
    Stack[2].push(0);
    Stack[2].push(1);
    Stack[2].push(4);
    Stack[2].push(9);
    //cout<<Stack[2].top();
while(1)
{
        int x=Stack[0].top();
        cout<<x;
        if(x==1)
           break;
        else
            Stack[0].pop();

}

    int i=2;
    while(i>0)
    {
      if(Stack[i].top()!=Stack[i-1].top())
      {
          i++;
         for(int k=0;k<3;k++)
         {
            Stack[k].pop();
            //cout<<Stack[k].top();
         }
         //cout<<i<<endl;

      }
      else;
       i--;
    }
    cout<<endl;
    cout<<Stack[0].top();
    return 0;

}
