#include<iostream>
using namespace std;
int main()
{
  int a,b,result;
  cout<<"enter a :";
  cin>>a;
  cout<<"enterb:";
  cin>>b;
  char op;
  cout<<"enter the operator like +,-,*,/:";
   cin>>op;
  switch(op)
  {
     case  '+': result=a+b;
                    cout<<"result is "<<result<<endl;
                    break;
     case  '-': result=a-b;
                    cout<<"result is "<<result<<endl;
                    break;
     case  '*': result=a*b;
                    cout<<"result is "<<result<<endl;
                    break;
     case  '/': result=a/b;
                    cout<<"result is "<<result<<endl;
                    break;
     default: cout<<"invalid operator"<<endl;
     }
   return 0;
 }
 
