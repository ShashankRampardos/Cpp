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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        queue<TreeNode*> storage;
        bool flag;
        if(root==nullptr)
         return ans;

        //initial work
        storage.push(root);
       // storage.push(nullptr);
       
        flag=true;//flag is to know which way to go
       while(!storage.empty()){
           //get size of current level of tree.
            int tempsize=storage.size();
            //create vector of size of current level of tree
            vector<int> temp(tempsize);
               
               for(int i=0;i<tempsize;i++){
                   //get effective index of vector to insert (from back or from front)
                   int index=flag?i:tempsize-i-1;
                   //get current node
                   TreeNode* node=storage.front();
                  
                   temp[index]=node->val;
                   //free node from queue
                   storage.pop();
                   //push children of current node
                     if(node->left)
                     storage.push(node->left);
                     if(node->right)
                     storage.push(node->right);
                           
               }
               flag=!flag;//toggle flag.
    
                   ans.push_back(temp);//push vector in vector of vector

       }

        return ans;//return vector of vector
    }
};
