#include<graphics.h>
#include<dos.h>
#include<conio.h>
//#include<alloc.h>
#include<bits/stdc++.h>
using namespace std;
void  *buf;
void firstleft(int r);
void secondleft(int r);
int main()
{
int gd=DETECT,gm,i=0,x,y,area;
initgraph(&gd,&gm,"");
int r=-200;
while(1)
{
    if(r>=300)
        r=-200;
char ch;
if(kbhit())
   {

    ch=getch();
    if(ch==27)
        return 0;
    else
        continue;
   }
rectangle(0,0,getmaxx(),getmaxy());arc(240+r,120,40,140,70);//Top  middle curve of the my mickey
ellipse(165+r,80,10,280,20,20);//left ear
ellipse(315+r,80,-100,170,20,20);//right ear
arc(235+r,120,163,215,70);//arc down the left part of the ear
arc(245+r,120,-35,17,70);//arc down the right part of the ear
ellipse(193+r,178,85,280,40,20);//out-ward produding part in left part
ellipse(283+r,178,-100,95,40,20);//out-ward produding part in right part
ellipse(238+r,199,180,0,39,50);//this is the chin(tudi-area) separating the body and face
ellipse(213+r,123,44,240,33,40);//the left portion above the eye//
ellipse(262+r,123,-60,135,33,40);//the right portion of the above the eye
ellipse(210+r,123,0,360,13,20);//left eye
ellipse(265+r,123,0,360,13,20);//right eye
ellipse(210+r,133,0,360,10,10);//left eye ball
ellipse(265+r,133,0,360,10,10);//right eye ball
ellipse(210+r,133,0,360,3,3);//left eye ball
ellipse(265+r,133,0,360,3,3);//right eye ball
ellipse(238+r,160,0,360,18,15);//nose

//arc(240,125,228,312,68);//mouth
arc(240+r,120,230,310,72);//mouth
setfillstyle(1,GREEN);//setfillstyle function sets the current fill pattern and fill color takes enum values and firts paramet is kind of fill with second as color
floodfill(238+r,160,WHITE);//nose//void floodfill(int x, int y, int border);
setfillstyle(1,15);// setfillstyle(1,GREEN); set the color green. here now it is white.
floodfill(210+r,113,15);//left eye flood fill.
floodfill(265+r,113,15);//flood fill right eye.
//floodfill(265,113,15);//
setfillstyle(1,9);
floodfill(210+r,100,15);
setfillstyle(1,1);
floodfill(315+r,80,15);

moveto(203+r,220);//moveto function changes the current position to (x, y)

lineto(203+r,260);//part from face to body first straight line //lineto(203,270);//another alternative for translated line//
//cout<<getx<<" "<<gety<<" ";
lineto(183+r,260);//move left from horizontally here its the left neck//
lineto(183+r,350);//move downward for the left body part //
lineto(293+r,350);//move right to separate legs from body //
lineto(293+r,260);// move upwards to make the right part of the body//
lineto(273+r,260);// move left //
lineto(273+r,220);// reached the right part of the (tudi)

moveto(183+r,350);// the part where we move move downwaard to the lower part of the body
//construction of the legs (left first)//

lineto(173+r,460);//left slant leg
lineto(213+r,460);//move right a bit//
lineto(238+r,400);// slant line to the upward part of leg //
lineto(263+r,460);// slant leg but downward this tym
lineto(303+r,460);// move a bit right//
lineto(293+r,350);// now move to upward part of the differntiating part of the body and leg//

moveto(173+r,460);//move to the left slant leg

//left shoes construction//
lineto(143+r,478);
lineto(213+r,478);
lineto(213+r,460);

moveto(263+r,460);
//right shoes construction.

lineto(263+r,478);
lineto(333+r,478);
lineto(303+r,460);

line(238+r,400,238+r,350); //the small line from abdomen to legs slants
//right hand
moveto(183+r,260);

lineto(113+r,310);
lineto(183+r,375);//move upward to the created hand to form the slant from the lower part of the leg//

moveto(183+r,280);//second lining of the left hand
lineto(137+r,310);
lineto(181+r,353);// upwards slant to the slant higth from abdomen

setfillstyle(6,RED);//fill the  area with enumerated slant red color
floodfill(190+r,300,15);

setfillstyle(1,7);//fill the left leg //
floodfill(223+r,400,15);

setfillstyle(1,5);//fill the right leg//
floodfill(253+r,400,15);

setfillstyle(10,YELLOW);//left shoes//
floodfill(173+r,470,15);

setfillstyle(9,YELLOW);
floodfill(303+r,470,15);

//fingers
secondleft(r);//right hand

ellipse(413+r,228,0,180,3.5,3.5);

line(420+r,240,433+r,240);
line(423+r,247,440+r,247);
line(413+r,240,410+r,228);
line(417+r,228,420+r,240);
ellipse(433+r,243.5,-90,90,3.5,3.5);
line(423+r,254,440+r,254);
ellipse(440+r,250.5,-90,90,3.5,3.5);
ellipse(430+r,257,-90,90,3,3);
line(413+r,260,430+r,260);

area=imagesize(409+r,224,444+r,261);//imagesize function returns the number of bytes required to store a bitimage.
buf=malloc(area);
getimage(409+r,224,444+r,261,buf);// void getimage(int left, int top, int right, int bottom, void *bitmap);
//while(!kbhit())//to detrmine weather a key has been pressed or not //
//{
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
putimage(391+r,209,buf,1);

firstleft(r);

setcolor(15);
secondleft(r);
putimage(409+r,224,buf,0);
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
putimage(409+r,224,buf,1);
secondleft(r);
setcolor(GREEN);
firstleft(r);
putimage(391+r,209,buf,0);//putimage function outputs a bit image onto the screen.
i=0;
}

r=r+10;
delay(100);
cleardevice();
}

getch();
}
void firstleft(int r)
{
moveto(293+r,260);// move to uppper neck
lineto(353+r,276);//move downwards slant slightly upper than second hand// notice the first hand is a bit smaller //
lineto(395+r,223);//move upwards slant for the fingers
moveto(293+r,280);//econd part of the hand  move downwards
lineto(355+r,296);//second hand
lineto(395+r,245);
}
void secondleft(int r)
{
moveto(293+r,260);// move to uppper neck
lineto(363+r,280);// move downwards slant
lineto(413+r,240);// move upwards slant for the fingers
moveto(293+r,280);//second part of the hand  move downwards
lineto(363+r,300);//second hand
lineto(413+r,260);
}
