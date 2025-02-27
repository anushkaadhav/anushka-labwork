#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;
    int length;
public:
    String(const char *s = " ")
    {
        length=strlen(s);
        str = new char[length+ 1];
        strcpy(str, s);
    }

    ~String()
    {
        delete[] str;
    }

   void acceptstring()
   {
     char temp[100];
     cout<<"\nenter string:";
     cin>>temp;
     length=strlen(temp);
     delete[] str;
     str=new char[length+1];
     strcpy(str,temp);
    }
    void displaystring()
    {
      cout<<str;
    }
    void operator!();
    char operator[](int index);
    bool operator<(const String &s);
 };
 void String::operator!()
 {
     for(int i=0;i<length;i++)
     {
         if(isupper(str[i]))
            str[i]=tolower(str[i]);
          else if (islower(str[i]))
             str[i]=toupper(str[i]);
       }
  }
  char String::operator[](int index)
  {
     if(index>=0 && index<length)
           return str[index];
        else
           {
              cout<<"\nerror:index out of bounds";
              return '\0';
            }
   }
   bool String::operator<(const String &s)
   {
        return length<s.length;
    }
    int main()
    {
       String str1,str2;
       cout<<"\nenter string 1:";
       str1.acceptstring();
         cout<<"\nenter string 2:";
       str2.acceptstring();
       
       cout<<"\nstring 1:\n";
       str1.displaystring();
         cout<<"\nstring 2:\n";
       str2.displaystring();
       
       int index;
       cout<<"\nenter index to get character from string 1:";
       cin>>index;
       char ch=str1[index];
       if(ch!='\0')
           cout<<"character of index"<<index<<":"<<ch<<endl;
           
           if(str1<str2)
             cout << "\nString 1 is shorter than String 2" << endl;
        else
    {
        cout << "\nString 1 is not shorter than String 2" << endl;
    }
return 0;
}
   
