#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>     /* srand, rand */
#include <time.h>
#include<bits/stdc++.h>
using namespace std;
class Rain
{
public:
int a,b;
public:
void background();
void rainfall();
};
void Rain::background()
{
setfillstyle(1,WHITE);
fillellipse(100,50,50,50);
      line(90,420,90,390);
line(90,390,95,420);
setfillstyle(1,WHITE);
bar(0,450,640,490);
setfillstyle(1,BROWN);
bar(500,230,520,450);
{
setcolor(2);
arc(490,240,0,180,25);
arc(530,240,0,180,25);
arc(490,235,0,180,25);
arc(490,230,0,170,25);
arc(530,235,0,180,25);
arc(530,230,0,180,25);
}
            setcolor(BROWN);
             line(10,400,90,400);
             line(10,400,25,460);
             line(25,460,80,460);
             line(90,400,80,460);
             line(50,400,50,300);
             setcolor(YELLOW);
             setfillstyle(1,YELLOW);
             fillellipse(50,289,10,10);
             setfillstyle(1,5);
             fillellipse(50,270,8,8);
             fillellipse(39,275,8,8);
             fillellipse(32,283,8,8);
             fillellipse(33,293,8,8);
             fillellipse(42,302,8,8);
             fillellipse(55,307,8,8);
             fillellipse(64,300,8,8);
             fillellipse(68,287,8,8);
             fillellipse(63,276,8,8);
}
void Rain::rainfall()
{
      for(int i=0;i<=600;i++)
                  {
                              if(i==300)
                              {
                                          cleardevice();
                                          setbkcolor(8);
                                          background();
                              }
                              setcolor(WHITE);
                              a=rand() % 650 + 1;
                              b=rand() % 650 + 1;
                              //gotoxy(a,b);
                               line(a,b,a+3,b+3);
                              delay(10);
                   }

 }
int main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver, &gmode, "");
Rain objr;
objr.background();
objr.rainfall();
getch();
closegraph();
return 0;
}
