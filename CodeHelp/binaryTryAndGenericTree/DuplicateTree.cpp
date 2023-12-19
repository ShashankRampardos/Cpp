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

    string treeToStringLogic(TreeNode* root,vector<TreeNode*>& ans,map<string,int> &mp){
        if(root==nullptr){
            return "N";
        }
        string curr=to_string(root->val);
        
       string l=treeToStringLogic(root->left,ans,mp);
        string r=treeToStringLogic(root->right,ans,mp);
        string finalS=curr+" "+l+" "+r;

        if(mp.find(finalS)!=mp.end()){
            if(mp[finalS]==1)
             ans.push_back(root);
           mp[finalS]++;  
        }
        else{
            mp[finalS]=1;
        }
        return finalS;
    }  
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
           
           vector<TreeNode*> ans;
           map<string,int> occurance;
           if(root==nullptr) return ans;

           treeToStringLogic(root,ans,occurance);
           
           return ans;  
    }
};
