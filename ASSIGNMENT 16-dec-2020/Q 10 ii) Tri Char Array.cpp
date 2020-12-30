#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   char i,ii,iii;
   short I,J,order;
   cout<<"Enter order of Matrix: ";
   cin>>order;

   char **Trio=new char*[order];
   for(I=0;I<order;I++)
    *(Trio+I)=new char[order];
   cout<<"Enter any Three Characters: ";
   cin>>i>>ii>>iii;
   for(I=0;I<order;I++)
     for(J=0;J<order;J++)
        if((I==0&&J==0)||(I==0&&J==(order-1))||(I==(order-1)&&J==0)||(I==(order-1)&&J==(order-1)))
           Trio[I][J]=i;
        else if(((I>=1||I<=(order-2))&&J==0)||((I>=1||I<=(order-2))&&J==(order-1))||((J>=1||J<=(order-2))&&I==0)||((J>=1||J<=(order-2))&&I==(order-1)))
           Trio[I][J]=ii;
        else
           Trio[I][J]=iii;

   cout<<"Output:"<<endl;
   for(I=0;I<order;I++){
    cout<<"|";
     for(J=0;J<order;J++)
        cout<<*(*(Trio+I)+J);
    cout<<"|"<<endl;
                       }

    delete Trio;
}
