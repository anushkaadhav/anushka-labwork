#include<iostream>
using namespace std;

inline double volume(double side)
{
   return side*side*side;
}

inline double volume(double radius,double height)
{
  return 3.14*radius*radius*height;
}

inline double volume(double radius,bool issphere)
{
  return (4.0/3.0)*3.14*radius*radius*radius;
}

int main()
{
   double radius,side,height;
   cout<<"enter side:";
   cin>>side;
   cout<<"volume of cube:"<<volume(side)<<endl;
   
   cout<<"enter radius and height:";
   cin>>radius>>height;
   cout<<"volume of cylinder:"<<volume(radius,height)<<endl;
   
  cout<<"enter radius:";
  cin>>radius;
  cout<<"volume of sphere6+-:"<<volume(radius)<<endl;
  return 0;
 }
