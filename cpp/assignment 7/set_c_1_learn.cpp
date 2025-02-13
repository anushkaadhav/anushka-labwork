#include<iostream>
#include<cstring>
using namespace std;

class Learn_Info
{
  protected:
     int roll_no;
     char stud_name[50];
     char stud_class[20];
     float percentage;
   public:
      Learn_Info(int r_no, const char* name, const char* s_class, float perc)
      {
         roll_no = r_no;
         strcpy(stud_name, name);
         strcpy(stud_class, s_class);
         percentage = perc;
       }
       void display_Learn_Info()
       {
         cout << "\nStudent learning information:\n";
         cout << "Roll No: " << roll_no << "\nName: " << stud_name << "\nClass: " << stud_class << "\nPercentage: " << percentage;
       }
};

class Earn_Info
{
     protected:
       int no_of_hours_worked;
       float charges_per_hour;
   public:
       Earn_Info(int hours, float charges)
       {
         no_of_hours_worked = hours;
         charges_per_hour = charges;
        }
        void display_Earn_Info()
        {
            cout << "\nStudent earning information:\n";
            cout << "Hours Worked: " << no_of_hours_worked << "\nCharges per Hour: " << charges_per_hour;
         }
};

class Earn_Learn_Info : public Learn_Info, public Earn_Info
{
       private:
         float total_money_earned;
   public:
            Earn_Learn_Info(int r_no, const char* name, const char* s_class, float perc, int hours, float charges)
            : Learn_Info(r_no, name, s_class, perc), Earn_Info(hours, charges)
            {
                total_money_earned = no_of_hours_worked * charges_per_hour;
            }
            
            void display_total_earning()
            {
             cout << "\nTotal money earned by student: Rs" << total_money_earned;
          }
};

int main()
{
    int roll_no;
    char stud_name[50], stud_class[20];
    float percentage;
    int no_of_hours_worked;
    float charges_per_hour;
   
    cout << "\nEnter roll no: ";
    cin >> roll_no;
    cout << "\nStudent name: ";
    cin >> stud_name;
    cout << "\nStudent class: ";
    cin >> stud_class;
    cout << "\nPercentage: ";
    cin >> percentage;
    cout << "\nHours worked: ";
    cin >> no_of_hours_worked;
    cout << "\nCharges per hour: ";
    cin >> charges_per_hour;
   
    Earn_Learn_Info student(roll_no, stud_name, stud_class, percentage, no_of_hours_worked, charges_per_hour);
   
    cout << "\nDisplay information:";
    student.display_Learn_Info();
    student.display_Earn_Info();
    student.display_total_earning();
   
    return 0;
}

