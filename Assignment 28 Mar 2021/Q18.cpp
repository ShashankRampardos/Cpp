#include<iostream>

using namespace std;
class person
{
    char name[20];
    int age;
public:
  void setter()
  {
      cout<<"Enter Name and age:\n";
      cin.getline(name,19);
      cin>>age;
  }
  inline void getter()
  {
    cout<<"Name:"<<name<<"Age:"<<age;
  }
};

int main()
{
    person ram;

    ram.setter();
    ram.getter();

}
