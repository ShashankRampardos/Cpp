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
    vector<int> inorderTraversal(TreeNode* root) {
       stack<TreeNode*> s;
       TreeNode* a=root;
       vector<int> v;
       while(1){

           while(a){
               s.push(a);
               a=a->left;
           }
           if(s.empty())
            break;
           TreeNode* element=s.top();
           s.pop();
           v.push_back(element->val);

           if(element->right)
           a=element->right;

       }   
       return v;
    }
};
