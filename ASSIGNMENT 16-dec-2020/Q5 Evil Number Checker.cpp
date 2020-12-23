#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
inline void rev(char*);
int main()
{
    unsigned int number,dummy;
    short counter,i;

    cout<<"Enter a number to check whether it is Evil Number or not: ";
    cin>>number;
    dummy=number;
    counter=(log10(number)+1);

    char *binary=new char[counter<19?counter<5?17:33:65];
    int bit;
//cout<<sizeof(binary)<<endl;//counter<19?counter<5?17:33:65
    //for(i=0;binary[i]<(counter<19?counter<5?17:33:65);i++)
      //  binary[i]=0;
i=0;
      while(dummy)
      {
        if(dummy%2==1){
          *(binary+i)='1';
           bit++;
           }
        if(dummy%2==0)
          *(binary+i)='0';
          dummy/=2;
          i++;
      }
    rev(binary);
    cout<<number<<" in Binary Form: ";
    for(i=0;binary[i]==49||binary[i]==48;i++)
        cout<<binary[i];
        //printf("%c",binary[i]);

    if(bit%2==0)
        cout<<endl<<number<<" is a Evil Number.";
    else
        cout<<endl<<number<<" is not a Evil Number.";

delete binary;

}
inline void rev(char *binary)
{
    int i,j,length;

    for(length=0;binary[length]==49||binary[length]==48;length++);
    length--;

    for(i=0,j=length;i<=(length)/2;i++,j--)
    {
        binary[i]=binary[i]+binary[j];
        binary[j]=binary[i]-binary[j];
        binary[i]=binary[i]-binary[j];
    }

}
