#include <iostream>
#include <queue>

using namespace std;
class Node{
 int data;
 Node* left;
 Node* right;
 public: 
 Node(){

 }
   Node(int data){
    this->data=data;
    this->left=nullptr;
    this->right=nullptr;
   }

  Node* createTree(){

     cout<<"enter node value:";
int data;
     cin>>data;
     if(data==-1)
      return nullptr;

     Node* root=new Node(data);

     root->left=createTree();
     root->right=createTree();
     return root;
  }
   void preorder(Node* root){
       if(root==nullptr)
        return;
        
        cout<<root->data;
        
        preorder(root->left);
        preorder(root->right);
        
   }
   void inorder(Node* root){
       if(root==nullptr)
        return;
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
        
   }
    void postorder(Node* root){
       if(root==nullptr)
        return;
        postorder(root->left);
        cout<<root->data;
        postorder(root->right);
        
   }
   Node* levelOrder(Node* root){
       queue<Node*> q;
       q.push(root);
       q.push(nullptr);
       
       
       while(!q.empty()){
           Node* element=q.front();
           q.pop();
           if(element) cout<<element->data;
           
           if(element==nullptr){
               cout<<endl;
               if(!q.empty()){
                   q.push(nullptr);
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
       
   }
   
};

int main() {
  Node *n=new Node();
 n= n->createTree();
  n->postorder(n);
  n->levelOrder(n);
  return 0;
}
