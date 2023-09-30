class Solution {
public:
    bool isPalindrome(string& s ,int l,int h){
        int n=s.size();
        while(l<h){
            if(s[l]!=s[h])
               return false;
            else{
                 l++;h--;
              }
        }
        return true;
    }
    bool validPalindrome(string& s) {
        int n=s.size();
        int i=0,j=n-1;
        
        while(i<j){

            if(s[i]!=s[j]){
                return isPalindrome(s,i+1,j)||isPalindrome(s,i,j-1);
            }
            i++;j--;
        }
        return true;
    }
};
