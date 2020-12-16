#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
inline int power(int,short);
int main()
{
    int number,duplicate,sum=0;
    short counta,digit;
    cout<<"Enter a number to check DISARIUM number ";
    cin>>number;
    counta=(log10(number)+1);
duplicate=number;
    while(number)
    {
        digit=number%10;
        sum=sum+(power(digit,counta));
        number/=10;
        counta--;

    }
    if(duplicate==sum)
        cout<<sum<<" is a DISARIUM number";
    else
        cout<<sum<<" is not a DISARIUM number";


}
power(int x,short y)
{ int result=1;
    while(y!=0)
    {
        result*=x;
        y--;
    }
    return result;
}
