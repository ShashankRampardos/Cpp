
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

//cin>>v;
template <typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& v) {
    for (T& element : v) {
        is >> element;
    }
    return is;
}
//lcm of vector elements
template <typename T>
T lcmV(const std::vector<T>& vec) {
    if (vec.empty()) {
        return 0; // Return 0 if the vector is empty
    }
    // Initialize lcm with the first element of the vector
    T lcm = vec[0];

    // Iterate through the vector starting from the second element
    for (size_t i = 1; i < vec.size(); ++i) {
        // Calculate the LCM of the current element and the current value of lcm
        lcm = std::lcm(10,20);
    }

    return lcm; // Return the final LCM of the vector
}

//gcd of vector elements
template <typename T>
T gcdV(const std::vector<T>& vec) {
    if (vec.empty()) {
        return 0; // Return 0 if the vector is empty
    }

    // Initialize gcd with the first element of the vector
    T gcd = vec[0];

    // Iterate through the vector starting from the second element
    for (size_t i = 1; i < vec.size(); ++i) {
        // Calculate the GCD of the current element and the current value of gcd
        gcd = __gcd(gcd, vec[i]);
    }

    return gcd; // Return the final GCD of the vector
}




