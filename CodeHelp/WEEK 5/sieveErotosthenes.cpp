vector<bool> sieve(int n){
   vector<bool> s(n+1,true);
   s[0]=s[1]=false;
   for(int i=2;i*i<=n;i++){//i<=n in standard code not in optimised code
      if(s[i]){  // if you need to count here number of promes then u have to remove i*i and write just i to treverse till the end of array
      int j=i*i; //j=i*2 in unoptimised code
    while(j<=n){
        s[j]=false;
        j+=i;
         }
      }
   }
   return s;
}
