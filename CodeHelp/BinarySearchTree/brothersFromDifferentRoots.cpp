
class Solution
{
public:
    int countPairs(Node* root1, Node* root2, int x)
    {   
        int count=0;
        stack<Node*> s1,s2;
        Node* p=root1;
        Node* q=root2;
       
       
        while(1){
            
            while(p){
                s1.push(p);
                p=p->left;
            }
            while(q){
                s2.push(q);
                q=q->right;
            }
            
            //cout<<s1.empty()<<" "<<s2.empty();
          
          
           if ((s1.empty()) || (s2.empty()))
                  break;


             
             Node* e1=s1.top();
             Node* e2=s2.top();
              
             int sum=e1->data+e2->data;
             if(sum==x){
                 s1.pop();
                 s2.pop();
                 p=e1->right;
                 q=e2->left;
                 count++;
             }
             else if(sum>x){
                 s2.pop();
                 q=e2->left;
             }
             else if(sum<x){
                 s1.pop();
                 p=e1->right;
             }
            
            
            
            
        }
        
        return count;
 
    }
};
