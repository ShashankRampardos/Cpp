
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(void)
{
    int gd=0,gm;
    int i,c=0,j=0,k=0;
    int bg;
    initgraph(&gd,&gm,"");
   setcolor(4);
  // printf("Enter bg color number(1-15):");
   //scanf("%d",&bg);

   setbkcolor(15);
 cleardevice();
 setlinestyle(2,0,3);
   while(!kbhit()){
   for(i=0,j=20;i<=360;i+=20,j+=20){
if(i%20==0){
    setcolor(c);
    c++;
    if(c>=15)
        c=0;
   ellipse(320,240,i+1,j,180,200);
   ellipse(320,240,i+1,j,175,195);
   ellipse(320,240,i+1,j,170,190);
}
   }
   Sleep(100);
   cleardevice();
   }
   //setfillstyle(2,RED);
   getch();

   closegraph();
}
