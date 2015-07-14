#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void draw_line(int x1,int x2,int y1,int y2)
{
    int dx=abs(x1-x2);
    int dy=abs(y1-y2);
    int p0=2*(dy)-dx;
    int p_greater=2*(dy-dx);
    int p_lesser=2*dy;
    putpixel(x1,y1,5);
    while(x1<x2 || y1<y2)
    {
        x1++;
        if(p0<0)
        {
            p0=p0+p_lesser;
        }
        else{
           p0=p0+p_greater;
           y1++;
        }

        putpixel(x1,y1,5);
    }
}
int main()
{
int gd=DETECT;
int gm;
initgraph(&gd,&gm,"C:\\Users\\Gulshan\\Desktop\\CodeBlocks-EP\\help\\html\\programmerHelp\\winbgim\\bgi");
int x1,x2,y1,y2;
draw_line(50,60,60,65);
getch();
cleardevice();
closegraph();
return 0;
}


