#include<iostream>
#include<iomanip>#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Flight
{
  protected:
     int Flight_no;
     char Flight_name[50];
     public:
       void setFlightDetails(int f_no,char f_name[])
       {
          Flight_no=f_no;
          strcpy(Flight_name,f_name);
        }
       void displayFlightDetails()
       {
         cout<<"Flight number:"<<Flight_no<<endl;
          cout<<"Flight name:"<<Flight_name<<endl;
         }
   };
   
   class Route:public Flight
   {
       protected:
                char Source[50];
                char Destination[50];
        public:
                void setRouteDetails(char src[],char dest[])
                 {
                       strcpy(Source,src);
                       strcpy(Destination,dest);
                  }
                   void displayRouteDetails()
                 {
                    displayFlightDetails();
                    cout<<"Source:"<<Source<<endl;
                       cout<<"Destination:"<<Destination<<endl;
                 }
};
class Reservation:public Route
{
   private:
           int Number_of_seats;
           char Class[20];
           double Fare;
           char Travel_date[15];
     public:
                void setReservationDetails(int seats,char f_class[],double fare,char t_date[])
               {
                   Number_of_seats=seats;
                 strcpy(Class,f_class);
                 Fare=fare;
                 strcpy(Travel_date,t_date);
               }  
                   void displayReservationDetails()
                 {
                    displayRouteDetails();
                    cout<<"Number of seats:"<<Number_of_seats<<endl;
                     cout<<" Class:"<< Class<<endl;
                    cout<<" Fare: "<<Fare<<endl;
                   cout<<"Travel date: "<<Travel_date <<endl;
                   cout<<"----------------------------------------------------------------------------------------------"<<endl;
                 }
                 char *getFlightClass()
                 {
                    return Class;
                 }
  };
  int main()
  {
     Reservation r[100];
     int n;
     cout<<"enter the number of  product:";
      cin>>n;
    
    for(int i=0;i<n;i++)
      {
          int f_no,seats;
          char f_name[50],src[50],dest[50],f_class[20],t_date[15];
          double fare;
          
          cout<<"\nenter details for reservation"<<i+1<<":\n";
          cout<<"Flight number:";
          cin>>f_no;
          cout<<"Flight name:";
          cin>>f_name;
          cout<<"Source:";
          cin>>src;
          cout<<"Destination:";
          cin>>dest;
          cout<<"Number of seats:";
          cin>>seats;
          cout<<"Flight class:";
          cin>>f_class;
          cout<<"Fare:";
          cin>>fare;
          cout<<"Travel_date:";
          cin>>t_date;
          
          r[i].setFlightDetails( f_no,f_name);
         r[i].setRouteDetails( src,dest);
         r[i].setReservationDetails(seats,f_class, fare,t_date);
         }
         cout<<"\ndisplaying allreservation:\n";
         for(int i=0;i<n;i++)
         {
             r[i].displayReservationDetails();
          }
          char query_class[20];
          cout<<"enter flight class to be search:";
          cin>>query_class;
          cout<<"\ndisplaying reservations for flight class:"<<query_class<<"\n";
          for(int i=0;i<n;i++)
          {
             if(strcmp(r[i].getFlightClass(),query_class)==0)
             {
                 r[i].displayReservationDetails();
                 }
           }
     return 0;
 }
               

