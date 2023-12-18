class Solution
{
public:
    void logic(Node* root,int& globalSum,int& globalLevel,int sum=0,int level=0){
        if(root==nullptr){// base case
         if(globalLevel<level-1){
            globalSum=0;
            globalLevel=level-1;
         }
         return;
        }
         logic(root->left,globalSum,globalLevel,sum+root->data,level+1);
         logic(root->right,globalSum,globalLevel,sum+root->data,level+1);
      // ek case
         if(level>=globalLevel){
             if(level==globalLevel){
                 globalSum=globalSum>sum+root->data?globalSum:sum+root->data;
             }else
                globalSum=sum+root->data;
         }
             
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        int sum=0;
        int level=0;
        logic(root,sum,level);
        return sum;
    }
};
