#include<iostream>
using namespace std;
class student
{
   protected:
         string name;
         int rollno;
         
     public:
         virtual void accept()=0;
         virtual void display()=0;
};
class engineering:public student
{
   private:
       string branch;
       public:
          void accept()
          {
             cout<<"enter engineering student name:";
             cin>>name;
             cout<<"enter roll no:";
             cin>>rollno;
             cout<<"enter branch:";
             cin>>branch;
           }
           void display()
           {
              cout<<"engineering student-name:"<<name<<",roll no:"<<rollno<<",branch:"<<branch<<endl;
            }
};
class medicine:public student
{
   private:
       string specialization;
       public:
          void accept()
          {
             cout<<"enter madicine student -name:";
             cin>>name;
             cout<<"enter roll no:";
             cin>>rollno;
             cout<<"enter specialization:";
             cin>>specialization;
           }
           void display()
           {
              cout<<"medicine student-name:"<<name<<",roll no:"<<rollno<<",specialization:"<<specialization<<endl;
            }
};
class science:public student
{
   private:
       string field;
       public:
          void accept()
          {
             cout<<"enter science student name:";
             cin>>name;
             cout<<"enter roll no:";
             cin>>rollno;
             cout<<"enter field:";
             cin>> field;
           }
           void display()
           {
              cout<<"engineering student-name:"<<name<<",roll no:"<<rollno<<", field:"<< field<<endl;
            }
};
int main()
{
   int num;
   cout<<"enter the number of students:";
   cin>>num;
   student* s[num];
   int choice;
   
   for(int i=0;i<num;i++)
   {
       cout<<"\nselect student type(1:eng,2:med,3:sci):";
       cin>>choice;
       if(choice==1)
          s[i]=new engineering();
        else if(choice==2)
          s[i]=new medicine();
          else if(choice==3)
          s[i]=new science();
          else
            {
               cout<<"invalid choice.";
               i--;   //retry for same index
               continue;
             }
             s[i]->accept();
    }
    cout<<"\nlist of student:\n";
    for(int i=0;i<num;i++)
    {
       s[i]->display();
       delete s[i];
       }
       
       return 0;
 }
       

        
        
