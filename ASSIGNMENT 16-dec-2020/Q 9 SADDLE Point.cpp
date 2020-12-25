#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
inline void input(int **matrix,int order)
{
   int i,j;
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            cin>>*(*(matrix+i)+j);
        }
    }
}
inline void output(int **matrix,int order)
{
    int i,j;
    for(i=0;i<order;i++)
    {cout<<"|";
        for(j=0;j<order;j++)
        {
            cout<<(*(*(matrix+i)+j));
        }
      cout<<"|"<<endl;
    }
}
int main()
{
    int order;
    int i1=0,i2=0,j=0;
    int small,big;
    cout<<"Enter order of square Matrix: ";
    cin>>order;

    int **matrix=new int*[order];
    for(int i1=0;i1<order;i1++)
        matrix[i1]=new int[order];
      cout<<"Input "<<order*order<<" elements:"<<endl;
      input(matrix,order);

  for(i1=0;i1<order;i1++)
  {  small=*(*(matrix+i1)+j);
      for(j=0;j<order;j++)
      { if(matrix[i1][j]<small)
           small=*(*(matrix+i1)+j);
      }
j=0;
      big=*(*(matrix+j)+i1);
     for(i2=0;i2<order;i2++)
    {
      for(j=0;j<order;j++)
      {  if(*(*(matrix+j)+i2)>big)
        big=*(*(matrix+j)+i2);
      }

      if(small==big)
      {
          cout<<small<<" is Saddle Point of this matrix"<<endl;
          output(matrix,order);
          getch();
         delete matrix;
          exit(0);
      }
    }
   j=0;
  }
  cout<<"This Matrix have no Saddle point"<<endl;
  output(matrix,order);
  getch();
   delete matrix;
}
