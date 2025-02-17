#include<iostream>
using namespace std;

class Array
{
   private:
        float arr[10];
        int n;
   
   public:
        void accept()
        {
           cout<<"\nenter how many data to store in array:";
           cin>>n;
           
           cout<<"\nenter Float data in array:";
           for (int i=0;i<n;i++)
              cin>>arr[i];
          }     
         void display()
         {
            cout<<"\nArray elements:";
            for(int i=0;i<n;i++)
               cout<<arr[i]<<"   ";
               cout<<endl;
         }
         friend void operator++(Array &obj);
         friend void operator--(Array &obj);
         
 };
 void operator++(Array &obj)
 {
     for(int i=0;i<obj.n;i++)
       obj.arr[i] +=1.0;
   }
 void operator--(Array &obj)
 {
     for(int i=0;i<obj.n;i++)
       obj.arr[i] -=1.0;
   }
     
     int main()
     {
         Array obj;
         obj.accept();
         
         cout<<"\norginal";
         obj.display();
         
         ++obj;
         cout<<"\nAfter ++";
         obj.display();
         
         --obj;
         cout<<"\nAfter --";
         obj.display();
        
        return 0;
     }
         
