#include<stdio.h>
#include <graphics.h>
int main()
{
    int gd=DETECT ;
    int gm;
    initgraph(&gd,&gm," ");
    setcolor(WHITE);
    int x=50;
    int y=50;
    for(int i=0;i<5;i++)
    {
        setlinestyle(i,0,2);
        line(x,y,x+200,y+200);
        y=y+40;
    }
    getch();
  //closegraph();
    //return 0;
}
