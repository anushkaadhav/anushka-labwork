#include<iostream>
using namespace std;
int add(int x,int y=5,int z=10)
{
    return x+y+z;
  }

 int main()
{
  cout<<"result 1:"<<add(3)<<endl;                 //y=5,z=10
  cout<<"result 2:"<<add(3,7)<<endl;             //z=10
  cout<<"result 3:"<<add(3,7,15)<<endl;
   return 0;
 }

