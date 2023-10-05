class Solution {
    void mapping(string& s){
        char map[256]={0};
        char start='a';
        
        for(auto ch: s){
            if(map[ch]==0)
            map[ch]=start;
            start++;
        }
        for(int i=0;i<s.size();i++){
            s[i]=map[s[i]];
        }

    }
public:
    bool isIsomorphic(string s, string t) {
        mapping(s);
        mapping(t);
        return s==t;
    }
};
