
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());

   /* draw a diagonal line */
   line(100,100,100,200);
   line(100,100,300,100);
   line(300,100,300,200);
   line(300,200,100,200);
   circle(150,225,25);
   circle(150,225,15);
   circle(250,225,25);
   circle(250,225,15);
   getch();
   closegraph();
   return 0;
}

