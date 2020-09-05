#include<iostream>
#include<conio.h>
using namespace std;
int isEven(int num)
{
    if(num==0)
        return 1;
    if(num==1)
        return 0;
    isEven(num-2);
}
int main()
{
    int num;
    cout<<"Enter a number to check Even/Odd:";
    cin>>num;
   if(isEven(num))
    cout<<num<<" is an even number";
   else
    cout<<num<<" is an odd number";
   getch();
   return 0;
}
