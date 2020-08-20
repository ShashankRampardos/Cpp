#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class volume
{
    float volume;
    class sphere
    {
        float radius;
        public:
        sphere(float r)
        {
            radius=r;
        }
       float getRRR()
        {
            return (radius*radius*radius);
        }
    };
    class cylinder
    {
        float radius;
        float height;
        public:
        cylinder(float r,float h)
        { if(r<0||h<0)
           cout<<"Input positive number";
           else
            radius=r;
            height=h;
        }
       float getRRH()
        {
            return (radius*radius*height);
        }
    };
    class cube
    {
        float side;
        public:
        cube(float s)
        {if(s<0)
        cout<<"input positive number";
        else
            side=s;
        }
        float getSS()
        {
            return (side*side);
        }

    };
    class cuboid
    {
        float l,b,h;
       public:
       cuboid(float l,float b,float h)
        { if(l<0||b<0||h<0)
        cout<<"input positive number";
        else
            this->l=l;
            this->b=b;
            this->h=h;
        }
      float getLBH()
       {
           return( l*b*h);
       }
    };
    class cone
    {
        float radius;
        float height;
       public:
       cone(float r,float h)
        { if(r<0||h<0)
           cout<<"Input positive number";
           else
            radius=r;
            height=h;
        }
       float getRRH()
        {
            return (radius*radius*height);
        }
    };
public:
   void Vsphere(float r)
    {  sphere s(r);

        cout<<"Volume of sphere is:"<<(4/3)*3.14*s.getRRR();

    }
   void Vcylinder(float r,float h)
    {    cylinder c(r,h);
        cout<<endl<<"Volume of cylinder:"<<c.getRRH()*3.14;
    }
   void Vcube(float s)
    {
        cube cb(s);
        cout<<endl<<"Volume of cube:"<<cb.getSS()*6;
    }
   void Vcuboid(float l,float b,float h)
    {
        cuboid co(l,b,h);
        cout<<endl<<"Volume of cuboid is:"<<co.getLBH();
    }
   void Vcone(float r,float h)
    {    cylinder c(r,h);
        cout<<endl<<"Volume of cylinder:"<<1/3*c.getRRH()*3.14;
    }

};
int main()
{
    volume v;
    float r,h;
    float l,b;
int s;
start:
cout<<"Volumes"<<endl;
cout<<"1.Sphere."<<endl;
cout<<"2.Cylinder."<<endl;
cout<<"3.Cube."<<endl;
cout<<"4.Cuboid."<<endl;
cout<<"5.Cone."<<endl;
cout<<"Select options"<<endl;
cin>>s;
switch(s)
{
  case 1:
      cout<<"Enter radius of sphere:";
  cin>>r;
  v.Vsphere(r);
  break;
  case 2:
    cout<<endl<<"Enter radius and height of cylinder:";
  cin>>r>>h;
  v.Vcylinder(r,h);
  break;
  case 3:
    cout<<endl<<"Enter side of cube:";
  cin>>l;
  v.Vcube(l);
  break;
  case 4:
    cout<<endl<<"Enter length, breadth of cuboid:";
  cin>>l>>b>>h;
  v.Vcuboid(l,b,h);
  break;
  case 5:
  cout<<endl<<"Enter radius and height of sphere:";
  cin>>r>>h;
  v.Vcone(r,h);
  break;
  default:
    cout<<"Enter correct option."<<endl;
    getch();
    system("cls");
    goto start;
    break;
}
try{
 bool b;
cout<<endl<<"Do you want to continue:(1/0)"<<endl;
cin>>b;
if(b==1){
        getch();
system("cls");
    goto start;
}
else
{
    throw 0;
}
}
catch(...)
{
    getch();
    exit(0);
}

  getch();
 return 0;
}









