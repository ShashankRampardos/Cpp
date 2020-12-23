#include<iostream>
#include<conio.h>
#include<math.h>
namespace functions
{
    inline rev(int);
    inline void digitsArray(int*,int*);
    inline void shifterAdder(int*,int*,short);
}
using namespace std;
using namespace functions;
inline functions::rev(int input)
{
    int temp;
    int rev=0;
    int dummy;

    dummy=input;

    while(dummy!=0)
    {
        temp=dummy%10;
        rev=rev*10+temp;
        dummy/=10;
    }
    return rev;
}
inline void functions::digitsArray(int *digits,int *input)
{
    int dig,sum=0,temp;
    int i=0;

    temp=*input;
    while(temp!=0)
    {
        dig=temp%10;
        sum+=dig;
        temp/=10;

        *(digits+i)=dig;
       i++;
       if(temp==0)
          *(digits+i)=sum;
    }
}
inline void functions::shifterAdder(int *digits,int *input,short counta)
{
    int i=1,sum=0;

    while(i<=counta)
    {
        sum+=digits[i];
        i++;
    }

    int j;

    for(i=0,j=1;i<=counta;i++,j++)
    {
        if(i==counta)
            *(digits+i)=sum;
        else
        *(digits+i)=*(digits+j);
    }
}

int main()
{
    int input;
    short counta;
    int i=0;

    cout<<"Enter a number to check it it is a Keith number or not: ";
    cin>>input;
    counta=(log10(input)+1);//to count number of digits.

    int *digits=new int[counta+1];//store input variable value digits in each block of array, [counta +1] to store sum of digits at last block of array.
    int *temp=new int;

    *temp=rev(input);//temp pointer exist to store input variable reverse value.

    digitsArray(digits,temp);//it will fill digits dynamic array with digits of temp pointer pointing value along with sum of its digits.

  bool flag=0;

    while(input!=digits[counta]&&input>=digits[counta])
    {
       shifterAdder(digits,temp,counta);//it will left shift array element and place n (let n be number of digits) digits sum at last array block.

       if(input==digits[counta])
        flag=1;
    }
    if(flag)
        cout<<endl<<*(digits+counta)<<" is a KEITH Number.";
    else
        cout<<endl<<input<<" not a KEITH Number.";
    delete temp;
    delete digits;
getch();
}
