#include<iostream>
using namespace std;
class display
{
  static int value;
  int val;
  public:
                  void getdata(int a,int b)
                  {
                     val=a;
                     value=b;
                   }
                   void disp()
                   {
                     cout<<"\nval="<<val<<endl;
                     cout<<"\nvalue(static)="<<value<<endl;
                   }
 };
 
 int display::value;
 
 int main()
 {
   display d;
   d.disp();
   d.getdata(4,44);
   d.disp();
}








































