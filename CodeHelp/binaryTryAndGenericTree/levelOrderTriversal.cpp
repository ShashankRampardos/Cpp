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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
         queue<TreeNode*> q;
       q.push(root);
       q.push(nullptr);
       vector<vector<int>> ans;
       vector<int> temp;
       if(root==nullptr) return ans;
       
       while(!q.empty()){
           TreeNode* element=q.front();
           q.pop();
           if(element) temp.push_back(element->val);
           
           if(element==nullptr){
               ans.push_back(temp);
               if(!q.empty()){
                   q.push(nullptr);
                   temp.clear();
               }
           }
           else{
               if(element->left!=nullptr){
                   q.push(element->left);
               }
               if(element->right!=nullptr){
                   q.push(element->right);
               }
           }
       }
       return ans;
    }
};
