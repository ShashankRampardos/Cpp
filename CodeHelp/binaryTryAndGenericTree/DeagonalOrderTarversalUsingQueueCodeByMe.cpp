void logic(Node* root,map<int,vector<int>>& mp, int diagonalLevel=0){
    
     if(root==nullptr)
     return;
     
     logic(root->left,mp,diagonalLevel+1);
     mp[diagonalLevel].push_back(root->data);
     logic(root->right,mp,diagonalLevel);
}
vector<int> diagonal(Node *root)
{
   map<int,vector<int>> diagonals;
   vector<int> ans;
  logic(root,diagonals);
   
   for(auto mapping: diagonals){
      // copy(mapping.second.begin(), mapping.second.end(), back_inserter(ans));
      ans.insert(ans.end(),mapping.second.begin(),mapping.second.end());
   }
     // for (const auto& mapping : diagonals) {
       // ans.insert(ans.end(), mapping.second.begin(), mapping.second.end());
    //}
    return ans;

}
