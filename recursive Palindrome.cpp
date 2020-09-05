#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int rev(int,int=0);

int rev(int num,int r)
{ int digit;

   if(num==0)
    return r;

   digit=num%10;
   r=r*10+digit;
   num=num/10;

   r=rev(num,r);
return r;
}

int main()
{
    int num;
    cout<<"Enter a number to check Palindrome:";
    cin.operator>>(num);

    printf("%d is %s Palindrome",num,num==rev(num)?"a":"not a");
    getch();
    return 0;
}

