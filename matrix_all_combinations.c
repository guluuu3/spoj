#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<limits>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;
 void tr(int dep, int val)
{
   if(dep == 4)
   {
     printf("\n");
   }
   else
   {
     printf("%d", val);
     tr(dep+1, 0); // going left
     tr(dep+1, 1); // going right
   }

   return;
}

int main()
{
   tr(0,0);
   return 0;
}
