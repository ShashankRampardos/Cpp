// unconditional hay bahot dileme hay may nahi kar rah yey class pure like building treverse funcionts, etc.
class NaryTree{
 public:
  int data;
  vector<NaryTree*> children;
  public:
  NaryTree(){}
  NaryTree(int data){
      this->data=data;
  }
};

NaryTree* createTree(){
    cout<<"enter Node value:";
    int val;
    cin>>val;
    if(val==-1)
     return nullptr;
    
    NaryTree* root=new NaryTree(val);
    bool flag=true;
            cout<<"toEndInsert at Node"<<root->val <<"type 0 else 1:";
        cin>>flag;
    while(flag){
        
        root->children.push_back(createTree());
        cout<<"toEndInsert at Node"<<root->val <<"type 0 else 1:";
        cin>>flag;
    }
    return root;
}
