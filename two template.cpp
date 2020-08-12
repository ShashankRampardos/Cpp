#include<iostream>
#include<conio.h>
using namespace std;
template <class X>

X maxim(X a,X b)
{
    if (a>b)
        return a;
    else
        return b;
}
template<class S>
void show(S a)
{
    cout<<endl<<a;
}
int main()
{   int a,b;
   cout<<"Greater number is "<<maxim(4,3);
    cout<<endl<<"Greater number is "<<maxim(4.5,3.4);
show("434fdf2f23f");
getch();
return 0;
}
