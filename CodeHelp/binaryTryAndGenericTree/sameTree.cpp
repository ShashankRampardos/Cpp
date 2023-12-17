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
    bool isSameTree(TreeNode* p, TreeNode* q) {
       //before optimization
      /* 
        if(!p&&!q)
          return true;
       else if(p==nullptr&&q!=nullptr)
          return false;
        else if(p!=nullptr&&q==nullptr)
          return false;
       
        bool currentAns;
        if(p->val==q->val)
          currentAns=true;
        else 
          return false;

        bool leftAns=isSameTree(p->left,q->left);
        bool rightAns=isSameTree(p->right,q->right);
        
        return leftAns&&rightAns&&currentAns;

        */
        if(!p&&!q)
          return true;
        if(p&&q){     
        return ((p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
        }
        else
         return false;
    }
};
