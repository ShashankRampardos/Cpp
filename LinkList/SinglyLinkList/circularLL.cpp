#include<iostream>
using namespace std;

class Circular{

class Node{
  public:
      int data;
      Node *next;

      Node(int data){
      this->data=data;
      next=NULL;
      }
      Node(){}

};
Node *f;
int index;


public:

    Circular(){
    f=NULL;
    index=-1;
    }

void insertData(int data){
    Node *temp=new Node(data);

    if(index==-1){
        f=temp;
        temp->next=f;
        index++;

    }else{
        Node *t=f;

        while(t->next!=f){
            t=t->next;

        }

        t->next=temp;
        temp->next=f;
        index++;
    }

}

bool deleteData(){
   if(index==-1){
    return false;
   }
   else if(index==0){
    index--;
      delete f;
      f=NULL;
    }
   else{
    index--;
    Node *t=f,*r=t;
    while(t->next!=f){
        r=t;
        t=t->next;
    }
    r->next=f;
    delete t;
    }
}

bool insertData(int data,int index){
   Node* tmp=new Node(data);
   int cnt=0;
   if(this->index<index||index<=0){
    return false;
   }
   else{
    Node* t=f;
    while(t->next!=f){
        if(cnt==index){
            break;
        }
        t=t->next;
        cnt++;
        this->index++;
    }
    if(this->index!=index)
    tmp->next=t->next;
    t->next=tmp;
   }

}
bool deleteData(int index){
   if(this->index<index||index<=0)
   return false;

   int cnt=0;
   Node *t=f,*r=t;

   while(t->next!=f){
    if(cnt==index)
        break;
        r=t;
    t=t->next;

   }
   r->next=t->next;
   delete t;
   this->index--;
}
void tarverse(){
  Node *t=f;

  while(t->next!=f){
   cout<<t->data<<" ";
    t=t->next;
  }
  cout<<t->data;

}

};


int main(){
Circular c;
c.insertData(5);
c.insertData(4);
c.insertData(6);
c.insertData(8);
c.deleteData();
c.tarverse();
}
