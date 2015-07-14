#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
void ea()
{  setcolor(15);
   circle(getmaxx()/2,getmaxy()/2,54);
   setfillstyle(SOLID_FILL,15);
   floodfill(getmaxx()/2,getmaxy()/2,15);
   setcolor(1);
   circle(getmaxx()/2,getmaxy()/2,55);
   setcolor(9);
   circle(getmaxx()/2,getmaxy()/2,56 );
   setcolor(15);
   circle(getmaxx()/2,getmaxy()/2,57 );
   setcolor(1);
   settextstyle(TRIPLEX_FONT,0,6);
   outtextxy((getmaxx()/2)-30,(getmaxy()/2)-48,"EA");
   settextstyle(DEFAULT_FONT,0,2);
   setcolor(9);
   outtextxy((getmaxx()/2)-36,(getmaxy()/2)+18,"GAMES");
   outtextxy(180,400,"Challenge Everything");
}
void pg()
{  setcolor(14);
   settextstyle(GOTHIC_FONT,0,4);
   outtextxy((getmaxx()/2)-36,54,"A");
   settextstyle(SANS_SERIF_FONT,0,6);
   outtextxy((getmaxx()/2)-144,180,"PRASHANTA");
   settextstyle(SANS_SERIF_FONT,0,6);
   outtextxy((getmaxx()/2)-72,270,"GUHA");
   settextstyle(GOTHIC_FONT,0,4);
   outtextxy((getmaxx()/2)-90,360,"Presentation");
}
void draw_grid()
{
line((getmaxx()/2)-50,(getmaxy()/2)-150,(getmaxx()/2)-50,(getmaxy()/2)+150
);

line((getmaxx()/2)+50,(getmaxy()/2)-150,(getmaxx()/2)+50,(getmaxy()/2)+150
);

line((getmaxx()/2)-150,(getmaxy()/2)-50,(getmaxx()/2)+150,(getmaxy()/2)-50
);

line((getmaxx()/2)-150,(getmaxy()/2)+50,(getmaxx()/2)+150,(getmaxy()/2)+50
);
   setcolor(15);
   outtextxy((getmaxx()/2)-60,(getmaxy()/2)-150,"0");
   outtextxy((getmaxx()/2)+40,(getmaxy()/2)-150,"1");
   outtextxy((getmaxx()/2)+140,(getmaxy()/2)-150,"2");
   outtextxy((getmaxx()/2)-60,(getmaxy()/2)-40,"3");
   outtextxy((getmaxx()/2)+40,(getmaxy()/2)-40,"4");
   outtextxy((getmaxx()/2)+140,(getmaxy()/2)-40,"5");
   outtextxy((getmaxx()/2)-60,(getmaxy()/2)+60,"6");
   outtextxy((getmaxx()/2)+40,(getmaxy()/2)+60,"7");
   outtextxy((getmaxx()/2)+140,(getmaxy()/2)+60,"8");
}
int check(int b[3][3],int p);
void assign(int b[3][3],int position,int player);
void insert(unsigned char c,int pos);
void pgopen()
{       while(!kbhit())
	{textcolor(15);
	gotoxy(46,25);cprintf("A");
	delay(300);
	textcolor(0);
	gotoxy(46,25);cprintf(" ");
	textcolor(15);
	gotoxy(45,25);cprintf("H");
	delay(300);
	textcolor(0);
	gotoxy(45,25);cprintf(" ");
	textcolor(15);
	gotoxy(44,25);cprintf("U");
	delay(300);
	textcolor(0);
	gotoxy(44,25);cprintf(" ");
	textcolor(15);
	gotoxy(43,25);cprintf("G");
	delay(300);
	textcolor(0);
	gotoxy(43,25);cprintf(" ");
	textcolor(15);
	gotoxy(40,25);cprintf("A");
	delay(300);
	textcolor(0);
	gotoxy(40,25);cprintf(" ");
	textcolor(15);
	gotoxy(39,25);cprintf("T");
	delay(300);
	textcolor(0);
	gotoxy(39,25);cprintf(" ");
	textcolor(15);
	gotoxy(38,25);cprintf("N");
	delay(300);
	textcolor(0);
	gotoxy(38,25);cprintf(" ");
	textcolor(15);
	gotoxy(37,25);cprintf("A");
	delay(300);
	textcolor(0);
	gotoxy(37,25);cprintf(" ");
	textcolor(15);
	gotoxy(36,25);cprintf("H");
	delay(300);
	textcolor(0);
	gotoxy(36,25);cprintf(" ");
	textcolor(15);
	gotoxy(35,25);cprintf("S");
	delay(300);
	textcolor(0);
	gotoxy(35,25);cprintf(" ");
	textcolor(15);
	gotoxy(34,25);cprintf("A");
	delay(300);
	textcolor(0);
	gotoxy(34,25);cprintf(" ");
	textcolor(15);
	gotoxy(33,25);cprintf("R");
	delay(300);
	textcolor(0);
	gotoxy(33,25);cprintf(" ");
	textcolor(15);
	gotoxy(32,25);cprintf("P");
	delay(300);
	textcolor(0);
	gotoxy(32,25);cprintf(" "); //for first display
	delay(300);
	textcolor(15);
	gotoxy(32,25);cprintf("P");
	delay(300);
	textcolor(3);
	gotoxy(32,25);cprintf("P");
	textcolor(15);
	gotoxy(33,25);cprintf("R");
	delay(300);
	textcolor(3);
	gotoxy(33,25);cprintf("R");
	textcolor(15);
	gotoxy(34,25);cprintf("A");
	delay(300);
	textcolor(3);
	gotoxy(34,25);cprintf("A");
	textcolor(15);
	gotoxy(35,25);cprintf("S");
	delay(300);
	textcolor(3);
	gotoxy(35,25);cprintf("S");
	textcolor(15);
	gotoxy(36,25);cprintf("H");
	delay(300);
	textcolor(3);
	gotoxy(36,25);cprintf("H");
	textcolor(15);
	gotoxy(37,25);cprintf("A");
	delay(300);
	textcolor(3);
	gotoxy(37,25);cprintf("A");
	textcolor(15);
	gotoxy(38,25);cprintf("N");
	delay(300);
	textcolor(3);
	gotoxy(38,25);cprintf("N");
	textcolor(15);
	gotoxy(39,25);cprintf("T");
	delay(300);
	textcolor(3);
	gotoxy(39,25);cprintf("T");
	textcolor(15);
	gotoxy(40,25);cprintf("A");
	delay(300);
	textcolor(3);
	gotoxy(40,25);cprintf("A");
	textcolor(15);
	gotoxy(43,25);cprintf("G");
	delay(300);
	textcolor(3);
	gotoxy(43,25);cprintf("G");
	textcolor(15);
	gotoxy(44,25);cprintf("U");
	delay(300);
	textcolor(3);
	gotoxy(44,25);cprintf("U");
	textcolor(15);
	gotoxy(45,25);cprintf("H");
	delay(300);
	textcolor(3);
	gotoxy(45,25);cprintf("H");
	textcolor(15);
	gotoxy(46,25);cprintf("A");
	delay(300);
	textcolor(3);
	gotoxy(46,25);cprintf("A");
	delay(900);}

}
void game_load()
{               _setcursortype(_NOCURSOR);
		clrscr();
		sleep(6);
		int i,j;
		for(i=28; i<=53; i++)
		{
			textcolor(15);
			gotoxy(i,33);cprintf("¦¦");
		}
		textcolor(2);
		gotoxy(28,30);cprintf("LOADING...");

		for(i=0,j=28; i<=100; i+=4, j++)
		{
			textcolor(14);
			gotoxy(28,36);cprintf("%d%", i);
			textcolor(1);
			gotoxy(j,33);cprintf("¦¦");
			delay(300);
		}
}

