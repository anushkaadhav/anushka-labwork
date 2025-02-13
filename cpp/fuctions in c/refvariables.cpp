#include<iostream>
using namespace std;
int main()
{
   float total=10;
   float &sum=total;
   cout<<"total="<<total<<endl;
   cout<<"sum="<<sum<<endl;
   
   total=total+1;
   cout<<"total="<<total<<endl;
   cout<<"sum="<<sum<<endl;
   
   sum=0;
   cout<<"total="<<total<<endl;
   cout<<"sum="<<sum<<endl;
   return 0;
 }
