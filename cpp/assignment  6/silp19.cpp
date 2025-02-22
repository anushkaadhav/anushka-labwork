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
             
            
