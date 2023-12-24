
class Solution {
public:

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> s;

    if(root != nullptr) {
        s.push(root);
    }

    while(!s.empty()) {
        TreeNode* current = s.top();
        s.pop();
        result.push_back(current->val);

        if(current->right != nullptr) {
            s.push(current->right);
        }

        if(current->left != nullptr) {
            s.push(current->left);
        }
    }

    return result;
}
};
