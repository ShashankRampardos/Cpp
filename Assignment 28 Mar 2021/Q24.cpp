

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
  inline void normalizeT(int,int,int);

};
void Time::setD()
{
     cout<<"Enter Hour,Minute,Second:\n";
      cin>>h>>m>>s;
   normalizeT(h,m,s);
}


void Time::getD()
{
    cout<<"Time only in Seconds:"<<s;
}

void Time::normalizeT(int h,int m,int s)
{
          m=m+h*60;
    this->s=s+m*60;
}

int main()
{
    Time T;
    T.setD();
    T.getD();

    return 0;
}
