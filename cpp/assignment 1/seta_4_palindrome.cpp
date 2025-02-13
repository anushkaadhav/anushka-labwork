#include<iostream>
using namespace std;
int main()
{
  int n,rev=0,rem;
  cout<<"enter the number:";
  cin>>n;
  int temp=n;
  while(n>0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    if(temp==rev)
        cout<<"n is palindrome"<<n<<endl;
     else
       cout<<"n is not palindrome"<<n<<endl;
   return 0;
 }
       
