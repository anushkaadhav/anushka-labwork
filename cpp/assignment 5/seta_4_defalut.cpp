#include<iostream>
using namespace std;
int calculate(int p,int n=10,int r=7)
{
  return (p*n*r)/100;
}

int main()
{
   int principal,years,rate;
   cout<<"enter principal amount:";
   cin>>principal;
   cout<<"do you want to provide values of years and rate:";
   char choice;
   cin>>choice;
     if(choice=='y'||choice=='Y')
        {
            cout<<"enter the numbers of years:";
            cin>>years;
            cout<<"enter rate:";
            cin>>rate;
            cout<<"the SI is:"<<calculate(principal,years,rate)<<endl;
        }
     else
     {
       cout<<"the SI is( using default values):"<<calculate(principal)<<endl;
      }
      return 0;
 } 
