#include<iostream>
using namespace std;

class Fraction
{
   private:
        int numerator,denominator;
      int  findGCD(int a,int b)
     {
          while(a!=b)
           {
                 if(a>b)
                        a=a-b;
                 else
                       b=b-a;
             }
         return a;
      }
      void simplify()
    {
       int gcd=findGCD(numerator,denominator);
         numerator/=gcd;
         denominator/=gcd;
       }
       public:
          Fraction(){  }
          Fraction(int a,int b)
          {
             numerator=a;
             denominator=b;
               if(denominator==0)
             {
                  cout<<"error :denominator cannot be zero.setting to 1."<<endl;
              }
            simplify();
        }
        void display()
           {
             cout<<numerator<<"/"<<denominator;
           }
       Fraction operator++()
       {
         numerator+=denominator;
         simplify();
         return *this;
        }
        Fraction operator--()
       {
         numerator-=denominator;
         simplify();
         return *this;
        }    
        Fraction operator *(const Fraction& f)
        {
           Fraction temp;
           temp.numerator=numerator*f.numerator;
           temp.denominator=denominator*f.denominator;
           temp.simplify();
           return temp;
         }
   };
   int main()
   {
     cout<<"\nenter first fraction:";
     Fraction f1(3,19);
    
     cout<<"\nenter second fraction:";
     Fraction f2(2,15);
    
    
     cout<<"\nentered fraction:";
     cout<<"\nfraction1:";
     f1.display();
    cout<<"\nfraction 2:";
    f2.display();
    
    ++f1;
     cout<<"\nafter pre increment(f1):";
     f1.display();
    
      --f1;
     cout<<"\nafter pre decrement(f1):";
     f1.display();
     
     Fraction result=f1*f2;
     cout<<"\nmultiplication result(f1*f2):";
     result.display();
     
     return 0;
  }
    
     
