#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Train
{
  protected:
     int Train_no;
     char Train_name[50];
     public:
       void setTrainDetails(int t_no,char t_name[])
       {
          Train_no=t_no;
          strcpy(Train_name,t_name);
        }
       void displayTrainDetails()
       {
         cout<<"Train number:"<<Train_no<<endl;
          cout<<"Train name:"<<Train_name<<endl;
         }
   };
   
   class Route:public Train
   {
       protected:
                int Route_id;
                char Source[50];
                char Destination[50];
        public:
                void setRouteDetails(int r_id,char src[],char dest[])
                 {
                     Route_id=r_id;
                       strcpy(Source,src);
                       strcpy(Destination,dest);
                  }
                   void displayRouteDetails()
                 {
                    displayTrainDetails();
                    cout<<"Route id:"<<Route_id<<endl;
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
                void setReservationDetails(int seats,char t_class[],double fare,char t_date[])
               {
                   Number_of_seats=seats;
                 strcpy(Class,t_class);
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
                 char *getTrainClass()
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
          int t_no,seats,r_id;                                                                  
          char t_name[50],src[50],dest[50],t_class[20],t_date[15];
          double fare;
          
          cout<<"\nenter details for reservation"<<i+1<<":\n";
          cout<<"train number:";
          cin>>t_no;
          cout<<"train name:";
          cin>>t_name;
          cout<<"route id:";
          cin>>r_id;
          cout<<"Source:";
          cin>>src;
          cout<<"Destination:";
          cin>>dest;
          cout<<"Number of seats:";
          cin>>seats;
          cout<<"Train class:";
          cin>>t_class;
          cout<<"Fare:";
          cin>>fare;
          cout<<"Travel_date:";
          cin>>t_date;
          
          r[i].setTrainDetails( t_no,t_name);
         r[i].setRouteDetails( r_id,src,dest);
         r[i].setReservationDetails(seats,t_class, fare,t_date);
         }
         cout<<"\ndisplaying allreservation:\n";
         for(int i=0;i<n;i++)
         {
             r[i].displayReservationDetails();
          }
          char query_class[20];
          cout<<"enter train class to be search:";
          cin>>query_class;
          cout<<"\ndisplaying reservations for train class:"<<query_class<<"\n";
          for(int i=0;i<n;i++)
          {
             if(strcmp(r[i].getTrainClass(),query_class)==0)
             {
                 r[i].displayReservationDetails();
                 }
           }
     return 0;
 }
               
