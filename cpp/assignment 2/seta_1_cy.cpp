#include<iostream>
using namespace std;
class cylinder
{
   float radius,height;
   public:
                 void setradius(float r)
                 {
                    radius=r;
                 }
                 void setheight(float);
                 float area();
                 float volume();
                 
};

void cylinder::setheight(float h)
{
    height=h;
}

float cylinder::area()
{ 
   float a;
    a=2*3.14*radius*(radius+height);
    return a;
}

float cylinder::volume()
{
  float v;
  v= 3.14*radius*radius*height;
  return v;
 }

int main()
{
   cylinder c,c1;
   c1.setradius(2.3);
   c1.setheight(4.5);
    cout<<"area of cylinder:"<<c1.area()<<endl;
   cout<<"volume of cylinder:"<<c1.volume()<<endl;
   float r,h;
   cout<<"enter radius:";
   cin>>r;
   cout<<"enter height:";
   cin>>h;
   c.setradius(r);
   c.setheight(h);
   cout<<"area of cylinder:"<<c.area()<<endl;
   cout<<"volume of cylinder:"<<c.volume();
   return 0;
}
   
             
