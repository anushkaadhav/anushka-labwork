#include<iostream>
using namespace std;
int divide(int a, int b=2);

int main()
{
   cout<<divide(12);
   cout<<endl;
   cout<<divide(20,4)<<endl;
   return 0;
 }
 
 int divide(int a,int b)
 {
   int p;
   p=a/b;
   return(p);
 }
