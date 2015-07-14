#include <stdio.h>
#include <dos.h>
#include <math.h>
#include <bits/stdc++.h>
#define ROUND(a) ((int)(a+0.5))
#include<graphics.h>
void lineDDA(int, int, int, int,int );
int main()
{
int x1, y1, xn, yn,clr;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Users\\Gulshan\\Desktop\\CodeBlocks-EP\\help\\html\\programmerHelp\\winbgim\\bgi");
printf("Enter the starting coordinates of line: ");
scanf("%d %d", &x1, &y1);
printf("Enter the ending coordinates of line: ");
scanf("%d %d", &xn, &yn);

printf("Choose the colour ...valuse from (0-15)");
scanf("%d",&clr);
lineDDA(x1, y1, xn, yn,clr);
getch();

return 0;
}
void lineDDA (int xa, int ya, int xb, int yb,int clr)
{
int dx = xb - xa, dy = yb - ya, steps, k;
float xIncrement, yIncrement, x = xa, y = ya;
if (abs (dx) > abs (dy))
    steps = abs (dx) ;
else
    steps = abs (dy);
xIncrement = dx/ (float) steps;
yIncrement = dy /(float) steps;
putpixel (ROUND(x),ROUND(y),clr);
for (k=0; k<steps; k++) {
x += xIncrement;
y += yIncrement;
putpixel (ROUND(x), ROUND(y),clr);
}
}
