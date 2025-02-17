#include<iostream>
using namespace std;

class Employee
{
  private:
     float salary;
   public:
       Employee(float s)
       {
             salary=s;
        }
        void display()
        {
           cout<<"salary:"<<salary<<endl;
         }
         Employee operator--()
         {
            --salary;
            return *this;
         }
         Employee operator--(int)
         { 
            Employee temp=*this;
            salary--;
            return temp;
          }
 };
 int main()
 {
    Employee emp(45600);
    cout<<"\norginal:";
    emp.display();
    
    --emp;
    cout<<"\nafter pre increment:";
    emp.display();
    
    emp--;
    cout<<"\nafter post increment:";
    emp.display();
    
    return 0;
}
    
      
