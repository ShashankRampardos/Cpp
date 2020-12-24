#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int amount,dummy;
    short thousand,Fhundred,hundred,fifty,twenty,ten,five,two,one;
    cout<<"Enter amount (should be in range of 5 digit): ";
    cin>>amount;
    if((int)(log10(amount)+1)>5)
    {
        cout<<(log10(amount)+1)<<"Invalid Amount";
        getch();
        exit(0);
    }
    dummy=amount;
   //for 1000
    thousand=dummy/1000;
    dummy=dummy-(thousand*1000);

   //for 500
     Fhundred=dummy/500;
     dummy=dummy-(Fhundred*500);

   //for 100
     hundred=dummy/100;
     dummy=dummy-(hundred*100);
   //for 50
     fifty=dummy/50;
     dummy=dummy-(fifty*50);
   //for 20
     twenty=dummy/20;
     dummy=dummy-(twenty*20);
   //for 10
     ten=dummy/10;
     dummy=dummy-(ten*10);
   //for 5
     five=dummy/5;
     dummy=dummy-(five*5);
   //for 2
     two=dummy/2;
     dummy=dummy-(two*2);
   //for 1
     one=dummy;
     dummy=dummy-(one);
cout<<"DENOMINATIONS:"<<endl;
if(thousand>0)
cout<<"1000*"<<thousand<<"="<<thousand*1000<<endl;
if(Fhundred>0)
cout<<"500*"<<Fhundred<<"="<<Fhundred*500<<endl;
if(hundred>0)
cout<<"100*"<<hundred<<"="<<hundred*100<<endl;
if(fifty>0)
cout<<"50*"<<fifty<<"="<<fifty*50<<endl;
if(twenty>0)
cout<<"20*"<<twenty<<"="<<twenty*20<<endl;
if(ten>0)
cout<<"10*"<<ten<<"="<<ten*10<<endl;
if(five>0)
cout<<"5*"<<five<<"="<<five*5<<endl;
if(two>0)
cout<<"2*"<<two<<"="<<two*2<<endl;
if(one>0)
cout<<"1*"<<one<<"="<<one<<endl;
getch();
}
