/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* logic(ListNode* &head,int n){
        if(head==nullptr||n<=0)
        return nullptr;
           
         
          TreeNode* left=logic(head,n/2);
        TreeNode* root=new TreeNode(head->val);
        root->left=left;  
         head=head->next;

         root->right=logic(head,n-n/2-1);
         return root;  
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* t=head;
        int n=0;
        while(t!=nullptr){
            t=t->next;
            n++;
        }
        return logic(head,n);
    }
};
