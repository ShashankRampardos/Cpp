//improvements we can make a private function to calculate last index instead of making static function
//singley linklist can be implemented on both derection left and right so dont be rigid to only right side.
#include<iostream>
using namespace std;

class Stack{

class Node{
  public:
  int data;
  Node *next;

  Node(){
      data=0;
     next=NULL;
     }
     Node(int item){
     data=item;
     next=NULL;
     }
};
 Node *last;
int lastIndex;

public:

    Stack(){
  lastIndex=-1;
  last=NULL;
    }
    ~Stack(){
      while(last!=NULL){
       Node *t=last;
        last=last->next;
        delete t;

//        cout<<endl<<"ObjectTerminateSuccessfully";
      }
    }

    void push(int item){
     Node *t=new Node(item);
     t->next=last;
     last=t;
     lastIndex++;
    }
    int pop(){
    if(lastIndex==-1)
    return -1;

    Node *t=last;
    int x=last->data;
    last=last->next;
    delete t;
    lastIndex--;
    return x;
   }

    int peek(){
       if(lastIndex==-1)
        return 0;
       return last->data;
    }
   bool isEmpty(){
   if(lastIndex==-1){
    return true;
   }
   else return false;
   }
   int getSize(){
   return lastIndex+1;
   }
};
//Stack::Node* Stack::n=NULL;

//int Stack::lastIndex=-1;
int main(){
 Stack s;
 s.push(1);
 s.push(2);
 s.push(3);
 s.pop();
cout<<s.peek();
cout<<endl<<s.isEmpty();
cout<<endl<<s.getSize();

}
