#include<iostream>
#include<conio.h>
using namespace std;

inline void duplicate(int *original,int *dummy,int blocks)
{
    int i;
    for(i=0;i<blocks;i++)
    {
        *(dummy+i) = *(original+i);
    }
}
inline void sorting(int *blockChain,int blocks)
{
    int i,j;
    for(i=0;i<blocks;i++)
    {
        for(j=i+1;j<blocks;j++)
        {
            if(*(blockChain+i)>*(blockChain+j))
            {
         *(blockChain+i) = *(blockChain+i)+*(blockChain+j);
         *(blockChain+j) = *(blockChain+i)-*(blockChain+j);
         *(blockChain+i) = *(blockChain+i)-*(blockChain+j);
            }

        }

    }
}
int main()
{
    int blocks;
    int i;
    bool flag=0;
    cout<<"Enter how many number you want to input: ";
    cin>>blocks;
    int *blockChain=new int[blocks];
    for(i=0;i<blocks;i++)
    {
        cin>>(*(blockChain+i));
    }
    sorting(blockChain,blocks);
   int index=blocks;


  int *dummy=new int[blocks];
  duplicate(blockChain,dummy,blocks);
    if(blocks%2==0)
        blocks=(blocks/2)-1;
    else
        blocks =(blocks-1)/2;



for(i=0;i<index;i++)
    {
        cout<<(*(blockChain+i));
    }
    i=0;
  do
  {
      if(flag){
        blocks=blocks+i;
        flag=0;}
      else{
        blocks=blocks-i;
        flag=1;}

      *(blockChain+blocks)=*(dummy+i);

      i++;
  }while(blocks!=0);
  cout<<endl;
  for(i=0;i<index;i++)
    {
        cout<<" "<<(*(blockChain+i));
    }
delete dummy;
delete blockChain;


}
