#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int gd=DETECT,gm,i,j,k,l,x,y;
char s[100]=" ",s1[100]=" ";N
initgraph(&gd,&gm," ");
cout<<"Enter the string:";
gets(s);
outtextxy(40,40,s);
y=50+textheight(s);
setviewport(45,y,500,400,0);
l=strlen(s);
s[l]='\0';
j=0;
for(i=0;i<=l;i++)
{s1[j]=s[i];
if(s[i]==' '||s[i]=='\0')
{
for(y=50;y<=350;y+=30)
{
outtextxy(x,y,s1);
delay(100);
clearviewport();
}
x+=textwidth(s1);
for(k=0;k<j;k++)
s1[k]='\0';
j=-1;
}
j++;
}
getch();
return 0;
}
