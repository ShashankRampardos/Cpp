#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
using namespace std;

int isamst(int,short,int=0);
int power(int,short);
int countdigit(int);

int countdigit(int num)
{  short cont=0;
   while(num)
   {
     num=num/10;
     cont++;
   }
   return cont;
}

int power(int num,short count)
{ int pow;
  pow=1;
    while(count)
    {
        count--;
        pow*=num;
    }
    return pow;
}

int isamst(int am,short count,int arm)
{ int digit;

   if(am==0)
    return arm;

   digit=am%10;
   arm=arm+(power(digit,count));
   am=am/10;

   arm=isamst(am,count,arm);
return arm;
}

int main()
{
    int num;
    cout<<"Enter a number to check Armstrong:";
    cin.operator>>(num);

    printf("%d is %s Armstrong number",num,num==isamst(num,countdigit(num))?"a":"not a");
    getch();
    return 0;
}
