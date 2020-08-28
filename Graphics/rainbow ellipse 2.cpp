#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(void)
{


    int gd=0,gm;
    int i,c=0,j=0,k=0;
    int bg;
    int p;
    short x=180,y=200,flag,flag2;
    printf("Enter password:");
    scanf("%d",&p);
   if(p==8421)
    {initgraph(&gd,&gm,"");
   setcolor(4);
  // printf("Enter bg color number(1-15):");
   //scanf("%d",&bg);

   setbkcolor(15);
 cleardevice();
 setlinestyle(2,0,3);
   while(!kbhit()){


   for(i=0,j=20;i<=360;i+=20,j+=20){
if(i%20==0)
   {
    setcolor(c);
    c++;
    if(c>=15)
        c=0;
        ellipse(320,240,i+1,j,205,205);
        ellipse(320,240,i+1,j,200,200);
        ellipse(320,240,i+1,j,x-5,y-5);
        ellipse(320,240,i+1,j,x,y);

   }
   }

   Sleep(50);
   cleardevice();


   if((x==5||x<180)&&flag)
     {x+=5;
    y+=5;
    //printf("2)%hi %hi\n",x,y);
    if(x==180)
        flag2=1;
    else
        flag2=0;
    }

    else if((x==180||x>=10)&&(y==200||y>=30)&&flag2)
   {x-=5;y-=5;
   //printf("1) %hi %hi\n",x,y);
   if(x==5)
    flag=1;
    else
        flag=0;
   }


    }

   getch();

   closegraph();
}
else
{
    printf("Wrong password");
    getch();
    exit(0);
}
}
