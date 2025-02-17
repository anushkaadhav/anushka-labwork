#include<iostream>
#define MAX 5
using namespace std;

class LIST
{
  public:
      virtual void store(int value)=0;
      virtual int retrieve()=0;
  };
  class stack:public LIST
  {
      private:
          int arr[MAX];
          int top;
          public:
             stack()
             {
               top=-1;
               }
          void store(int value) 
            {
                 if(top>=MAX-1)
                 {
                   cout<<"stack is full";
                   return;
                 }
                 arr[++top]=value;
                 cout<<"stored"<<value<<"in stack\n";
               }
               int retrieve()
               {
                 if(top<0)
                 {
                   cout<<"stack is empty";
                   return -1;
                 }
                 cout<<"retrieved"<<arr[top]<<"from stack\n";
                 return arr[top--];
               }
   };
   
    class queue:public LIST
  {
      private:
          int arr[MAX];
          int front,rear;
          public:
             queue()
             {
               front=-1;
               rear=-1;
               }
          void store(int value) 
            {
                 if(rear>=MAX-1)
                 {
                   cout<<"queue is full";
                   return;
                 }
                 if(front==-1) front=0;
                 arr[++rear]=value;
                 cout<<"stored"<<value<<"in queue\n";
               }
               int retrieve()
               {
                 if(front==-1 || front>rear)
                 {
                   cout<<"queue is empty";
                   return -1;
                 }
                 cout<<"retrieved"<<arr[front]<<"from queue\n";
                 return arr[front++];
               }
   };
   
   int main()
   {
       stack s;
       queue q;
       LIST* lptr;
         int choice,data,type;
         do{
               cout<<"\n choose option";
               cout<<"1.stack(lif0)\n";
               cout<<"2.queue(fifo)\n";
               cout<<"3.exit";
               
               cout<<"\nenter your choice:";
               cin>>type;
               
               if(type==1)
                   lptr=&s;
                   else if(type==2)
                      lptr=&q;
                      else if(type==3)
                      {
                          cout<<"exit";
                          break;
                       }
                       else
                       {
                          cout<<"invalid choice";
                          continue;
                       }
                       cout<<"\noperations:";
                       cout<<"\n1.store";
                       cout<<"\n2;retrive";
                       
                       cout<<"\nenter operation:";
                       cin>>choice;
                       switch(choice)
                       {
                           case 1:
                                cout<<"\nenter value to store:";
                                cin>>data;
                                lptr->store(data);
                                break;
                           case 2:
                               lptr->retrieve();
                               break;
                            default:
                               cout<<"invalid operation:";
                          }
                   } while(true);
           return 0;
  }
                   
