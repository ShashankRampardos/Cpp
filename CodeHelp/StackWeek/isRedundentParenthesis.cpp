#include <bits/stdc++.h>
using namespace std;
bool isRedundentParenthesis(string &s){
  //create stack
  stack<char> st;
  //treverse all string char by char
  for(int i=0;i<s.length();i++){
     
    bool isOperatorPresent=false;
     char ch=s[i];
     if(ch=='('||ch=='+'||ch=='*'||ch=='-'||ch=='/'){
       st.push(ch);
     }//jab ) aya tabh
     else if(ch==')'){
       //now move back wort till ')' appear
     //  check kar abar operator aya kya rastay may
         while(!st.empty()&&st.top()!='('){
           if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
             isOperatorPresent=true;
           }
           st.pop();
         }
       // pop ')'
         st.pop();
       //ek bhi operator nahi mila matlabh redundent ha bracket
         if(isOperatorPresent==false){
           return true;
         }
         
     }
  }
  //yaha takh aya matlabh koi bracket redundent nahi hay
  return false;
}

int main() 
{
    string s="(((a+b)*(c+d)))";
    cout<<isRedundentParenthesis(s);
    return 0;
}
