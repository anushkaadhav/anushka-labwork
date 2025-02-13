#include<iostream>
using namespace std;
int &max(int &,int &);

int main()
{
    int a,b;
    cout<<"enter a and b value:";
    cin>>a>>b;
    max(a,b)=-1;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
 }
 
 int &max(int &a,int &b)
 {
      if(a>b)
            return a;
     else
           return b;
}
