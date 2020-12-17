#include<iostream>
#include<conio.h>
#include<conio.h>
namespace functioN
{
    inline int DigitSum(int);
    inline int PrimeFactorSum(int);
}
using namespace std;
using namespace functioN;
int main()
{
    int number;


    cout<<"Enter a number to check SMITH Number";
    cin>>number;
    if(DigitSum(number)==PrimeFactorSum(number))
        cout<<number<<" is a SMITH number.";
    else
        cout<<number<<" is not a SMITH number.";
        getch();
return 0;
}
int functioN::DigitSum(int number)
{
    int sum=0;
    short digit;
    while(number!=0)
    {
        digit=number%10;
        sum+=digit;
        number/=10;
    }
    return sum;
}
int functioN::PrimeFactorSum(int number)
{
    int factor=2,sum=0;
    while(number!=1)
    {
        if(number%factor==0){
           number/=factor;
           sum+=DigitSum(factor);
            }
        else
            factor++;
    }
  return sum;

}
