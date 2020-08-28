#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>

int main()
{
    int gd=6,gm=0;
    char error;

    initgraph(&gd,&gm,"");
  error=graphresult();
if(error!=grOk){
    printf("%d",error);
    getch();
    exit(0);
}

setcolor(14);
setlinestyle(2,0,3);
line(23,23,56,56);
line(56,56,89,23);
getch();
printf("%s",grapherrormsg(graphresult()));
closegraph();

}
