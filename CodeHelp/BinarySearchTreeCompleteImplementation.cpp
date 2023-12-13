#include <iostream>
#include<queue>
using namespace std;

class Bst{

int data;
Bst *left,*right;
public:
Bst(){};
Bst(int data){
  this->data=data;
  left=nullptr;
  right=nullptr;
}
friend Bst* insertNode(Bst*,int);
friend void levelOrderTriversal(Bst*);
friend void inorderTriversal(Bst*);
friend void postorderTriversal(Bst*);
friend void preorderTriversal(Bst*);
friend Bst* maxNode(Bst*);
friend Bst* minNode(Bst*);
friend Bst* deleteNode(Bst*,int);
friend bool searchNode(Bst*,int);
};

Bst* insertNode(Bst *root,int data){
  if(root==nullptr){
    root=new Bst(data);
    return root;
  }

  if(root->data>data){
    root->left=insertNode(root->left,data);
  }
  else{
    root->right=insertNode(root->right,data);
  }
  return root;
}

void create(Bst* &root){//*&root is a pointer to pointer
  int data;
  cout<<"enter value for node:";
  cin>>data;
  while(data!=-1){
    root=insertNode(root,data);
    cout<<"enter value for node:";
    cin>>data;
  }    
}

void levelOrderTriversal(Bst* root){
  queue<Bst*> q;
  q.push(root);
  q.push(nullptr);

  while(!q.empty()){
    Bst* element=q.front();
    q.pop();
    
    if(element==nullptr){//for creating next line and managing marker for next line.
      cout<<endl;
      if(!q.empty())
        q.push(nullptr);
    }
    else{
      cout<<element->data<<" ";
    if(element->left!=nullptr)//left exist karta hay kya
      q.push(element->left);
    if(element->right!=nullptr)//right exist karta hay kya
      q.push(element->right);
        }
  }
}
void preorderTriversal(Bst* root){
  if(root==nullptr)
    return;
  cout<<root->data;
  preorderTriversal(root->left);
  preorderTriversal(root->right);
  
}
void postorderTriversal(Bst* root){
  if(root==nullptr)
    return;
 
  postorderTriversal(root->left);
  postorderTriversal(root->right);
   cout<<root->data;


}
void inorderTriversal(Bst* root){
  if(root==nullptr)
    return;
  
  inorderTriversal(root->left);
  cout<<root->data;
  inorderTriversal(root->right);


}

Bst* maxNode(Bst* root){
 if(root==nullptr)
   return nullptr;
  while(root->right!=nullptr){
    root=root->right;
  }
  return root;
}
Bst* minNode(Bst* root){
 if(root==nullptr)
   return nullptr;
  while(root->left!=nullptr){
    root=root->left;
  }
  return root;
}
bool searchNode(Bst* root,int target){//tC:O(H) 
   if(root==nullptr)//base case
     return false;
  if(root->data==target)//ek case solve
    return true;
  int leftAns=false,rightAns=false;
  if(root->data>target)
    leftAns=searchNode(root->left,target);
  else
   rightAns=searchNode(root->right,target);
  return leftAns||rightAns;
}
Bst* deleteNode(Bst* root,int target){
    if(root==NULL)
      return nullptr;
  if(root->data==target){
    // apply one of the  cases
    //leaf node case
    if(root->left==nullptr&&root->right==nullptr){
      delete root;
      return nullptr;
    }

    //left child case
    if(root->left!=nullptr&&root->right==nullptr)
    {
      Bst* temp=root->left;
      delete root;
      return temp;
    }
    //right child case
    if(root->left==nullptr&&root->right!=nullptr)
    {
      Bst* temp=root->right;
      delete root;
      return temp;
    }
    //4th(baap case) when both child exist of a target node
    if(root->left&&root->right){
      //get max node from left subTree.
      Bst* max=maxNode(root->left);
      //copy max value to darget node
      root->data=max->data;
      //now make max node target and delete it
      root->left=deleteNode(root->left,max->data);
    }
  }
  else if(root->data>target)
    root->left=deleteNode(root->left,target);
  else 
    root->right=deleteNode(root->right,target);

  return root;//ub agay pass kar root ko higher call function kay root->left ya root->right may
}

int main() {
  Bst* root=nullptr;
  create(root);
  //cout<<root;
  cout<<endl<<"HI";
  levelOrderTriversal(root);
  
  inorderTriversal(root);
  deleteNode(root,5);
  levelOrderTriversal(root);
}
