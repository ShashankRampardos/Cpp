/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
// it will give index of the node which is pointed by a node in old list 
    int getRandomIndex(Node* head,Node* currentNode){
         Node* t=head;
         int index=0;
         if(currentNode->random==nullptr){
             return -1;
             cout<<"bakchod";
         }
         while(true){
           if(t==currentNode->random){
               break;
           }
           t=t->next;
           index++;
         }
         return index;
    }
    // it will give the node[index] from new list
    Node* getRandomNode(Node* ansHead,Node* head,Node* currentNode){
        Node* ansT=ansHead;
        int index=getRandomIndex(head,currentNode);
        if(index==-1)
          return nullptr;

        while(index){
             ansT=ansT->next;
             index--;
        }
        return ansT;
    }
//ansT is new list iterator, ansHead is new list head, t is old list iterator and head is old list iterator, currentNode is old list node.
    Node* copyRandomList(Node* head) {
          Node* t=head;
          Node* ansHead=nullptr;
          if(head==nullptr){
              return nullptr;
          }
           
           //for first Node
           Node* newN=new Node(t->val);
           Node* ansI=newN;
           ansHead=ansI;
           t=t->next;
           
         // create deep copy clone of old list (ignoring random)
          while(t!=nullptr){
              newN=new Node(t->val);
              ansI->next=newN;
              ansI=ansI->next;
              t=t->next;              
          } 
          //resete iterators
          t=head; 
          ansI=ansHead;
           // setting up random of each node of new list(clone list)
          while(ansI!=NULL&&t!=nullptr){
             // get node from new list of same index as in old list
             ansI->random=getRandomNode(ansHead,head,t);//ansHead for getNode and head,t for getIndex
             
              ansI=ansI->next;
              t=t->next;
          }
          //all set
          return ansHead;
    }
};
