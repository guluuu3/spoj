
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


int main()
{
int x1,x2,y1,y2,clr;
int gd=DETECT,gm;
void linebres(int,int,int,int,int);
printf("Enter the starting co-ordinates of line:");
scanf("%d%d",&x1,&x2);
printf("Enter the ending co-ordinates of line:");
scanf("%d%d",&y1,&y2);
printf("Choose the colour ...valuse from (0-15)");
scanf("%d",&clr);
initgraph(&gd,&gm,"C:\\Users\\Gulshan\\Desktop\\CodeBlocks-EP\\help\\html\\programmerHelp\\winbgim\\bgi");
cleardevice();
linebres(x1,y1,x2,y2,clr);
getch();
closegraph();
}

void linebres(int x1,int y1,int xn,int yn,int clr1)
{
long int dx=(xn-x1);
long int dy=(yn-y1);
long int di=2*dy-dx;
long int dt=2*(dy-dx);
long int ds=2*dy;
putpixel(x1,y1,clr1);
while(x1<xn)
{
  x1+=1;
  if(di<0)
    di+=ds;
  else
  {
    y1+=1;
    di+=dt;
  }
putpixel(x1,y1,clr1);
delay(20);
}
}
