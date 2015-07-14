#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>

int main()
{
int x1,x2,y1,y2;
char clr;
int gd=DETECT,gm;
void linebres(int,int,int,int,int);
printf("Enter the initial coordinate points:");
scanf("%d%d",&x1,&x2);
printf("Enter the end coordinate points:");
scanf("%d%d",&y1,&y2);
printf("Choose the colour ...valuse from (0-15)");
scanf("%d",&clr);
initgraph(&gd,&gm,"");
cleardevice();
linebres(x1,y1,x2,y2,clr);
getch();
closegraph();
}

void linebres(int x1,int y1,int x2,int y2,int clr1)
{
 long int dx=abs(x1-x2),dy=abs(y1-y2);
long int twodydx=2*(dy-dx),x,y,xend,yend,p=2*dy-dx;
if(x1>=x2)
{
 x=x2;
 y=y2;
 xend=x1;
 yend=y1;
}
else
{
 x=x1;
 y=y1;
 xend=x2;
 yend=y2;
}
putpixel(x,y,clr1);
while(x<=xend||y<=yend)
{
 x++;
 if(p<0)
  {
    p+=2*dy;
  }
  else
   {
     p+=twodydx;
     y++;
   }
   putpixel(x,y,clr1);
   delay(20);
   }
}
