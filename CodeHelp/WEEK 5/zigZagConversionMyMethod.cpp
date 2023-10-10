class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> plane(numRows,"");// it is like 2d matrix to store zigzag without spaces( wthout storing in zigzag pattern )
        int i=0,j=0;// i for placing charactes in vector and j for treversin in s;
         if(numRows==1)
         return s;
        while(j<s.size()){
            while(i<numRows&&j<s.size()){// go down
           plane[i++]+=s[j++];
            }
            i-=2;
        while(i>=0&&j<s.size()){// go up
            plane[i--]+=s[j++];
        }
        i+=2;    
        }
        
        string ans;// final answer
        for(int x=0;x<plane.size();x++)// convert ans in from 2d to 1d
            ans+=plane[x];  
        return ans;
    }
};
