#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
namespace timeDec{
class time
{
    int H,M,S;
public:
    time();//constructor
    void settime(int,int,int);
    void showtime();
    time operator+(time);
    void iterateTime(void);
    void normalize(int,int,int);
    void playSound();

};
}
timeDec::time::time()
    {
        H=0;M=0;S=0;
    }
void timeDec::time::settime(int h,int m,int s)
    {
        H=h;
        M=m;
        S=s;
       normalize(H,M,S);
    }
void timeDec::time::normalize(int h,int m,int s)
{
    M=m+s/60;
    S=s%60;
    H=h+M/60;
    M=M%60;
}
void timeDec::time::showtime()
    {cout<<"Time:"<<H<<":"<<M<<":"<<S<<endl;}
void timeDec::time::iterateTime()
{
   while(1)
   {
       cout<<"Time:"<<H<<":"<<M<<":"<<S;
       {Sleep(1000);
       --S;}
       if(S<0)
       {   if(M>0){
           --M;
           S=59;}
           else
            break;
           if(M<0)
           {   if(H>0){
               H--;
               M=59;}
               else
                break;
           }
           if(H<0)
          {
            if(M<0)
              if(S<0)
                break;
           }
       }
       system("cls");
    }
    playSound();
}
 timeDec::time timeDec::time:: operator+(time t)
    {
    t.H=t.H+H;
    t.M=t.M+M;
    t.S=t.S+S;
normalize(t.H,t.M,t.S);
    return t;
    }
void timeDec::time::playSound()
{
Beep(261.53,400);
Beep(293.66,400);
Beep(329.63,400);
Beep(349.23,400);
Beep(392.00,400);
Beep(440.00,400);
Beep(493.88,400);
Beep(523.25,400);

Beep(523.25,400);
Beep(493.88,400);
Beep(440.00,400);
Beep(392.00,400);
Beep(349.23,400);
Beep(329.63,400);
Beep(293.66,400);
Beep(261.53,400);
}
