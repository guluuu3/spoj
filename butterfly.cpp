#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;
union REGS i,o;
struct SREGS s;
initmouse();
showmouse();
void changecursor(int *shape);
int cursor1[32]={ 0x0000,0xf00f,0xe007,0xc003,
		 0x8001,0x0000,0x0000,0x0000,
		 0x0000,0x0000,0x0000,0x8001,
		 0xc003,0xe00f,0xf00f,0x0000,

		 0xffff,0x0ff0,0x1ff8,0x3ffc,
		 0x799e,0xf99f,0xffff,0xffff,
		 0xffff,0xffff,0xffff,0x7ffe,
		 0x3c3c,0x1ff8,0x0ff0,0xffff,
		 };
int cursor2[32]={ 0xe00f,0xf10f,0xf81f,0x8c63,
		  0x0001,0x0001,0x0001,0x0001,
		  0x8003,0xc007,0xc007,0x8003,
		  0x8003,0xc7c7,0xffff,0xffff,

		  0x1010,0x0820,0x0440,0x739c,
		  0xfbbe,0xfffe,0xfffe,0xfffe,
		  0x7ffc,0x3ff8,0x3ff8,0x7ffc,
		  0x7d7c,0x3838,0x0000,0x0000,
		 };
int cursor3[32]={ 0xffff,0xffff,0xffff,0xe03f,
		  0xc01e,0x800c,0x0801,0x8001,
		  0xc003,0x8003,0x0001,0x8009,
		  0xc01c,0xe03e,0xffff,0xffff,

		  0x0000,0x0000,0x0000,0x1fc0,
		  0x3fe1,0x7ff3,0xf7fe,0x7ffe,
		  0x3ffc,0x7ffc,0xfffe,0x7ff6,
		  0x3fe3,0x1fc1,0x0000,0x0000,
		};
int cursor4[32]={ 0xc003,0xdffb,0xd00b,0xd00b,
		  0xd00b,0xd00b,0xd00b,0xd00b,
		  0xdffb,0xc003,0xfc3f,0xfc3f,
		  0x0000,0x0000,0x0000,0x0000,

		  0x3ffc,0x2004,0x2ff4,0x2ff4,
		  0x2ff4,0x2ff4,0x2ff4,0x2ff4,
		  0x2004,0x3ffc,0x03c0,0x03c0,
		  0xffff,0xffff,0xffff,0xffff,
		};
int main()
{
  int gd=DETECT,gm, xx,yy,b;
  initgraph(&gd,&gm,"c:\tc\bgi ");
  gotoxy(10,1);
  cout<<"Press any key and move the cursor to change shape";
  gotoxy(60,25);
  cout<<"Hello World";
  changecursor(cursor1);
  showmouse();
  getch();
  changecursor(cursor2);
  showmouse();
  getch();
  changecursor(cursor3);
  showmouse();
  getch();
  changecursor(cursor4);
  showmouse();
  getch();

}
initmouse()
{
  i.x.ax=0;
  int86(0x33,&i,&o);
  return(o.x.ax);
}
showmouse()
{
  i.x.ax=1;
  int86(0x33,&i,&o);
  return(o.x.ax);
}
void changecursor(int *shape)
{
  i.x.ax=9;
  i.x.bx=0;
  i.x.cx=0;
  i.x.dx=(unsigned)shape;
  segread(&s);
  s.es=s.ds;
  int86x(0x33,&i,&o,&s);
}
