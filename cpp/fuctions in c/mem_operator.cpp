#include<iostream>
using namespace std;
int main()
{
  int *p=new int[5];
  for(int i=0;i<5;i++)
  {
    cout<<"enter element:";
    cin>>p[i];
   }
  for(int i=0;i<5;i++)
  cout<<"\np="<<p[i];
  delete []p;
  for(int i=0;i<5;i++)
  cout<<"\np="<<p[i];
  return 0;
}
