#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class employee{
int empid,salary;
char n[20];
public:
    employee(int i,int s,char *a){
    empid=i;salary=s;strcpy(n,a);
    }
    employee(){}
    void setId(int a){
    empid=a;
    }
    void setSalary(int a){
    salary=a;
    }
    void setName(char *a){
      strcpy(n,a);
    }
    void showData(){
    cout<<"Employee:"<<endl<<"Id:"<<empid<<endl<<"Name:"<<n<<endl<<"Salary:"<<salary;
    }
    int getId(){return empid;}
    int getSalary(){return salary;}
    char* getName(){return n;}
};
int main(){
employee e;
e.setId(1);
e.setSalary(90000);
e.setName("Alpha");
e.showData();
}
