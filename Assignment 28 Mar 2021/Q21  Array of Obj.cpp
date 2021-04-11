#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class stud
{
    char name[20];
    short int age;
    short int id;
public:
    void in()
    {
        cout<<"Name:";
        cin.ignore();
        cin.getline(name,19);
        cout<<"Age:";
        cin>>age;
        cout<<"ID:";
        cin>>id;
    }
    void out()
     {cout<<endl<<"Name:"<<name<<"\nAge:"<<age<<"\nID:"<<id;}


};
int main()
{
   int n;
   cout<<"How many Students to enter:";
   cin>>n;
   stud *st=new stud[n];
   cout<<"Enter Data For Students:\n";
   getch();
   system("cls");
   int temp;
   temp=n;
   while(n)
   { cout<<"Student "<<n<<endl;
       st[n].in();
     n--;
     system("cls");
   }
   n=temp;
   cout<<"Data For:\n";
   while(n)
   { cout<<"Student "<<n
<<endl;
       st[n].out();
     n--;

   }
   delete st; 
   getch();
   return 0;
    
}
