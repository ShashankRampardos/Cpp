class Solution {
public:
    string removeDuplicates(string &s) {
        stack<char> judge;
           
        for(auto ch: s){
            if(!judge.empty()&&judge.top()==ch)
             judge.pop();
            else 
             judge.push(ch);
        }
        string ans;
       
       while (!judge.empty()) {
    ans = ans + judge.top();
    judge.pop();
}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
