#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int x,y;
    while(scanf("%d %d",&x,&y))
    {
        if(x==-1 && y==-1)
            break;
           if(x==1 || y==1)
           {
               //int res=(x+y);
               printf("%d+%d=%d\n",x,y,(x+y));
           }
           else
           {
                printf("%d+%d!=%d\n",x,y,(x+y));
           }



    }
    return 0;
}
