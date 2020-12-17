#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    short i,j;
    short row,column;
    short degree;
    short coefficient;
    cout<<"Enter degree of Pascal Triangle: ";
    cin>>degree;
    row=degree;
    column=(2*degree-1);
    for(i=1;i<=row;i++)
    {  coefficient=1;
        for(j=1;j<=column;j++)
        {
            if(j>=(row+1)-i&&j<=(row-1)+i){
                cout<<coefficient;
               if(j<degree)
                coefficient++;
               else
                coefficient--;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
getch();
}
