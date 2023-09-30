class Solution {
public:
    bool isCharKTimesRepeated(string &t, char c,int k,int i){
      

        while(k){
            if(i>=0&&t[i--]==c)
              k--;
            else
              break;
        }
        if(!k)
         return true;
        else
         return false;
    }
    string removeDuplicates(string s, int k) {

         for(int i=1;i<s.size();){
         if(i>=k-1&&isCharKTimesRepeated(s,s[i],k,i)){//
             s.erase(i-k+1,k);
             i=i-k+1;
         }
         else{
            i++;
         }
         }
        return s;
    }
};
