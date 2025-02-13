#include<iostream>
using namespace std;

inline double areac(double radius)
{
   return 3.14*radius*radius;
 }
 
 inline double areasq(double side)
 {
   return side*side;
 }
 
 inline double arear(double length,double breadth)
 {
    return length*breadth;
 }
 
 int main()
 {
   double radius,side,length,breadth;
   cout<<"enter radius:";
   cin>>radius;
   cout<<"area of circle:"<<areac(radius)<<endl;
   
   cout<<"enter side:";
   cin>>side;
   cout<<"area of square:"<<areasq(side)<<endl;
   
   cout<<"enter the length and breadth:";
   cin>>length>>breadth;
   cout<<"area of rectangle:"<<arear(length,breadth)<<endl;
   
  return 0;
}
 
 
 
