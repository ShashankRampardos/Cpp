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
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<pair<TreeNode*,bool>> s;
        TreeNode* a=root;
       do{
    while(a){//go to very left node
        s.push(make_pair(a,true));
        a=a->left;
    }
    //loop terminator
    if(s.empty())
        break;

    pair<TreeNode*,bool> &element = s.top();//if you not make reference variable then loop turn in to infinity loop
    
    //move one right if possible
    if(element.second&&element.first->right) {
        element.second = false;
        a=element.first->right;
        // Continue to the next iteration, skip node visiting phase
        continue;
    }

    s.pop();
    v.push_back(element.first->val);
}while(1);

        return v;
    }
};
