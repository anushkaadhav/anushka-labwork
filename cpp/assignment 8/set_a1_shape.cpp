#include<iostream>
#include<stdlib.h>
using namespace std;
class shape
{
   public:
      virtual  void accept()=0;
      virtual void area()=0;
      virtual void display()=0;
};

class circle:public shape
{
   private:
      float radius;
      float circle_area;
      public:
          void accept()
          {
            cout<<"\nradius of the circle:";
            cin>>radius;
          }
          void area()
          {
              circle_area=3.14*radius*radius;
            }
            void display()
            {
               cout<<"\nshape:circle"<<endl;
               cout<<"radius:"<<radius<<endl;
               cout<<"area:"<<circle_area<<endl;
            }
};

class rectangle:public shape
{
   private:
      float length,breadth;
      float rect_area;
      public:
          void accept()
          {
            cout<<"\nlength and breadth of the rectangle:";
            cin>>length>>breadth;
          }
          void area()
          {
              rect_area=length*breadth;
            }
            void display()
            {
               cout<<"\nshape:rectangle"<<endl;
               cout<<"length:"<<length<<"\tbreadth:"<<breadth<<endl;
               cout<<"area:"<<rect_area<<endl;
            }
};
class trapezoid:public shape
{
   private:
      float b1,b2,height;
      float trape_area;
      public:
          void accept()
          {
            cout<<"\nenter b1,b2,h  of the trapezoid:";
            cin>>b1>>b2>>height;
          }
          void area()
          {
              trape_area=0.5*(b1+b2)*height;
            }
            void display()
            {
               cout<<"\nshape:trapezoid"<<endl;
               cout<<"b1,b2:"<<b1<<b2<<"\theight:"<<height<<endl;
               cout<<"area:"<<trape_area<<endl;
            }
};
int main()
{
   int choice;
   shape* shape;
   while(1)
   {
      cout<<"\nchoose option in area:";
      cout<<"1:circle"<<endl;
      cout<<"2:rectangle"<<endl;
      cout<<"3:trapezoid"<<endl;
     cout<<"4:exit"<<endl;
     cout<<"\nenter your choice:";
     cin>>choice;
     
     switch(choice)
     {
       case 1:shape=new circle();
             break;
       case 2:shape=new rectangle();
             break;
       case 3:shape=new trapezoid();
             break;
        case 4: exit(1);
     }
     shape->accept();
     shape->area();
     shape->display();
     
     delete shape;
    }
     return 0;
}        
             
             
             
