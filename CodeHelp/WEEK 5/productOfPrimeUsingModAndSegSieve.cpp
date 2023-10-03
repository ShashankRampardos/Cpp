class Solution{
public:
  vector<bool> sieve(int n){
      vector<bool> s(n+1,true);
      s[0]=s[1]=false;
      for(int i=2;i*i<=n;i++){
          if(s[i]){
              
          int j=i*i;
          while(j<=n){
              s[j]=false;
              j=j+i;
          }
         }  
      }
      return s;
  }
  
    long long primeProduct(long long L, long long R){
        
        vector<bool> s=sieve(sqrt(R));//-----------------------
      vector<int> prim;
      for(int i=0;i<s.size();i++){
          if(s[i])
          prim.push_back(i);
      }
      
      vector<bool> segS(R-L+1,true);          // segSieveCode
      
      for(auto prime: prim){
          
          int first=(L/prime)*prime;
          if(first<L)
          first=first+prime;
          
          first =max(prime*prime,first);
          while(first<=R){
              segS[first-L]=false;
              first+=prime;
          }
      }//----------------------------------------------
      long long product=1;
      long long mod=1000000007;
      for(long long i=0;i<segS.size();i++)
           if(segS[i])
               product=product*(i+L)%mod;
             // product*=(i+L)%mod;
           
      return product%mod;
    }
};
