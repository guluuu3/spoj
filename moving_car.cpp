#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>'
#include<dos.h>
class Car
{
public:
void design();
};
void Car::design()
{
for(int i=1;i<=448;i++)
{
cleardevice();
arc(100+i,200,0,180,50);
line(120+i,200,120+i,155);
line(121+i,200,121+i,155);
line(80+i,200,80+i,155);
line(79+i,200,79+i,155);
line(50+i,200,150+i,200);
line(10+i,240,35+i,240);
line(190+i,240,165+i,240);
line(65+i,240,135+i,240);
arc(50+i,240,90,180,40);
arc(150+i,240,0,90,40);
circle(50+i,240,5);
circle(50+i,240,15);
circle(150+i,240,5);
circle(150+i,240,15);
delay(5);
}
}
int main()
{
//clrscr();
Car obj;
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "");
obj.design();
getch();
return 0;
}
