
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
setlinestyle(0,64,1);
bar3d(10,43,56,76,100,30);
getch();
closegraph();
}
