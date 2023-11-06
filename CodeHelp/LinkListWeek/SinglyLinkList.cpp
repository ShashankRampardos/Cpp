#include<bits/stdc++.h>
using namespace std;
class LinkList{
  
  class Node{
    public:
    Node *next;
    int data;
    
    Node(int data){
      this->data=data;
      next=NULL;
    }
    
    ~Node(){
      //delete next;  yaha ke jaga lL ka destructor delete karega next node ko
    }
  };
  
  Node *head;
  Node *tail;
  int size;
  
    public:
    LinkList(){
      head=NULL;
      tail=NULL;
      size=0;
    }
    
    ~LinkList(){
      if(head!=NULL){
      Node *temp=head;
      Node *prevTemp=head;
      while(temp->next!=NULL){
        prevTemp=temp;
        temp=temp->next;
        delete prevTemp;
      }
      delete temp;
      }
    }
    
    bool insertNode(int data,int index=0){
     if(index>size)
       return false;
     
      if(head==NULL){
        if(index!=0)
           return false;
        head=new Node(data);
        tail=head;
        size++;
        
      }
      else if(index==size-1)
      {
        tail->next=new Node(data);
        tail=tail->next;
        size++;
      }
      else{
        Node *temp=head;
        
        while(temp->next!=NULL&&index){
          temp=temp->next;
          index--;
        }
        if(index==0){
        Node *temp2=temp->next;
        temp->next=new Node(data);
        (temp->next)->next=temp2;
        size++;
        }
        else
        return false;
        
      }
      return true;
    }
    
    bool deleteNode(int index){
      if(index>=size)
        return false;
        
      if(head==NULL){
        return false;
      }
      else if(head==tail){
        delete head;
        head=NULL;
        tail=NULL;
        size--;
      }
      else {
        Node *temp=head;
        Node *prevTemp=head;
        while(temp->next!=NULL&&index){
          prevTemp=temp;
          temp=temp->next;
          index--;
        }
        if(index==0){
          prevTemp->next=temp->next;
          delete temp;
          size--;
        }
        else
          return false;
        
      }
      return true;
    }
    int getLen(){
      return size;
    }
    void printLL(){
      Node *temp=head;
      if(head==NULL)
      {cout<<"ggg";
      return;
      }
      do{
        cout<<temp->data<<endl;
        temp=temp->next;
      }while(temp!=NULL);
      
    }
};

int main(){
    LinkList l;
    l.insertNode(5);
    l.insertNode(6);
    l.insertNode(7);
    l.insertNode(8);
    l.insertNode(9);
    l.deleteNode(3);
    
    l.printLL();
  return 0;
}
