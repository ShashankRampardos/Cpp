#include<iostream>
#include<math.h>
using namespace std;
int avg(int n){
    int sum=0;
for(int i=0;i<n;i++){
    sum=sum+i;
}
return sum/n;
}
class Doubley{

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(){}
    Node(int data){
      this->data=data;
      left=NULL;
      right=NULL;
    }
};
Node *top;
Node *bottom;
int Size;

public:

Doubley(){
   top=NULL;
   bottom=NULL;
   Size=0;
}

~Doubley(){

}
void insertFirst(int data){

    Node *t=new Node(data);
      if(bottom==NULL){
        bottom=t;
        top=t;
        Size++;
       }
       else{
        bottom->left=t;
        t->right=bottom;
        bottom=t;
        Size++;
       }

}
void insertLast(int data){//back of linklist
     Node *t=new Node(data);
       if(bottom==NULL){
        bottom=t;
        top=t;
        Size++;
       }
       else{
        top->right=t;
        t->left=top;
        top=t;
        Size++;
       }

}

bool insertData(int data, int index){//It will do nothing if link list is empty or when passing (data,0) in which link list is empty
    if(index>=Size||index<0)
        return false;

     if(index==0)
        insertFirst(data);
     else if(index==Size-1)
        insertLast(data);
     else{
            Node *n=new Node(data);
            Node *t;
            int cnt;//keep track of index
        if(index<avg(Size-1)){
           t=bottom;
           cnt=0;
           while(cnt!=index){
            t=t->right;
            cnt++;
           }
           n->right=t;
           n->left=t->left;
           (t->left)->right=n;
           t->left=n;
           Size++;
        }
        else {
            t=top;
            cnt=Size-1;
            while(cnt!=index){
                t=t->left;
                cnt--;
            }
            n->left=t->left;
            n->right=t;
            (t->left)->right=n;
            t->left=n;
            Size++;
        }
     }
}

bool deleteLast(){
 if(bottom==NULL){
        return false;
    }
    else if(top->left==NULL){
        delete top;
        bottom=NULL;
        top=NULL;
        Size--;
        return true;
    }else{
      Node *t=top->left;
      t->right=NULL;
      delete top;
      top=t;
      Size--;
      return true;
      }
}

bool deleteFirst(){

   if(bottom==NULL){
        return false;
    }
    else if(bottom->right==NULL){
        delete bottom;
        bottom=NULL;
        top=NULL;
        Size--;
        return true;
    }else{
    Node *t=bottom->right;

     t->left=NULL;
     t=bottom;
     bottom=bottom->right;
     delete t;
     Size--;
     return true;
    }

}

bool deleteData(int index){

//    if(bottom==NULL){
//        return false;
//    }
    if(index>=Size||index<0)
        return false;
    if(index==Size-1){
      deleteLast();
    }
    else if(index==0)
    {
        deleteFirst();

    }
    else{
            int cnt;//counter
            Node *t;
        if(index<avg(Size-1)){//if index is smaller than middle node index do this
                  t=bottom;
                  cnt=0;
            while(cnt!=index){
                t=t->right;
                cnt++;
            }
            (t->left)->right=t->right;
            (t->right)->left=t->left;
            delete t;
            return true;
            Size--;
        }
        else{// if index is greater than or equal to middle node index then do this
            t=top;
            cnt=Size-1;
            while(cnt!=index){
                t=t->left;
                cnt--;
            }
            (t->right)->left=t->left;
            (t->left)->right=t->right;
            delete t;
            Size--;
        }
    }
}

bool Tarverse(){
   if(Size==0)
    return false;

   Node *t=bottom;
    cout<<t->data<<" ";
   while(t->right!=NULL){
    t=t->right;
    cout<<t->data<<" ";
   }
}
int getSize(){
return Size;
}


};
int main(){
  Doubley d;
  d.insertLast(3);
  d.insertLast(4);
  d.insertFirst(5);
  d.insertFirst(6);
  d.insertData(10,0);
  d.insertLast(9);
  d.insertLast(11);
  d.deleteLast();
  d.deleteFirst();
  d.deleteData(4);
  d.Tarverse();
}
