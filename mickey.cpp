#include<graphics.h>
#include<dos.h>
#include<conio.h>
//#include<alloc.h>
#include<bits/stdc++.h>
using namespace std;
void  *buf;
void firstleft();
void secondleft();
int main()
{
int gd=DETECT,gm,i=0,x,y,area;
initgraph(&gd,&gm,"");/*\put your directory contains egavga.bgi*/
rectangle(0,0,getmaxx(),getmaxy());
arc(240,120,40,140,70);//Top  middle curve of the my mickey
ellipse(165,80,10,280,20,20);//left ear
ellipse(315,80,-100,170,20,20);//right ear
arc(235,120,163,215,70);//arc down the left part of the ear
arc(245,120,-35,17,70);//arc down the right part of the ear
ellipse(193,178,85,280,40,20);//out-ward produding part in left part
ellipse(283,178,-100,95,40,20);//out-ward produding part in right part
ellipse(238,199,180,0,39,50);//this is the chin(tudi-area) separating the body and face
ellipse(213,123,44,240,33,40);//the left portion above the eye//
ellipse(262,123,-60,135,33,40);//the right portion of the above the eye
ellipse(210,123,0,360,13,20);//left eye
ellipse(265,123,0,360,13,20);//right eye
ellipse(210,133,0,360,10,10);//left eye ball
ellipse(265,133,0,360,10,10);//right eye ball
ellipse(210,133,0,360,3,3);//left eye ball
ellipse(265,133,0,360,3,3);//right eye ball
ellipse(238,160,0,360,10,13);//nose
//arc(240,125,228,312,68);//mouth
arc(240,120,230,310,72);//mouth
setfillstyle(1,GREEN);//setfillstyle function sets the current fill pattern and fill color takes enum values and firts paramet is kind of fill with second as color
floodfill(238,160,WHITE);//nose//void floodfill(int x, int y, int border);
setfillstyle(1,15);// setfillstyle(1,GREEN); set the color green. here now it is white.
floodfill(210,113,15);//left eye flood fill.
floodfill(265,113,15);//flood fill right eye.
//floodfill(265,113,15);//
setfillstyle(1,9);
floodfill(210,100,15);
setfillstyle(1,1);
floodfill(315,80,15);

moveto(203,220);//moveto function changes the current position to (x, y)

lineto(203,260);//part from face to body first straight line //lineto(203,270);//another alternative for translated line//
//cout<<getx<<" "<<gety<<" ";
lineto(183,260);//move left from horizontally here its the left neck//
lineto(183,350);//move downward for the left body part //
lineto(293,350);//move right to separate legs from body //
lineto(293,260);// move upwards to make the right part of the body//
lineto(273,260);// move left //
lineto(273,220);// reached the right part of the (tudi)

moveto(183,350);// the part where we move move downwaard to the lower part of the body
//construction of the legs (left first)//

lineto(173,460);//left slant leg
lineto(213,460);//move right a bit//
lineto(238,400);// slant line to the upward part of leg //
lineto(263,460);// slant leg but downward this tym
lineto(303,460);// move a bit right//
lineto(293,350);// now move to upward part of the differntiating part of the body and leg//

moveto(173,460);//move to the left slant leg

//left shoes construction//
lineto(143,478);
lineto(213,478);
lineto(213,460);

moveto(263,460);
//right shoes construction.

lineto(263,478);
lineto(333,478);
lineto(303,460);

line(238,400,238,350); //the small line from abdomen to legs slants
//right hand
moveto(183,260);

lineto(113,310);
lineto(183,375);//move upward to the created hand to form the slant from the lower part of the leg//

moveto(183,280);//second lining of the left hand
lineto(137,310);
lineto(181,353);// upwards slant to the slant higth from abdomen

setfillstyle(6,RED);//fill the  area with enumerated slant red color
floodfill(190,300,15);

setfillstyle(1,7);//fill the left leg //
floodfill(223,400,15);

setfillstyle(1,5);//fill the right leg//
floodfill(253,400,15);

setfillstyle(10,YELLOW);//left shoes//
floodfill(173,470,15);

setfillstyle(9,YELLOW);
floodfill(303,470,15);

//fingers
secondleft();//right hand

ellipse(413,228,0,180,3.5,3.5);

line(420,240,433,240);
//line(423,247,440,247);
line(413,240,410,228);
line(417,228,420,240);
ellipse(433,243.5,-90,90,3.5,3.5);
line(423,254,440,254);
ellipse(440,250.5,-90,90,3.5,3.5);
ellipse(430,257,-90,90,3,3);
line(413,260,430,260);

area=imagesize(409,224,444,261);
buf=malloc(area);
getimage(409,224,444,261,buf);// void getimage(int left, int top, int right, int bottom, void *bitmap);
while(!kbhit())//to detrmine weather a key has been pressed or not //
{
if(i==0)
{
/*setfillstyle(1,15);
setcolor(15);
ellipse(210,133,0,360,10,10);//left eye ball
ellipse(265,133,0,360,10,10);//right eye ball
setcolor(0);
ellipse(210,133,0,360,3,3);//left eye ball
ellipse(265,133,0,360,3,3);//right eye ball
floodfill(210,133,15);
floodfill(265,133,15);
setcolor(0);*/
putimage(391,209,buf,1);

firstleft();

setcolor(15);
secondleft();
putimage(409,224,buf,0);
i=1;
}
else
{
/*setfillstyle(1,0);
setcolor(0);
ellipse(210,133,0,360,10,10);//left eye ball
ellipse(265,133,0,360,10,10);//right eye ball
floodfill(210,133,0);
floodfill(265,133,0);
setcolor(15);
ellipse(210,133,0,360,3,3);//left eye ball
ellipse(265,133,0,360,3,3);//right eye ball
floodfill(210,133,15);
floodfill(265,133,15);
setcolor(0);*/
putimage(409,224,buf,1);
secondleft();
setcolor(GREEN);
firstleft();
putimage(391,209,buf,0);
i=0;
}
delay(1000);
}
getch();
}
void firstleft()
{
moveto(293,260);// move to uppper neck
lineto(353,276);//move downwards slant slightly upper than second hand// notice the first hand is a bit smaller //
lineto(395,223);//move upwards slant for the fingers
moveto(293,280);//econd part of the hand  move downwards
lineto(355,296);//second hand
lineto(395,245);
}
void secondleft()
{
moveto(293,260);// move to uppper neck
lineto(363,280);// move downwards slant
lineto(413,240);// move upwards slant for the fingers
moveto(293,280);//second part of the hand  move downwards
lineto(363,300);//second hand
lineto(413,260);
}
