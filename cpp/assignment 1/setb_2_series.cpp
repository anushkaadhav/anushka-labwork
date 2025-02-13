#include<iostream>
using namespace std;
int main()
{
   int i,j,n;
   cout<<"enter value of n:";
   cin>>n;
   int totalsum=0;
   int partialsum=0;
   for(i=1;i<=n;++i)
   {
     for(j=1;j<=n;++j)
     {
        partialsum=partialsum+j;
     }
      totalsum=totalsum+partialsum;
   }
   cout<<"the sum of series:"<<totalsum<<endl;
   return 0;
}   
         
        
     
