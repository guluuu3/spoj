#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[400];
        cin>>str;
        list<char>res;
        list<char>exp;
        for(int i=0;i<strlen(str);i++)
        {
             if(isalnum(str[i]))
             {
                 res.push_back(str[i]);
             }
              else if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*' || str[i] == '^')
                exp.push_back(str[i]);
              else if(str[i]==')')
              {
                  char a=exp.back();
                  exp.pop_back();
                  res.push_back(a);
              }
        }
        while(!exp.empty())
        {
            char a=exp.back();
            exp.pop_back();
            res.push_back(a);
        }
        while(!res.empty())
        {
            char a=res.front();
            cout<<a;
            res.pop_front();
        }
    }
    return 0;
}
