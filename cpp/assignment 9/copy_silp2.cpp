#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char source[100],dest[100];
   cout<<"\nenter source file name:";
   cin>>source;
   cout<<"\nenter destination file name:";
   cin>>dest;
   ifstream in(source);
   ofstream out(dest);
   
   if(!in)
    {
       cerr<<"Error :could not open source file!"<<endl;
       return 1;
     }
     if(!out)
     {
        cerr<<"Error :could not open destination file!"<<endl;
       return 1;
     }
     
     char ch;
     while(in.get(ch))
     {
         out.put(ch);
      }
      
      cout<<"file copy successfully";
      in.close();
      out.close();
      
     return 0;
   }
