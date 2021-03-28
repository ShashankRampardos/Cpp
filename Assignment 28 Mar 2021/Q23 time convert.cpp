
//convert Time Second to H:M:S
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
  inline void normalizeT(int);

};
void Time::setD()
{
     cout<<"Enter Second:\n";
      cin>>s;
   normalizeT(s);
}

void Time::getD()
{
    cout<<"Time:"<<h<<":"<<m<<":"<<s;
}

void Time::normalizeT(int s)
{
    if(s>=60)
    {
        this->m=(s/60);
        this->s=s%60;
        this->h=(m/60);
        this->m=m%60;
    }
}

int main()
{
    Time T;
    T.setD();
    T.getD();

    return 0;
}
