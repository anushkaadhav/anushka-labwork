#include<iostream>
#include<string>
using namespace std;

class Date
{
   int dd,mm,yyyy;
   string months[12];
   public:
      Date(int day,int month,int year)
      {
         string tmonth[12]={"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
         for(int i=0;i<12;i++)
         {
            months[i]=tmonth[i];
            if(month<1||month>12)
            {
               cout<<"invalid months! setting default values(01-jan-1900).\n";
                dd=1;
                mm=1;
                yyyy=1900;
               }
               else
               {
                  dd=day;
                  mm=month;
                  yyyy=year;
                 }
          }
      }
          void display_date()
          {
             cout<<dd<<"-"<<months[mm-1]<<"-"<<yyyy;
           }
  };
   int main()
   {
      int day,month,year;
      cout<<"\nenter the date in format(dd,mm,yyyy):";
      cin>>day>>month>>year;
      
      Date d(day,month,year);
      cout<<"\nDate:";
      d.display_date();
      
      return 0;
   }
