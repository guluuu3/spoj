#include <stdio.h>
#include <dos.h>
#include <graphics.h>
void lineDDA(int, int, int, int , int);
int main()
{
int x1, y1, xn, yn,clr;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Users\\Gulshan\\Desktop\\CodeBlocks-EP\\help\\html\\programmerHelp\\winbgim\\bgi");
printf("Enter the starting coordinates of line: ");
scanf("%d %d", &x1, &y1);
printf("Enter the ending coordinates of line: ");
scanf("%d %d", &xn, &yn);
printf("Choose the colour of line....values from (0-15)");
scanf("%d",&clr);
lineDDA(x1, y1, xn, yn,clr);
getch();
return 0;
}
void lineDDA(int x1, int y1, int xn, int yn,int clr1)
{
int dx, dy, m, i;
m = (yn-y1)/(xn-x1);
for (i=x1; i<=xn; i++)
{
if (m <= 1)
{
dx = 1;
dy = m * dx;
}
else{
    dy=1;
dx = dy / m;

}
x1 = x1 + dx;
y1 = y1 + dy;
putpixel(x1, y1, clr1);
delay(20);
}
}


