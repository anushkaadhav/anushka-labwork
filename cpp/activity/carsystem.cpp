#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class cartsystem
{
   int product_no;
     char product_name[50];
    float product_amount;
    char product_details[50];
    public:
  
       cartsystem()
       {
         cout<<"enter product_ no:";
               cin>>product_no;
               cout<<"enter product_name:";
               cin>>product_name;
               cout<<"enter product_amount:";
               cin>>product_amount;
               cout<<"enter product details:";
               cin>>product_details;
           }
          
          void display( )
          {
              cout<<"product_no:"<<product_no<<endl;
              cout<<"product_name:"<<product_name<<endl;
              cout<<"product_amount:"<<product_amount<<endl;
              cout<<"product_details:"<<product_details<<endl;
              
            }
           
      cartsystem(cartsystem  &c1)
       {
          product_no=c1.product_no;
           strcpy(product_name,c1.product_name);
           product_amount=c1.product_amount;
          strcpy(product_details,c1.product_details);
          }
          
 };
 
        
 int main()
 {
    int n,i;
     
     cout<<"how many record of cart system:";
     cin>>n;
    
      cartsystem c[n];
      cout<<"\ndisplay record:";
      for(i=0;i<n;i++)
      {
    
      c[i].display();
      }
      
  
      
      cartsystem c1(c[0]);
      cout<<"copy constructor object:"<<endl;
        c1.display();
      cout<<endl;
      
      return 0;
}
      
               
