// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int findLast(string& str, int index,char target){
    if(index<0)
      return -1;
    if(str[index]==target)
    return index;
    findLast(str,index-1,target);
    
}
int main() {
    string str="babababablackship";
    cout<<findLast(str,str.length()-1,'z');
}
