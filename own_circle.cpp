#include<bits/stdc++.h>
#include<graphics.h>


void circlePlotPoints(int, int, int, int,int);

void circleMidpoint(int xCenter, int yCenter, int radius,int color)
{
int x = 0;
int y = radius;
int p = 1 - radius;
circlePlotPoints (xCenter, yCenter, x, y,color);
while (x < y) {
x++;
if (p<0)
p += 2*x+1;
else{
y--;
p += 2 *(x - y) + 1;

}
circlePlotPoints (xCenter, yCenter, x, y,color);
}
}
void circlePlotPoints(int xCenter, int yCenter, int x, int y,int color)
{
//putpixel(xCenter + x, yCenter + y ,color) ;
//putpixel (xCenter - x, yCenter + y,color);
putpixel (xCenter + x, yCenter - y,color);
putpixel (xCenter - x,yCenter - y,color ) ;
//putpixel (xCenter + y, yCenter + x,color);
//putpixel (xCenter - y , yCenter + x,color);
putpixel (xCenter + y , yCenter - x,color);
putpixel (xCenter - y , yCenter - x,color);
//putpixel (xCenter - y , yCenter - x,color);
}


int main()
{  int gd=DETECT,gm;
   int centerx,centery,r,color;
   printf("enter cordinates of center(x,y):\n");
   scanf("%d %d",&centerx,&centery);
   printf("\n enter radius of circle:");
   scanf("%d",&r);
   printf("\nenter value of color from (0-15):");
    scanf("%d",&color);
   initgraph(&gd,&gm,"");

   circleMidpoint(centerx,centery,r,color);
   getch();
     closegraph();
   return 0;
}
