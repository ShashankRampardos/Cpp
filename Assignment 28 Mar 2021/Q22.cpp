//Add Two Time
#include<conio.h>
#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time()
    {
        h=0;m=0;s=0;
    }
  inline void setD();
  inline void getD();
  inline void normalizeT(int,int,int);
  inline Time operator +(Time);

};
void Time::setD()
{
     cout<<"Enter Hour,Minute,Second:\n";
      cin>>h>>m>>s;
   normalizeT(h,m,s);
}

void Time::getD()
{
    cout<<"Time:"<<h<<":"<<m<<":"<<s;
}
Time Time::operator+(Time t)
{
    Time temp;
    temp.s=s+t.s;
    temp.m=m+t.m;
    temp.h=h+t.h;
    temp.normalizeT(temp.h,temp.m,temp.s);
    return temp;
}
void Time::normalizeT(int h,int m,int s)
{
    if(s>=60)
    {
        this->m=m+(s/60);
        this->s=s%60;
        this->h=h+(m/60);
        this->m=m%60;
    }
}

int main()
{
    Time t1,t2,t3;
    t1.setD();
    t2.setD();
    t3=t1+t2;
    t3.getD();
    return 0;
}
