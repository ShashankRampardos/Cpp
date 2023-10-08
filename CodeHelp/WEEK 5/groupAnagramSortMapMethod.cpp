class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> key;
        
        for(auto str:strs){//n times iterate , n is number of strings in vector
            string s=str;
            sort(s.begin(),s.end());//TC: klogk
            key[s].push_back(str);
        }// TC: total time complaxity is O(nklogk)
        vector<vector<string>> ans;
        for(auto it=key.begin();it!=key.end();it++)
          ans.push_back(it->second);

          return ans;
    }

};
