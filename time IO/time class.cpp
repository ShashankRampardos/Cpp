#include<iostream>
#include<conio.h>
using namespace std;
namespace timeDec{
class time
{
    int H,M,S;
public:
    time()
    {}
    time (bool,bool,bool);
    void settime(int,int,int);
    void showtime();

};
}
timeDec::time::time(bool a,bool b,bool c)
    {
        H=a;M=b;S=c;
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
