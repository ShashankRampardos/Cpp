#include<iostream>
using namespace std;

class Queue{

class Node{

public:
int data;
Node *left;
Node *right;

Node(int item){
   data=item;
   left=NULL;
   right=NULL;
}
Node(){}
};
Node *last;
Node *first;
int Size;

public:
    Queue(){
    last=NULL;
    first=NULL;
    Size=0;
    }
   bool enqueue(int item){
    Node *t=new Node(item);
    if(first==NULL){
        first=t;
        last=t;
        Size++;
        return true;
    }

    last->right=t;
    t->left=last;
    last=t;
    Size++;
    return true;
    }
    bool dequeue(){
    Node *t;
    if(first==NULL){
        return false;
    }
    else if(first->right==NULL){
        delete first;
        first=NULL;
        last=NULL;
        Size--;
        return true;
    }
    (first->right)->left=NULL;
    t=first;
    first=first->right;
    delete t;
    Size--;
    return true;
    }

    int getItem(){
    return first->data;
    }

   int getSize(){
     return Size;
   }
   bool isEmpty(){
   if(first==NULL)
    return true;
   }

};
int main(){
Queue q;
q.enqueue(100);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.dequeue();
cout<<q.getSize();
cout<<endl<<q.getItem();

}
