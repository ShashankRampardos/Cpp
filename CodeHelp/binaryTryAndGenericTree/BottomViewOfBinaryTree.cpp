    vector<int> topView(Node *root)
    {
        map<int,int> mp;//first int is for horizontal distance, second int is for tree node data.
        queue<pair<Node*,int>> q;// pair tree node and horizontal distance
        q.push(make_pair(root,0));//pari=make_pair(-----); type expression

      //level order tarversal
        while(!q.empty()){
          // get first data of queue  
          pair<Node*,int> queueElement=q.front();
            q.pop();
            Node* rootNode=queueElement.first;
            int horizontalDistance=queueElement.second;

         
           //over wight map entries everytime 
              mp[horizontalDistance]=rootNode->data;
         

             // push left child with horizontalDistance-1, left side goes negative, middle is 0 and right side goes positive
             if(rootNode->left!=nullptr)
             q.push(make_pair(rootNode->left,horizontalDistance-1));
             //push right child
             if(rootNode->right!=nullptr)
             q.push(make_pair(rootNode->right,horizontalDistance+1));
             
             //level order logic ends.
        }
      //store map data of tree node in a vector
        vector<int> ans;
        for(auto i:mp){
            ans.push_back(i.second);
        }
        //return that vector which has bottom view data.
        return ans;
    }
