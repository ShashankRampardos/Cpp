#include<iostream>
#include<conio.h>
#include"D:\Code  Blocks\C++\Programming practise\time IO\time class.cpp"
#include<windows.h>
using namespace timeDec;
int main()
{
    time t;
    int h,m,s;
    cout<<"Enter time:";
    cout<<endl<<"Hours:";
    cin>>h;
    cout<<"Minutes:";
    cin>>m;
    cout<<"Seconds:";
    cin>>s;
    t.settime(h,m,s);
     // t.showtime();
    //time t2;
   // t2.settime(3,23,345);
  //t2=t+t2;
  system("cls");
   t.iterateTime();
//t2.showtime();
   getch();
}
