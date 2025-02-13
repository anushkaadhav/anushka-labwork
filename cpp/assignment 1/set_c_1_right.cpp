#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int n,num=1,i,j,k;
  cout<<"number of rows:";
  cin>>n;
  int space=n;
  for(i=1;i<=n;i++)
  {
      for(k=space;k>=0;k--)
        {
          cout<<"\t";
         }
         --space;
     for(j=1;j<=i;j++)
     {
         cout<<num<<"\t";
        num++;
        
        }
     
         cout<<endl;
  }
       return 0;
  }
