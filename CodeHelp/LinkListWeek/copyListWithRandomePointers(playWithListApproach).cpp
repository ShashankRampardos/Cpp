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
    Node* copyRandomList(Node* head) {
        if(head==nullptr)return nullptr;
        Node* it=head;

        //step 1: har node kay next may clone laga do or node ka next ko clone ka next bana do
        while(it!=nullptr){
            Node* clone=new Node(it->val);
            clone->next=it->next;
            it->next=clone;
            it=it->next->next;
        }
         it=head;
         //step2: har clone may randome kaga do
        while(it!=nullptr){
            if(it->random)
            it->next->random=it->random->next;
            it=it->next->next;
            
        }

       // step3: clone and nodes ko detetch kar do
        Node* cloneHead=head->next;
        it=head;
        Node* clone=it->next;
        

        while(it!=nullptr){
            it->next=clone->next;
            if(clone->next)
            clone->next=clone->next->next;
            it=it->next;
            clone=clone->next;
        }
        return cloneHead;
    }
};
