#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream outf("ITEM.txt");

   cout<<"enter item name:";
   char name[20];
   cin>>name;
   outf<<name<<"\n";
   
   cout<<"enter item cost:";
   float cost;
   cin>>cost;
   outf<<cost<<"\n";
   outf.close();
   
   ifstream inf("ITEM.txt");
   char n[20];
   float c;
   inf>>n;
   inf>>c;
   cout<<"item name:"<<n;
   cout<<"item cost:"<<c;
   inf.close();
   
   return 0;
 }
