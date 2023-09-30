class Solution {
public:
     int subCount(string &s,int l,int h){
         int count=0;
         int n=s.size();
         while(l>=0&&h<n){

             if(s[l]!=s[h])
             break;
             count++;l--;h++;
         }
         return count;
     }
    int countSubstrings(string &s) {
        int n=s.size();
        int total=0;
        for(int center=0;center<n;center++){
           //when substring is odd 
           int oddCount=subCount(s,center,center);
           //when substind length is even
           int evenCount=subCount(s,center,center+1);
          total=oddCount+evenCount+total;
        }
        return total;
    }
};
