#include<iostream>
using namespace std;

class Fraction
{
   private:
        int numerator,denominator;
        void simplify();
        static int findGCD(int a,int b);
        
    public:
       Fraction operator++();
       Fraction operator++(int);
       friend istream&  operator>>(istream &in,Fraction &f);
       friend ostream& operator<<(ostream &out,const Fraction &f);
};
void Fraction::simplify()
{
  int gcd=findGCD(numerator,denominator);
         numerator/=gcd;
         denominator/=gcd;
}
int Fraction::findGCD(int a,int b)
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
 Fraction Fraction::operator++()
 {
    numerator +=denominator;
    simplify();
    return *this;
 }
 Fraction Fraction::operator++(int)
 {
    Fraction temp=*this;
    numerator+=denominator;
    simplify();
    return temp;
  }
  istream& operator>>(istream &din,Fraction &f)
  {
     cout<<"enter numerator:";
     din>>f.numerator;
     cout<<"\nenter denominator:";
     din>>f.denominator;
     if(f.denominator==0)
     {
        cout<<"error :denominator cannot be zero.setting to 1."<<endl;
      }
      f.simplify();
      return din;
 }
 ostream& operator<<(ostream &dout,const Fraction &f)
 {
    dout<<f.numerator<<"/"<<f.denominator;
    return dout;
  }
  int main()
  {
    Fraction f1,f2;
    cout<<"\nenter fraction 1:";
    cin>>f1;
    cout<<"\nenter fraction 2:";
    cin>>f2;
    
    cout<<"\nfraction1:"<<f1<<endl;
    cout<<"\nfraction 2:"<<f2<<endl;
    
    ++f1;
     cout<<"\nafter pre increment(f1):"<<f1<<endl;
     
     f2++;
     cout<<"\nafter post increment(f2):"<<f2<<endl;       
        
        return 0;
 }
       
       
       
       
       
       
