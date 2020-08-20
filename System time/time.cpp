#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
int main()
{
    time_t t=time(0);

    cout<<ctime(&t);
}
