#include<iostream>
#include<conio.h>
#include"D:\Code  Blocks\C++\Programming practise\time IO\time class.cpp"
using namespace timeDec;
int main()
{
    time t(0,0,0);
    int h,m,s;
    cout<<"Enter time:";
    cin>>h>>m>>s;
    t.settime(h,m,s);
    t.showtime();
    getch();
}
