#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

class department
{
  int did;
  char dname[30];
  char HOD[30];
  int nos;
  
  public:
     void accept()
     {
        cout<<"\nenter dept id:";
        cin>>did;
        cout<<"\nenter dept name:";
        cin>>dname;
        cout<<"\nenter dept hod :";
        cin>>HOD;
        cout<<"\nenter no of staff:";
        cin>>nos;
      }
      void write()
      {
        ofstream out("dept.txt",ios::app);
        if(!out)
        {
          cout<<"error openning file for writitng:";
          return;
          }
          out<<did<<" "<<dname<<" "<<HOD<<"  "<<nos<<"\n";
          out.close();
       }
       void display()
       {
         cout<<"\ndept id:"<<did<<"\ndept name:"<<dname<<"\ndept hod:"<<HOD<<"\ndept no of staff:"<<nos<<"\n---------------------------------------\n";
        }
        static void displayall()
        {
           ifstream in("dept.txt");
           if(!in)
           {
              cout<<"no records found";
              return;
            }
            department d;
            while(in>>d.did>>d.dname>>d.HOD>>d.nos)
            {
               d.display();
             }
             in.close();
         }
         static void countd()
         {
               ifstream in("dept.txt");
           if(!in)
           {
              cout<<"no records found";
              return;
            }
            int count =0;
            department d;
            while(in>>d.did>>d.dname>>d.HOD>>d.nos)
            {
                 count++;
             }
             in.close();
             cout<<"total number of department:"<<count<<endl;
          }
      };
      int main()
      {
            int choice,n;
            while(1)
            {
               cout<<"\n1.add department details \n2.display all departments \n3.count records \n 4.exit \n enter your choice:";
               cin>>choice;
               switch(choice)
               {
                  case 1:
                                  cout<<"\nenter no of departments:";
                                  cin>>n;
                                  for(int i=0;i<n;i++)
                                  {
                                     department d;
                                     d.accept();
                                     d.write();
                                   }
                                   break;
              case 2:
                             department::displayall();
                              break;
             case 3:
                            department::countd();
                            break;
            case 4:
                           exit(1);
            }
        }
     return 0;
 }
                          
           
