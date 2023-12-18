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
        vector<int> temp;
        deque<TreeNode*> storage;
        bool flag;
        if(root==nullptr)
         return ans;

        //initial work
        storage.push_back(nullptr);
        storage.push_back(root);
        flag=true;//flag is to know which way to go
       //seeSaw Approach
        while(!storage.empty()){
            
            if(flag==true){
               TreeNode* element=storage.back();
               storage.pop_back();
               
               if(element==nullptr){
                   if(storage.size()!=0)
                     storage.push_back(nullptr); 
                   flag=false;
                   ans.push_back(temp); 
                   temp.clear();
                   continue; 
               }

               temp.push_back(element->val);

               if(element->left)
                storage.push_front(element->left);
               if(element->right)
                storage.push_front(element->right);  
            }
            else{
              TreeNode* element=storage.front();
              storage.pop_front();

              if(element==nullptr){
                  if(storage.size()!=0)
                   storage.push_front(nullptr); 

                   flag=true;
                   ans.push_back(temp);
                   temp.clear();
                   continue;
              }
              temp.push_back(element->val);

              if(element->right)
               storage.push_back(element->right);
              if(element->left)
               storage.push_back(element->left);
            }
        }
        return ans;
    }
};
