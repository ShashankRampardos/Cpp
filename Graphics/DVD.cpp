#include<graphics.h>
#include<stdio.h>
#include<windows.h>
main()
{
    int gd=6,gm=0;
    int i,j;
    initgraph(&gd,&gm,"");
    for(i=50;i<=120;i++){
    setcolor(6);
    circle(200,200,i);

    Sleep(10);
system("cls");
    }
    i=getmaxx();
    printf("%d",i);
    for(i=10;i<=40;i++)
    {setcolor(2);
        circle(200,200,i);
    Sleep(10);
    }


    getch();

    closegraph();
return 0;
}
