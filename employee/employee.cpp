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

void displayEmplay(employee*);
void sortEmployBySalary(employee *e);
void setEmployee(employee*);
void sortEmployeeById(employee*);
void sortEmployeeByName(employee*);
int main(){

    employee e[3];
    setEmployee(e);
    //sortEmployBySalary(e);
    //sortEmployeeById(e);
    sortEmployeeByName(e);
    displayEmplay(e);


    //employee ea=e;
//employee e;
//e.setId(1);
//e.setSalary(90000);
//e.setName("Alpha");
//e.showData();
}

void setEmployee(employee *e){
  int i,s;
  char n[20];
  for(int j=0;j<3;j++){
  cout<<"Enter ID:";
  cin>>i;
  e[j].setId(i);
  cout<<"\nEnter Salary:";
  cin>>s;
  e[j].setSalary(s);
  cout<<"\nEnter Name:";
  cin>>n;
  e[j].setName(n);
    cout<<endl<<"----------------"<<endl;
  }

}
void displayEmplay(employee *e)
{
    for(int i=0;i<3;i++){
        e[i].showData();
        cout<<endl<<"--------------------------"<<endl;
    }
}
void sortEmployBySalary(employee *e){
     int maxS;
     employee t;
     for(int i=0;i<3;i++){
          maxS=e[i].getSalary();
       for(int j=i+1;j<3;j++){
        if(maxS>e[j].getSalary()){
            maxS=e[j].getSalary();
        t=e[i];
        e[i]=e[j];
        e[j]=t;
        }
       }

     }
}
void sortEmployeeById(employee *e){
   int maxId;
     employee t;
     for(int i=0;i<3;i++){
          maxId=e[i].getId();
       for(int j=i+1;j<3;j++){
        if(maxId>e[j].getId()){
            maxId=e[j].getId();
        t=e[i];
        e[i]=e[j];
        e[j]=t;
        }
       }

     }
}
void sortEmployeeByName(employee *e){
   char maxNm[20];
     employee t;
     for(int i=0;i<3;i++){
          strcpy(maxNm,e[i].getName());
       for(int j=i+1;j<3;j++){
        if(strcmp(maxNm,e[j].getName())>0){
            strcpy(maxNm,e[j].getName());
        t=e[i];
        e[i]=e[j];
        e[j]=t;
        }
       }
     }
}
