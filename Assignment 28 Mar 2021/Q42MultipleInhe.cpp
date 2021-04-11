#include<iostream>
using namespace std;
class person
{
protected:
    char name[20];
    int empId;
    char gender;
public:
    setP()
    {
        cout<<"\nEnter Name,Employee id and gender:";
        cin.getline(name,19);
        cin>>empId>>gender;
    }
};
class dept
{
protected:
    char Dname[20];
    char assignwork[20];
    int time2complete;
public:
    setD(){
    cout<<"\nEnter Dname,Assigned work:";
    cin.ignore();
    cin.getline(Dname,19);
    cin.ignore();
    cin.getline(assignwork,19);
    //cin.ignore();
    cout<<"Enter time to complete in hours:";
    //cin.ignore();
    cin>>time2complete;
    }
};
class employee: protected person,protected dept
{
public:
    setE()
    {
        setP();
        setD();
    }
    getE()
    {
        cout<<"\nName:"<<name<<"\nID:"<<empId<<"\nGender:"<<gender<<"\nDname:"<<Dname<<"\nAssignedWork:"<<assignwork<<"\nTime2Complete:"<<time2complete;
    }
};
int main()
{
    employee E1;
    E1.setE();
    E1.getE();
    return 0;
}
