#include<iostream>
using namespace std;

class Time
{
   private:
       int hours,minutes,seconds;
   public:
         int toseconds()
         {
            return (hours*3600)+(minutes*60)+(seconds);
         }
        friend istream& operator>>(istream &in,Time &t);
        friend ostream& operator<<(ostream &out, const Time &t);
 };
 istream& operator>>(istream &in,Time &t)
 {
     cout<<"\nenter hours:";
     in>>t.hours;
     cout<<"\nenter minutes:";
     in>>t.minutes;
     cout<<"\nenter seconds:";
     in>>t.seconds;
     return in;
 }
 ostream& operator<<(ostream &out,const Time &t)
 {
    out<<t.hours<<"hrs\t"<<t.minutes<<"min\t"<<t.seconds<<"sec";
    return out;
  }
  
  int main()
  {
     Time t1;
        cout<<"\nenter time details:";
        cin>>t1;
        cout<<"\ntime enterd:"<<t1<<endl;
        
        cout<<"\ntotal time in seconds:"<<t1.toseconds()<<"sec"<<endl;
        
        return 0;
 }
