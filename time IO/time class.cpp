#include<iostream>
#include<conio.h>
using namespace std;
namespace timeDec{
class time
{
    int H,M,S;
public:
    time ();
    void settime(int,int,int);
    void showtime();
    time operator+(time t)
    {
    t.H=t.H+H;
    t.M=t.M+M;
    t.S=t.S+S;
//Normalize
    t.M=t.M+t.S/60;
    t.S=t.S%60;
    t.H=t.H+t.M/60;
    t.M=t.M%60;

    return t;
    }



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
       if(S>60)
       {
           M=M+S/60;
           S=S%60;
       }
       if(M>60)
       {
           H=H+M/60;
           M=M%60;
       }

    }
void timeDec::time::showtime()
    {cout<<"Time:"<<H<<":"<<M<<":"<<S<<endl;}
