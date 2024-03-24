
#define mod 1000000007
#define modSub(a,b) ((((a)%mod-(b)%mod)%mod+mod)%mod)
#define modAdd(a,b) (((a)%(mod)+(b)%(mod))%(mod))
#define modMul(a,b) ((((a)%(mod))*((b)%(mod)))%mod)

#define ll long long

//fast expo with modulo result
ll powMod(ll a,ll b){
    ll ans = 1;
  while(b){
    if(b&1)
       ans = modMul(ans,a);

    a = modMul(a,a);
    b >>= 1;
  }
  return ans;
}
//fast exponentiation
int power(int a,int b){
 int ans = 1;
 while(b > 0){
    if(b & 1)ans = ans*a;
    a = a*a;
    b >>= 1;
 }
 return ans;
}


