#include<iostream>
using namespace std;
int main()
{
   int n,i;
   cout<<"enter a number:";
   cin>>n;
   cout<<"factors of number:";
   for(i=1;i<=n;i++)
   {
      if(n%i==0)
      {
         cout<<i<<"  ";
      }
  }
  return 0;
  }
