#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

class employee
{
   public:
     int eid;
     char ename[50];
     float esal;
     
     void accept()
     {
       cout<<"\nenter  emp  id:";
       cin>>eid;
       cout<<"\nenter emp name:";
       cin>>ename;
       cout<<"\nenter emp salary:";
       cin>>esal;
     }
     void display()
     {
        
