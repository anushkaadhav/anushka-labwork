#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
  char fname[100],word[100];
  cout<<"\nenter file name:";
  cin>>fname;
  cout<<"\nenter the word to search:";
  cin>>word;
  
  ifstream in (fname);
  if(!in)
  {
     cerr<<"error :could not open the file.";
     return 1;
   }
   int charcnt=0,wordcnt,linecnt=0,wordocc=0;
   char ch,wordbuff[100];
   int index=0;
   bool wordin=false;
   
   while(in.get(ch))
   {
     charcnt++;
     if(ch=='\n')
         linecnt++;
       if(ch==' ' || ch=='\n' || ch=='\t')
       {
          if(wordin)
          {
             wordbuff[index]='\0';
             if(strcmp(wordbuff,word)==0)
               wordocc++;
               
               wordcnt++;
               index=0;
         }
           wordin=false;
       }
       else
       {
          wordbuff[index++]=ch;
          wordin=true;
       }
   }
   if(wordin)
   {
           wordbuff[index]='\0';
             if(strcmp(wordbuff,word)==0)
               wordocc++;
               
               wordcnt++;
   }
     cout<<"\nnumber of character:"<<charcnt<<endl;
     cout<<"\nnumber of words:"<<wordcnt<<endl;
    cout<<"\nnumber of lines:"<<linecnt<<endl;
    cout<<"\noccurrences of"<<word<<":"<<wordocc<<endl;
    in.close();
    return 0;
  }
