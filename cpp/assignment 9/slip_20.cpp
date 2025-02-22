#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

void processfile()
{
    ifstream in("sample.txt");
    ofstream upper("upper.txt");
    ofstream  lower("lower.txt");
    ofstream digit("digit.txt");
    ofstream convert("convert.txt");
    
    if(!in)
    {
      cout<<"\nfile is not present";
    }
      
    char ch;
    while(in.get(ch))
    {
      if (isupper(ch))
          upper<<ch;
        else if (islower(ch))
           lower<<ch;
         else if (isdigit(ch))
            digit<<ch;
        
        if (isupper(ch))
           convert<<char(tolower(ch));
        else if (islower(ch))
           convert<<char(toupper(ch));
           else
              convert<<ch;
     }
     
     in.close();
     upper.close();
     lower.close();
     digit.close();
     convert.close();
     
     cout<<"file processing complete.check output filess";
    }
    
    int main()
    {
       processfile();
       
       return 0;
    }
