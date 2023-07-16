#include<iostream>
class Result
{
    int result,totol_attempt,net_right,net_wrong,marks_for_right,marks_for_wrong;
public:
    void setResult(int tA,int nR,int nW,int mR=12,int mW=3){
           result=mR*nR-mW*nW;
    }
    void showResult(){
     std::cout<<result;
    }
};
int main(){}
