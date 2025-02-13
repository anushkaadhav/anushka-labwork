#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Student
{
     protected:
        int Roll_no;
        char S_name[30];
       public:
           void setStudentDetails(int rno,char name[])
           {
               Roll_no=rno;
               strcpy(S_name,name);
           }
           void displayStudentDetails()
           {
              cout<<left<<setw(10)<<Roll_no<<setw(20)<<S_name;
           }
};
class Theory:virtual public Student
{
    protected:
        int Thery_Marks[5];
        public:
           void setTheoryMarks(int marks[])
          {
             for(int i=0;i<5;i++)
                 Thery_Marks[i]=marks[i];
             }
           void displayTheoryMarks()
           {
               for(int i=0;i<5;i++)
                cout<<left<<setw(8)<<Thery_Marks[i];
             }
             int getTotalTheoryMarks()
             {
                int total=0;
                   for(int i=0;i<5;i++)
                total=total+ Thery_Marks[i];
                return total;
              }
};
  class Practical:virtual public Student
{
    protected:
        int Practical_Marks[2];
        public:
           void setPracticalMarks(int marks[])
          {
             for(int i=0;i<2;i++)
                 Practical_Marks[i]=marks[i];
             }
           void displayPracticalMarks()
           {
               for(int i=0;i<2;i++)
                cout<<left<<setw(8)<<Practical_Marks[i];
             }
             int getTotalPracticalMarks()
             {
                int total=0;
                   for(int i=0;i<2;i++)
                total=total+ Practical_Marks[i];
                return total;
              }
};   
  class Result:public Theory,public Practical
  {
    int Total_marks;
    char Class[20];
    public:
      void calculateResult()
      {
        Total_marks=getTotalTheoryMarks()+getTotalPracticalMarks();
        if(Total_marks>=400)
            strcpy(Class,"Distinction");
         else if(Total_marks>=300)
              strcpy(Class,"first class");
         else 
            strcpy(Class,"second class");
         }
         void displayResult()
         {
            displayStudentDetails();
            displayTheoryMarks();
            displayPracticalMarks();
            cout<<left<<setw(10)<<Total_marks<<setw(15)<<Class<<endl;
          }
 };
       int main()
       {
         Result r[100];
           int n;
           cout<<"\nenter number of student:";
           cin>>n;
           for(int i=0;i<n;i++)
           {
              int rollno,theory_Marks[5],practical_Marks[2];
              char name[50];
              
              cout<<"\nenter details for student:<<i+1";
              cout<<"\nrollno:";
              cin>>rollno;
              cout<<"name:";
              cin>>name;
              cout<<"enter 5  theroy subject subject marks:";
              for(int j=0;j<5;j++)
                cin>>theory_Marks[j];
                 cout<<"enter 2  pratical subject subject marks:";
              for(int j=0;j<2;j++)
                cin>>practical_Marks[j];
                
                r[i]. setStudentDetails( rollno,name);
                r[i].setTheoryMarks(theory_Marks);
                r[i].setPracticalMarks(practical_Marks);
                r[i].calculateResult();
               }
              cout<<"\nmaster table:\n";
              cout<<left<<setw(10)<<"Rollno"<<setw(20)<<"name"<<setw(8)<<"T1"<<setw(8)<<"T2"<<setw(8)<<"T3"<<setw(8)<<"T4"<<setw(8)<<"T5"
              <<setw(8)<<"P1"<<setw(8)<<"P2"<<setw(10)<<"Total"<<setw(15)<<"class"<<endl;
              cout<<string(120,'-')<<endl;
              
              for(int i=0;i<n;i++)
               r[i].displayResult();
               return 0;
         }
              
           
                
