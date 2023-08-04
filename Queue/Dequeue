#include<iostream>
using namespace std;
class Dequeue{

class Node{
    public:
int data;
Node *next,*prev;
    Node(int data){
    this->data=data;
    next=NULL;
    }

};

Node *f,*l;
int index;
public:
Dequeue(){
 f=NULL;
 l=NULL;

}

void insertFront(int data){
     Node *t=new Node(data);
  if(f==NULL){
    f=t;
    l=t;
  }else{
     t->next=f;
     f=t;
  }
}

void insertLast(int data){
Node* t=new Node(data);

if(l==NULL){
    f=t;
    l=t;
}else{
t->prev=f;
l=t;
}
}

void deleteFront(){
Node* t=f;
f=f->next;
delete t;
}

void deleteLast(){
Node* t=l;
l=l->prev;
delete t;
}

int peekFirst(){
return f->data;
}

int peekLast(){
return l->data;
}

};

int main(){
Dequeue d;


d.insertFront(5);
d.insertFront(6);
cout<<d.peekFirst();
cout<<d.peekLast();
}
