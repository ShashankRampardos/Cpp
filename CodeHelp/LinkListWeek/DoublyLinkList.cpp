#include <bits/stdc++.h>
using namespace std;
class DoublyLinkList{
  class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
      this->data=data;
      next=prev=NULL;
    }
  };
    int size;
    Node *head;
    Node *tail;
    
    public:
     DoublyLinkList(){
       size=0;
       head=NULL;
       tail=NULL;
       
     }
     
     ~DoublyLinkList(){
       Node *temp=head;
       Node *to_delete;
       if(head!=NULL){
    while(temp->next!=NULL){
      to_delete=temp;
      temp=temp->next;
      delete to_delete;
    }
    delete temp;
       }
    
     }
     
     bool insertNode(int data,int index=0){
       
       if(index>size)return false;
       if(head==NULL){
          head = new Node(data);
          tail=head;
          size++;
       }
       else{
         Node *temp=head;
         
         while(temp->next!=NULL&&index){
           temp=temp->next;
           index--;
           
         }
         Node *n=new Node(data);
        
        // if insert at last location
        if(index==size){
         Node *n=new Node(data);
         tail=n;
         temp->next=n;
         n->prev=temp;
         size++;
       }
        
         //insert at index location
           n->prev=temp;
           n->next=temp->next;
           if(temp->next!=NULL)
           (temp->next)->prev=n;
           else
           tail=n;
           temp->next=n;
           //increase length of link list
           size++;
          
       }
       return true;
     }
  bool deleteNode(int index=0){
    if(head==NULL||index>size) return false;//>= not possible but in insert its possible
      
       if(head==tail){//handle single element case
         delete head;
         head=nullptr;
         tail=head;
         size--;
       }
       else { //general case
        Node *temp=head, *prevTemp=head;
        
        while(temp->next!=NULL&&index){
          prevTemp=temp;
          temp=temp->next;
          index--;
        }
        
        
        prevTemp->next=temp->next;
        if(temp->next!=NULL)
        (temp->next)->prev=prevTemp;
        else
         tail=prevTemp;
        size--;
        
      }
      return true;
  }
  
  int length(){
    return size;
  }
  bool printList(){
    if(head==NULL)return false;
    Node *temp=head;
    
    while(temp->next!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<temp->data;
   return true;
    
  }
  
};

int main() 
{
   DoublyLinkList dll;
   
   dll.insertNode(5);
   dll.insertNode(4);
   dll.insertNode(3);
   dll.insertNode(2);
   dll.insertNode(1);
  
   dll.printList();
   cout<<endl;
   dll.deleteNode(2);
   dll.deleteNode(3);
   dll.printList();
    
    return 0;
}
