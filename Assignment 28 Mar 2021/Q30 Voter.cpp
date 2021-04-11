#include<iostream>
#include<string.h>
using namespace std;
class votee
{
 public:
    short id;
    char name[20];
    short vote;

    votee()
    {   id=0;
        strcpy(name,"Name");
        vote=0;
    }
    setV(){

        cin>>id>>name>>vote;
    }
    getV()
    {
        cout<<"ID:"<<id<<"Name:"<<name<<"Votes:"<<vote;
    }

};
//maxV
int main()
{
    short n;
    cout<<"Enter number of candidates:";
    cin>>n;
    votee *V=new votee[n];
    for(int i=0;i<n;i++)
    {
          cout<<"Enter ID of Candidate "<<i+1<<" ,Name and No.(votes):";
          V[i].setV();
    }

    short Wid=V[0].id;
    int Max=V[0].vote;
    for(int i=1;i<n;i++)
    {
        if(Max<V[i].vote){
            Max=V[i].vote;
            Wid=V[i].id;
        }
    }

    cout<<"WINNER Candidate is:";
    for(int i=0;i<n;i++)
    {
        if(V[i].id==Wid)
            cout<<V[i].name;
    }

  delete V;
}
