#include<iostream>
#include<conio.h>
#include"D:\Code  Blocks\C++\Programming practise\time IO\time class.cpp"
using namespace timeDec;
int main()
{
    time t;
    int h,m,s;
    cout<<"Enter time:";
    cin>>h>>m>>s;
    t.settime(h,m,s);
    t.showtime();
    time t2;
    t2.settime(3,23,345);
    t2=t.operator+(t2);
    t2.showtime();
    getch();
}