void main()
{  clrscr();
   game_load();
   clrscr();
   pgopen();
   /*xmax is 639, and ymax is 479*/
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode,"");
   ea();
   delay(5400);
   clrscr();
   initgraph(&gdriver, &gmode,"");
   pg();
   delay(5400);
   int colour=6;
   label:
   clrscr();
   initgraph(&gdriver, &gmode,"");
   setcolor(5);
   settextstyle(DEFAULT_FONT,0,5);
   outtextxy((getmaxx()/2)-250,(getmaxy()/2)-50,"Cross n Naught");
   textcolor(5);
   settextstyle(DEFAULT_FONT,0,3);
   outtextxy((getmaxx()/2)-100,(getmaxy()/2)+50,"1.PLAY GAME");
   outtextxy((getmaxx()/2)-100,(getmaxy()/2)+100,"2.CHOOSE GRID");
   int ch;
   int ch1;
   cin>>ch;
   if(ch==1)
   {int A[3][3],player1,player2,r,position;
   clrscr();
   initgraph(&gdriver, &gmode,"");
   textcolor(2);

   char c1[12]="Player 1: X";
   for(int i=0;i<12;i++)
   {delay(225);
    cout<<c1[i];}
   textcolor(1);

   char c2[12]="Player 2: O";
   for(i=0;i<12;i++)
   {delay(225);
    cout<<c2[i];}

   getch();
   player1=1;
   player2=2;
   initgraph(&gdriver, &gmode,"");
   setcolor(colour);
   draw_grid();
   setcolor(colour);

   int chances=0;
   do
   {cout<<endl;

   cin>>position;
   assign(A,position,player1);
   insert('X',position);
   r=check(A,player1);
   if(r==1)
   {delay(3000);
    closegraph();

    textcolor(2);
    char c3[23]="Player 1 is the winner";
    for(i=0;i<23;i++)
    {delay(225);
     cout<<c3[i];}
    break;}
    chances++;
   cout<<"Player 2:";
   cin>>position;
   assign(A,position,player2);
   insert('O',position);
   r=check(A,player2);
   if(r==1)
   {delay(3000);
    closegraph();

    textcolor(1);
    char c4[23]="Player 2 is the winner";
    for(i=0;i<23;i++)
    {delay(225);
     cout<<c4[i];}
    break;}
    chances++;
    if(chances>7&&r!=1)
    {delay(3000);
     closegraph();
     cout<<"IT'S A DRAW , WELL PLAYED!!!!!!";
     break;}
   }while(r!=1);
   }
   else if(ch==2)
   {clrscr();
    initgraph(&gdriver, &gmode,"");
    cout<<"ENTER THE COLOUR CODE (0 to 15):";
    cout<<"

	BLACK-> 0";
    cout<<"
	BLUE-> 1";
    cout<<"
	GREEN-> 2";
    cout<<"
	CYAN-> 3";
    cout<<"
	RED-> 4";
    cout<<"
	MAGENTA-> 5";
    cout<<"
	BROWN-> 6";
    cout<<"
	LIGHTGRAY-> 7";
    cout<<"
	DARKGRAY-> 8";
    cout<<"
	LIGHTBLUE-> 9";
    cout<<"
	LIGHTGREEN-> 10";
    cout<<"
	LIGHTCYAN-> 11";
    cout<<"
	LIGHTRED-> 12";
    cout<<"
	LIGHTMAGENTA-> 13";
    cout<<"
	YELLOW-> 14";
    cout<<"
	WHITE-> 15";
    cout<<"

	";
    cin>>ch1;
    colour=ch1;
    goto label;}
   getch();
}
void assign(int b[3][3],int position,int player)
{switch(position)
 {case 0:b[0][0]=player;
	 break;
  case 1:b[0][1]=player;
	 break;
  case 2:b[0][2]=player;
	 break;
  case 3:b[1][0]=player;
	 break;
  case 4:b[1][1]=player;
	 break;
  case 5:b[1][2]=player;
	 break;
  case 6:b[2][0]=player;
	 break;
  case 7:b[2][1]=player;
	 break;
  case 8:b[2][2]=player;
	 break;
  }
}
int check(int b[3][3],int p)
{int c=0,d=1;
 do
 {switch(d)
 {
 case 1:if(b[0][0]==p&&b[1][1]==p&&b[2][2]==p)
	{line(200,100,396,320);
	 c=1;}
	break;
 case 2:if(b[0][2]==p&&b[1][1]==p&&b[2][0]==p)
	{line(394,100,207,320);
	 c=1;}
	break;
 case 3:if(b[0][0]==p&&b[0][1]==p&&b[0][2]==p)
	{line(200,120,396,120);
	 c=1;}
	break;
 case 4:if(b[1][0]==p&&b[1][1]==p&&b[1][2]==p)
	{line(200,230,396,230);
	 c=1;}
	break;
 case 5:if(b[2][0]==p&&b[2][1]==p&&b[2][2]==p)
	{line(200,335,396,335);
	 c=1;}
	break;
 case 6:if(b[0][0]==p&&b[1][0]==p&&b[2][0]==p)
	{line(210,100,210,340);
	 c=1;}
	break;
 case 7:if(b[0][1]==p&&b[1][1]==p&&b[2][1]==p)
	{line(320,100,320,340);
	 c=1;}
	break;
 case 8:if(b[0][2]==p&&b[1][2]==p&&b[2][2]==p)
	{line(404,100,404,340);
	 c=1;}
	break;
 default:
	 c=0;
 }
 d++;
 }while(d<9);
 return c;
}
void insert(unsigned char c,int pos)
{if(c=='O')
{settextstyle(SANS_SERIF_FONT,0,5);
 switch(pos)
  {case 0:outtextxy(200,100,"O");
	  break;
   case 1:outtextxy(310,100,"O");
	  break;
   case 2:outtextxy(394,100,"O");
	  break;
   case 3:outtextxy(200,210,"O");
	  break;
   case 4:outtextxy(310,210,"O");
	  break;
   case 5:outtextxy(394,210,"O");
	  break;
   case 6:outtextxy(200,315,"O");
	  break;
   case 7:outtextxy(310,315,"O");
	  break;
   case 8:outtextxy(394,315,"O");
	  break;}
}
else if(c=='X')
{settextstyle(SANS_SERIF_FONT,0,5);
switch(pos)
  {case 0:outtextxy(200,100,"X");
	  break;
   case 1:outtextxy(310,100,"X");
	  break;
   case 2:outtextxy(394,100,"X");
	  break;
   case 3:outtextxy(200,210,"X");
	  break;
   case 4:outtextxy(310,210,"X");
	  break;
   case 5:outtextxy(394,210,"X");
	  break;
   case 6:outtextxy(200,315,"X");
	  break;
   case 7:outtextxy(310,315,"X");
	  break;
   case 8:outtextxy(394,315,"X");
	  break;}
}
}
