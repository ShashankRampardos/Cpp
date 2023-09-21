//search space, predicate function concept

class Solution {
public:
     long long divide(int dividend, int divisor) {
       
        int  l=1;
        int Dividend=abs(dividend);
        int Divisor=abs(divisor);
        int  h=abs(dividend);
        

       long long mid=l+(h-l)/2;
        long int ans=-1;
        while(l<=h){

            if(mid*Divisor==Dividend){
             ans=mid;break;
            }
            else if(mid*Divisor<Dividend){
                ans=mid;
                l=mid+1;
             }
             else{
                 h=mid-1;
             }
             mid=l+(h-l)/2;
        }
        
      if(dividend<0&&divisor>0||dividend>0&&divisor<0)
        return -ans;
         
        else if(divisor==0) cout<<"error";
        
        else if(dividend==0||Dividend<Divisor)
         return 0; 

        return ans;
        
    }
};
