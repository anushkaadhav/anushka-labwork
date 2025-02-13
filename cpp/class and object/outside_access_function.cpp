#include<iostream>
using namespace std;
class student
{
  private: 
              int rollno;
              char name[20];
   public:
              void accept()
              {
                 cout<<"enter rollno:";
                 cin>>rollno;
                 cout<<"enter name:";
                 cin>>name;
               }
            void display();
  };
 inline void student::display()
               {
                  cout<<"rollno:"<<rollno<<endl;
                  cout<<"name:"<<name<<endl;
                }
  int main()
  {
     student s;
     s.accept();
     s.display();
  }            
             
