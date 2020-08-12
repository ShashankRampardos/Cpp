#include<iostream>
#include<conio.h>
using namespace std;
template<class X>
class ArrayList
{
   class ControlBlock
   { public:
       int capacity;
       X *arr_ptr;
   };
   ControlBlock *s;
   public:
       ArrayList(int capacity)
       {
           s=new ControlBlock;
           s->capacity=capacity;
           s->arr_ptr=new X[s->capacity-1];
       }
       void addElement(int index,X data)
       {
           if(index>=0&&index<=s->capacity-1)
               s->arr_ptr[index]=data;
           else
            cout<<"\nArray index is not valid";
       }
       void viewElement(int index,X &data)
       {
           if(index>=0&&index<=s->capacity-1)
            data=s->arr_ptr[index];
           else
            cout<<endl<<"Array index is not valid";
       }
       void viewList()
       {
           int i;
           for(i=0;i<(s->capacity);i++)
            cout<<" "<<s->arr_ptr[i];
       }

};
int main()
{   float data;
int index;
int n;
/*cout<<"Enter size of array:";
cin>>n;
cout<<"Enter index to where insert element:";
cin>>index;*/
    ArrayList <float>list1(3);
    list1.addElement(0,5.6);
    list1.addElement(1,5.7);
    list1.addElement(2,5.8);
    //list1.viewElement(3,data);
    list1.viewList();
    //cout<<endl<<"Value in the array is="<<data;
}
