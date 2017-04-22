#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm,x0,y0,xc,yc,r,x,y,pk,p0;
 clrscr();
// detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
 printf("Enter center and radius\n");
 scanf("%d %d %d",&x0,&y0,&r);
 putpixel(x0,y0,WHITE);
 xc = x0;
 yc = y0+r;
 putpixel(xc,yc,WHITE);
 p0 = 1-r;
 pk=p0;
 x=0;
 y=r;
 while(x<y)
 {
  if(pk<0)
  {
   x = x+1;
   y = y;
   pk = pk + 2*x + 3;
  }
  else
  {
   x = x+1;
   y = y-1;
   pk = pk + 2*(x-y) + 5;
  }
  putpixel(xc+x,yc+y,WHITE);
  putpixel(xc+x,yc-y,WHITE);
  putpixel(xc-x,yc+y,WHITE);
  putpixel(xc-x,yc-y,WHITE);
  putpixel(yc+y,xc+x,WHITE);
  putpixel(yc-y,xc+x,WHITE);
  putpixel(yc+y,xc-x,WHITE);
  putpixel(yc-y,xc-x,WHITE);
 }
 closegraph();
}

