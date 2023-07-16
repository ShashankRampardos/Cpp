#include<iostream>

using namespace std;
class Account
{
    int account_no,balance;
    static int roi;
public:
    static void setRoi(int r){
    roi=r;
    }
    static int getRoi(){
    return roi;
    }
    void setBalance(int b){
    balance=b;
    }
    void setAccountNo(int acc){
    account_no=acc;
    }
    int getAccountNo(){
    return account_no;
    }
    int getBalance(){
    return balance;
    }

};

int main(){

}

