*/
class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> ans;
       stack<Node*> s1,s2;
       Node*a=root1;
       Node*b=root2;
       while(1){
             while(a){
                 s1.push(a);
                 a=a->left;
             }
             while(b){
                 s2.push(b);
                 b=b->left;
             }
            
            if(s1.empty()&&s2.empty())
              break;
              
             Node* e1=!s1.empty()?s1.top():nullptr;
            
             
             Node* e2=!s2.empty()?s2.top():nullptr;
            
             
             
            
             int x=e1?e1->data:INT_MAX;
             int y=e2?e2->data:INT_MAX;
             
             if(x<y){
                  if(x!=INT_MIN)
                    ans.push_back(x);
                    
                  if(!s1.empty())s1.pop();
                  if(e1)
             a=e1->right;
             }
             else{
                 if(y!=INT_MIN)
                  ans.push_back(y);
                 
                  if(!s2.empty())s2.pop();
                  if(e2) 
                 b=e2->right;
             }
            //  if(y<x)
            //   swap(x,y);
              
            //   if(x!=INT_MIN)
            //  ans.push_back(x);
            //  ans.push_back(y);
            // if(e1)
            //  a=e1->right;
            // if(e2) 
            //  b=e2->right;
       }
       //sort(ans.begin(),ans.end());
       return ans;
    }
};
