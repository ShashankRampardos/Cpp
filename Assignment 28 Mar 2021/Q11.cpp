#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int num;
    srand(time(0));

    for(int i=0;i<5;i++)
    cout<<rand()<<" ";
}
