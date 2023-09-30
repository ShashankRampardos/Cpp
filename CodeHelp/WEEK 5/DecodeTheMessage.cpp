class Solution {
public:
    string decodeMessage(string& key, string& message) {
        
        char map[260]={0};//hashing ke tara index represent a character and map[index] represent mapping of that character
        char start='a';
        for(auto ch:key){//auto means automatic choose data type
          if(map[ch]==0&&ch!=' '){
            map[ch]=start;
            start++;
          }
        }
        string ans;
        for(auto ch:message){
            if(ch!=' '){
            ans.push_back(map[ch]);
            }
            else
            ans.push_back(' ');
        }
        return ans;
    }
};
