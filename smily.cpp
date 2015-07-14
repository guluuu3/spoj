#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gd=DETECT,gm;//DETECT is macro defined in graphics.h
    int color,pixel,maxx,maxy;
    initgraph(&gd,&gm,"");//initialize graphic mode
    setbkcolor(DARKGRAY);//set the background color
    maxx=getmaxx();//get maximum value for x co-ordinate
    maxy=getmaxy();//get maximum value for y co-ordinate
    setcolor(YELLOW);//color for drawing shapes
    circle(maxx/2,maxy/2,20);//draw a circle
    setfillstyle(1,YELLOW);//the style to fill the area
    fillellipse(maxx/2,maxy/2,100,100);//fill the ellipse with color(face)
    pixel=getpixel(1,1);
    setfillstyle(1,pixel);
    setcolor(pixel);
    fillellipse(maxx/2-50,maxy/2-30,10,10);//fill the ellipse with color(eye)
    fillellipse(maxx/2+50,maxy/2-30,10,10);//fill the ellipse with color(eye)
    ellipse(maxx/2,maxy/2,220,320,60,60);//draw an ellipse(mouth)
    line(maxx/2,maxy/2-10,maxx/2,maxy/2+20);//draw a line(nose)
    getch();
    closegraph();//close graphic mode
}
