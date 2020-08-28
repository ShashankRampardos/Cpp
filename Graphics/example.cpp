/* getx example */



#include <graphics.h>

#include <stdlib.h>

#include <stdio.h>

#include <conio.h>



int main(void)

{

   /* request autodetection */

   int gdriver = DETECT, gmode, errorcode;

   char msg[80];





   /* initialize graphics and local variables */

   initgraph(&gdriver, &gmode, "");



   /* read result of initialization */

   errorcode = graphresult();

   if (errorcode != grOk) {  /* an error occurred */

      printf("Graphics error: %s\n", grapherrormsg(errorcode));



      printf("Press any key to halt:");

      getch();

      exit(1);               /* terminate with an error code */

   }



   /* move to the screen center point */


   moveto(getmaxx() / 2, getmaxy() / 2);



   /* create a message string */

   sprintf(msg, "<-(%d, %d) is the here.", getx(), gety());



   /* display the message */

   outtext(msg);



   /* clean up */

   getch();

   closegraph();

   return 0;

}
