// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void permuteJi(string &str,int index){
    //base case
    if(index>=str.length())
    {
        cout<<str<<"|";
        return;
    }
    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        //recursive bhaiya agaya ub
        permuteJi(str,index+1);
        //backTracking
        swap(str[index],str[j]);
    }
}
void permute(string &str){
    permuteJi(str,0);
}
int main() {
    string str="abc";
    permute(str);
    return 0;
}
