#include<iostream>
using namespace std;

class Distance
{ 
   private:
      int kilometers,meters;
      public:
         void acceptdistance();
         void displaydistance();
         void normalize();
         Distance& operator+=(const Distance &d);
         bool operator>(const Distance &d);
 };
 
  void Distance:: acceptdistance()
  {
     cout<<"\nenter kilometers:";
     cin>>kilometers;
     cout<<"\nenter meters:";
     cin>>meters;
     normalize();
       }
   void Distance::displaydistance()
   {
      cout<<kilometers<<"km\t"<<meters<<"m"<<endl;
    }
  void Distance::normalize()
  {
        if(meters>=1000)
        {
            kilometers+=meters/1000;
            meters%=1000;
         }
   }
Distance&  Distance:: operator+=(const Distance &d)
{
     kilometers=kilometers+d.kilometers;
     meters=meters+d.meters;
     normalize();
     return *this;
 }
   bool Distance:: operator>(const Distance &d)
   {
       if(kilometers>d.kilometers)
         return true;
         else if(kilometers==d.kilometers && meters>d.meters)
             return true;
           
         return false;
    }
    int main()
    {
       Distance d1,d2;
       cout<<"\nenter d1:";
       d1.acceptdistance();
       cout<<"\nenter d2:";
       d2.acceptdistance();
       
       cout<<"\ndistance1:";
       d1.displaydistance();
       cout<<"\ndistance2:";
       d2.displaydistance();
       
       d1+=d2;
       cout<<"\nafter adding distance d2 to distance d1:\n";
       d1.displaydistance();
       
       if(d1>d2)
              cout<<"\ndistance d1 is greater than distance d2";
       else
              cout<<"\ndistance d2 is greater than distance d1";
           
           return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
