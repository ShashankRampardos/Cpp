class Solution {

     void map(string &s){//map and update the given string to its mapping

         char c[123]={0};
         char start='a';

         for(auto ch:s){
             if(c[ch]==0){
             c[ch]=start;
             start++;
             }
         }
         for(int i=0;i<s.size();i++){
             s[i]=c[s[i]];
         }

     }
public:     
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
          
               map(pattern);//pattern updated to its mapping starts from 'a'
               vector<string> ans;
               for(auto s:words){// map and update each string of words vector and compare with updated pattern.
                   string temp=s;
                   map(s);
                   if(s==pattern){
                       cout<<s<<" ";
                       ans.push_back(temp);
                   }
               }
               return ans;//contains matched patterns.
    }
};
