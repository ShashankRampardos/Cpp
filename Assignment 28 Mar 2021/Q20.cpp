#include<iostream>
using namespace std;
class stud
{
    char name[20];
    short int age;
    short int id;
public:
    void in()
    {
        cout<<"Enter Name,age and id of student:\n";
        cin.getline(name,19);
        cin>>age>>id;
    }
    void out()
     {cout<<endl<<"Name:"<<name<<"\nAge:"<<age<<"\nID:"<<id;}


};
int main()
{
   stud st1;
   st1.in();
   st1.out();
}
