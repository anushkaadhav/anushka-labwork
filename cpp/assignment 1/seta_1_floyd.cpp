#include<iostream>
using namespace std;
int main()
{
  int n,num=1,i,j;
  cout<<"number of rows:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=i;j++)
     {
        cout<<num;
        num++;
        }
        cout<<endl;
        }
        
       return 0;
  }
