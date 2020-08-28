#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>

int main()
{
    int gd=6,gm=0;
    int error;
    initgraph(&gd,&gm,"");
  error=graphresult();
if(error!=grOk){
    printf("%d",error);
    getch();
    exit(0);
}
setcolor(14);
setlinestyle(2,64,3);
line(320,240,getmaxx()+40,getmaxy()+30);
printf("%d",getx());
line(56,56,89,23);

printf("\n%d",gety());
getch();
closegraph();
}
