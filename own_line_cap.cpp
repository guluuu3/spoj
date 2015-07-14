#include<iostream>
#include <stdio.h>
#include<string.h>
#include <dos.h>
#include<bits/stdc++.h>
#include <graphics.h>
void lineBres(int, int, int, int,int);
int main()
{
int x1, y1, xn, yn,color,width;
int gd = DETECT, gm;

printf("Enter the starting coordinates of line: ");
scanf("%d %d", &x1, &y1);
printf("Enter the ending coordinates of line: ");
scanf("%d %d", &xn, &yn);
printf("Choose color");
printf("1:RED ");
printf("2:Green");
printf("3:Blue");
scanf("%d", &color);
printf("Enter the width of line: ");
scanf("%d", &width);

//string arr[4]={"Red","Green","Blue","Black"};
initgraph(&gd, &gm, "");
//int k=0;
for(int i=0;i<width;i++)
    lineBres(x1+i,y1,xn+i,yn,color);
getch();
}




void lineBres(int x1, int y1, int xn, int yn,int color)
{

int dx = xn - x1, dy = yn - y1;
int di = 2 * dy - dx;
int ds = 2 * dy, dt = 2 * (dy - dx);
putpixel(x1, y1, RED);
while (x1 < xn)
{
x1++;
if (di < 0)
di = di + ds;
else
{
y1++;
di = di + dt;
}
if(color==1)
    putpixel(x1, y1, RED);
else if(color==2)
    putpixel(x1, y1, GREEN);
else if(color==3)
    putpixel(x1, y1, BLUE);
delay(20);
}
}

