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
    Node* helper(Node* head,unordered_map<Node*,Node*>&mp){
        if(head==0)
         return nullptr;

         //ek case solve kia
         Node* newN=new Node(head->val);
         mp[head]=newN;
         //baki recursion samal lege
         newN->next=helper(head->next,mp);
         //back track
         if(head->random){
             newN->random=mp[head->random];
         }
         return newN;
    }
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> mp;
        return helper(head,mp);
    }
};
