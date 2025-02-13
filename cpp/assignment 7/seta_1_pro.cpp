#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class product
{
  protected:
     int product_id;
     char product_name[50];
     double Price;
     public:
       void setProductDetails(int id,char name[],double price)
       {
          product_id=id;
          strcpy(product_name,name);
          Price=price;
        }
       void displayProductDetails()
       {
         cout<<left<<setw(10)<<product_id<<setw(20)<<product_name<<setw(10)<<fixed<<setprecision(2)<<Price;
         }
         double getPrice()
         {
           return Price;
          }
   };
   class Discount:public product
{
  private:
      double Discount_In_percentage;
     public:
       void setDiscount(double discount)
       {
           Discount_In_percentage=discount;
        }
       void displayDiscountDetails()
       {
         double discount_Amount=Price*Discount_In_percentage/100;
         double FinalPrice=Price-discount_Amount;
         displayProductDetails();
           cout<<setw(10)<<Discount_In_percentage<<setw(10)<<discount_Amount<<setw(10)<< FinalPrice<<endl;
         }
         double getDiscountAmount()
         {
           return Price*Discount_In_percentage/100;;
          }
   };
   int main()
   {
      Discount d[100];
      int n;
      cout<<"enter the number of  product:";
      cin>>n;
      double total_price=0,total_discount=0;
      
      for(int i=0;i<n;i++)
      {
          int id;
          char name[50];
          double price,discount;
          
          cout<<"\nenter details for product"<<i+1<<":\n";
          cout<<"product id:";
          cin>>id;
          cout<<"product name:";
          cin>>name;
          cout<<"product price:";
          cin>>price;
          cout<<"discount:";
          cin>>discount;
          
          d[i].setProductDetails(id,name,price);
          d[i].setDiscount(discount);
          
          total_price+=d[i].getPrice();
          total_discount+=d[i].getDiscountAmount();
        }
      cout<<"Bill summary:\n";
      cout<<left<<setw(10)<<"prod_id"<<setw(20)<<"prod_name"<<setw(10)<<"price"<<setw(10)<<"Disc %"<<setw(10)<<"final price"<<endl;
      cout<<string(70,'-')<<endl;
      
      for(int i=0;i<n;i++)
        d[i].displayDiscountDetails();
       cout<<string(70,'-')<<endl;
       cout<<right<<setw(40)<<"Total price:"<<setw(10)<<fixed<<setprecision(2)<<total_price<<endl;
        cout<<right<<setw(40)<<"Total discount:"<<setw(10)<<total_discount<<endl;
      cout<<right<<setw(40)<<"Amount payable:"<<setw(10)<<(total_price-total_discount)<<endl;
      
      return 0;
 }
      
      
      
