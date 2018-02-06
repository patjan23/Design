#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main()
{
 int gd=DETECT,gm,x,y;
 float i, y1,x1;
 initgraph(&gd,&gm,"c:\\tc\\bgi"); 
 x=getmaxx();
 y=getmaxy();
    
 for (i=-100;i<=-93;i=i+.001)
 {
      x1 = 9 * cos(i)*cos(i)*sin(i*i)+9*3*sin(i)*cos(i)*sin(i);
      y1 = 9 * sin(i)*sin(i)*1/tan(i)+9*4*sin(i)*cos(i); 
      delay(1);
      putpixel(x/2+(x1*10),y/2-(y1*10),1);
      putpixel(x/2+(y1*10),y/2-(x1*10),1);
 }
 getch();
}
