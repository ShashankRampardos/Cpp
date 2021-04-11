#include<iostream>
#include<string.h>
using namespace std;
struct student
{
protected:
    char name[20];
    short age;
    short rollno;
    char gender;
public:
    student()
    {
        strcpy(name,"no name");
        age=0;
        rollno=0;
        gender='X';
    }
    Set()
    {
        cout<<"Enter Name,age,rollno,gender of student:";
        cin>>name>>age>>rollno>>gender;
    }
    get()
    {
        cout<<"\nName:"<<name<<"\nRollno:"<<rollno<<"\nGender:"<<gender;
    }
};
class result:public student
{
    short Tmarks;
    float per;
    char grade;
public:
    result()
    {
        Tmarks=0;per=0;grade='X';

    }
    SetR()
    {
        cout<<"Enter TMarks out of 500:";
        cin>>Tmarks;
        per=Tmarks/500.0*100;
        grade=per>=80?'A':per>=60?'B':per>=40?'C':'F';

    }
    getR()
    {
       cout<<"\nTMarks:"<<Tmarks;
       cout<<"\nPercentage:"<<per;
       cout<<"\nGrade:"<<grade;

    }
};
int main()
{
   result st;
   st.Set();
   st.SetR();
   st.get();
   st.getR();
}
