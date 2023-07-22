#include<iostream>
using namespace std;

class LinkList{


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
static Node *n;

static int lastIndex;

public:

    LinkList(){

    }
    ~LinkList(){
      Node *t=n;
      Node *r=t;

      while(t->next!=NULL){
        r=t;
        t=t->next;
        delete r;
      }
      delete t;
    }
    int insertNode(int item,int index){
        if(index>lastIndex)
            return -1;
        if(n==NULL||index==0){
          if(index==0){
            Node *t=n;
            n=new Node(item);
            n->next=t;
            lastIndex++;
          }else{
              n=new Node;
              n->next=NULL;
              n->data=item;
               lastIndex++;
            }
       }else if(n->next==NULL){
          if(index==0){
            Node *t=n;
            n=new Node(item);
            n->next=t;
             lastIndex++;
          }
          else return -1;

       }
       else{
        Node *t=n;
        Node *r=t;
        int cnt=0;

        while(t->next!=NULL){
            r=t;
            t=t->next;
            cnt++;
            if(cnt==index)
                break;
        }
       r->next=new Node(item);
       (r->next)->next=t;
        lastIndex++;
       }
    }
    void insertNode(int item){
       if(n==NULL){
       n=new Node(item);
        lastIndex++;
       }
       else{
        Node *t=n;

        while(t->next!=NULL){
            t=t->next;
        }
        t->next=new Node;
        t=t->next;
        t->data=item;
         lastIndex++;
       }
    }
    int deleteNode(){

    if(n==NULL){
        return -1;
    }
    else if(n->next==NULL){
        delete n;
        n=NULL;
    }
    else{
          Node *t=n;
          Node *r;

        while(t->next!=NULL){
            r=t;
            t=t->next;
        }
        r->next=NULL;
        delete t;
    }
    }
    int deleteNode(int index){
      if(index>lastIndex)
            return -1;

    if(n==NULL){
        return -1;
    }
    else if(n->next==NULL&&index==0){
        delete n;
        n=NULL;
    }
    else{
            int cnt=0;
          Node *t=n;
          Node *r=t;

        while(t->next!=NULL){
            r=t;
            t=t->next;
            cnt++;
            if(cnt==index)
                break;
        }
        r->next=NULL;
        delete t;
    }
    }
    int getItem(){
        if(n==NULL){
            return -1;
        }
        else if(n->next==NULL){
            return n->data;
        }
        else{
            Node *t=n;

            while(t->next!=NULL){
                t=t->next;
            }
            return t->data;
        }
    }
    int getItem(int index){

        if(index>lastIndex)
            return -1;

        Node *t=n;
        Node *r=t;
        int cnt=0;

        while(t->next!=NULL){
            r=t;
            t=t->next;
            cnt++;
             if(index==0)
                break;
            if(cnt==index){
               return t->data;
            }
        }
     return r->data;
    }
};
LinkList::Node* LinkList::n=NULL;
int LinkList::lastIndex=-1;
int main(){
  LinkList l;

l.insertNode(4);
l.insertNode(2);
l.insertNode(3);
l.insertNode(5);
l.insertNode(9,3);
//l.deleteNode(4);
for(int i=0;i<5;i++)
cout<<l.getItem(i);

}
