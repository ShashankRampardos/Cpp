class Solution {
public:
    int myAtoi(string s) {
        
        
        int sign=1;
        int num=0;
        double dec=0;
        int i=0;

            while(i<s.size()&&(s[i]==' '))// ignore all leading spaces
            i++;
            if(s[i]=='-'){
                sign=-1;
                i++;
            }
            else
            if(s[i]=='+'){
                sign=1;
                i++;
            }
            
            while(i<s.size()&&s[i]>='0'&&s[i]<='9'){
               if((long long)num*10+sign*(s[i]-'0')>INT_MAX)
                   num=INT_MAX;
                else if((long long)num*10+sign*(s[i]-'0')>0&&(long long)num*10+sign*(s[i]-'0')<INT_MAX)   
                   num=num*10+(s[i]-'0');
                else if((long long)num*10+sign*(s[i]-'0')<INT_MIN)
                  num=INT_MIN;
                else
                  num=(long long)num*10+sign*(s[i]-'0') ; 
              
               i++;
            }
            return num;
            
        

    }
};
