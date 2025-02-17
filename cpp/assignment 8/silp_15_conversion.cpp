#include<iostream>
#include<stdlib.h>
using namespace std;

class conversion
{
   public:
     virtual void read()=0;
     virtual void convert()=0;
     virtual void display()=0;
  };
  class weight:public conversion
  {
    private:
      float grams;
      float kilograms;
      public:
         void read()
         {
            cout<<"\nenter weight in grams:";
            cin>>grams;
          }
          void convert()
          {
              kilograms=grams/1000;
           }
           void display()
           {
              cout<<grams<<"grams="<<kilograms<<"kilograms"<<endl;
            }
  };
   
   class volume:public conversion
  {
    private:
      float mililitres;
      float litres;
      public:
         void read()
         {
            cout<<"\nenter volume in  mililitres:";
            cin>> mililitres;
          }
          void convert()
          {
              litres= mililitres/1000;
           }
           void display()
           {
              cout<< mililitres<<" mililitres="<< litres<<" litres"<<endl;
            }
  };
class currency:public conversion
  {
    private:
      float rupees;
      float paise;
      public:
         void read()
         {
            cout<<"\nenter amount in rupees:";
            cin>>rupees;
          }
          void convert()
          {
              paise=rupees*100;
           }
           void display()
           {
              cout<<rupees<<"rupees="<<paise<<"paise"<<endl;
            }
  };   
  int main()
  {
     conversion* c;
     int choice;
     while(1)
     {
        cout<<"\nselect type:"<<endl;
        cout<<"1.weight";
        cout<<"2.volume";
        cout<<"3.currency";
        cout<<"4.exit"<<endl;
        
        cout<<"\nenter your choice:";
        cin>>choice;
        
        switch(choice)
        {
           case 1:
               c=new weight();
               break;
          case 2:
               c=new volume();
               break;
          case 3:
               c=new currency();
               break;
           case 4:
               exit(1);
        }
        
        c->read();
        c->convert();
        c->display();
        delete c;
     }
     return 0;
  }
        
                       
      
   
   
   
   
   
   
   
   
