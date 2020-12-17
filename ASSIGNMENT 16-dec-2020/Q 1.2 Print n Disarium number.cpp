#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
inline int power(int,short);
int main()
{
    int temp=89,number,sum=0;
    short range;
    short counta,digit;
    cout<<"Enter how many DISARIUM number to display: ";
    cin>>range;

while(range)
  {  number=temp;
      counta=(log10(number)+1);

    while(number)
    {
        digit=number%10;
        sum=sum+(power(digit,counta));
        number/=10;
        counta--;
    }
    if(temp==sum){
            cout<<sum<<" ";
        range--;
        }
    sum=0;

    temp++;
    counta=0;

  }
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

