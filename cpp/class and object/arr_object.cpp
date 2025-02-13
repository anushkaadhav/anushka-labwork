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
               void display()
               {
                  cout<<"rollno:"<<rollno<<endl;
                  cout<<"name:"<<name<<endl;
                }
  };
  int main()
  {
     student s[10];
     int n,i;
     
     cout<<"enter no of record to store:";
     cin>>n;
     
     for(i=0;i<n;i++)
      s[i].accept();
      
      for(i=0;i<n;i++)
      s[i].display();
}
