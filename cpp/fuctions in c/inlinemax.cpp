#include<iostream>
using namespace std;
inline int max(int x, int y)
{
   return x>y?x:y;
 }
 
 int main()
 {
   cout<<max(10,20)<<endl;
   
   cout<<max(99,88);
   return 0;
  }
