#include<iostream>
#include<fstream>
using namespace std;

struct student
{
  int rollno;
  char name[30];
  float percentage;
};

int main()
{
    int n;
    cout << "\nEnter how many students: ";
    cin >> n;
    
    student s[n];
    ofstream out("student.txt");
    if(!out)
    {
       cout<<"error:could not open file for writing!"<<endl;
       return 1;
      }
      for (int i=0;i<n;i++)
      {
         cout<<"\nenter details of student"<<i+1<<":"<<endl;
         cout<<"rollno:";
         cin>>s[i].rollno;
         cout<<"name:";
         cin>>s[i].name;
         cout<<"percentage:";
         cin>>s[i].percentage;
         
         out<<s[i].rollno<<" "<<s[i].name<< "  "<<s[i].percentage<<endl;
        }
        out.close();
        cout<<"student information saved sucessfully";
        
        
        return 0;
  }
