class Solution {
public:
      bool isPalindrome(string &s) {
        int n=s.length();
        for(int i=0,j=n-1;i<j;i++,j--){
            while(i<n&&!isalnum(s[i]))
              i++;
            while(j>0&&!isalnum(s[j]))
              j--;  

            if(i<j&&tolower(s[i])!=tolower(s[j])){
            n=-1;
            break;
            }
        }
        if(n!=-1)
        return true;

        return false;

    }
};
