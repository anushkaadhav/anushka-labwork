#include<iostream>
using namespace std;
class distance
{
   float feet;
   float inches;
   public:
              void input()
              {
                
                 cout<<"enter feet:";
                 cin>>feet;
                 cout<<"enter inches:";
                 cin>>inches;
              }
              void add();
              void output();
};

 static void distance::add( distance d1,distance d2)
{
     float sum;
     sum=(d1.feet+d1.inches)+(d2.feet+d2.inches);
    cout<<"sum of distance2:"<<sum;
}
void distance::output()
{
   cout<<"feet of object :"<<feet<<endl;
   cout<<"inches of object:"<<inches<<endl;
 }  
 
 int main()
 {
    distance d1,d2;
    d1.input();
    d1.output();
    d1.add();
    
    d2.input();
    d2.outout();
    d2.sum();
 }
