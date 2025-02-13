#include<iostream>
using namespace std;
int divide(int ,int);
float divide(float,float);

int main()
{
   int x=5,y=2;
   float n=5.0,m=2.0;
   cout<<divide(x,y)<<endl;
   cout<<divide(m,n)<<endl;
  // return 0;
 }
 
 int divide(int a,int b)
 {
      return(a/b);
 }
 
  float divide(float a,float b)
 {
      return(a/b);
 }
