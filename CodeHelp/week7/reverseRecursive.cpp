// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void Rev(string& str, int l,int h){
   if(l>=h)
   return;
   swap(str[l],str[h]);
   Rev(str,l+1,h-1);
   
}
int main() {
    string str="abcdefgh";
    Rev(str,0,str.length()-1);
    cout<<str;
}
