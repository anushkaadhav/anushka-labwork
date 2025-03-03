   #include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

class employee
{
   public:
     int eid;
     char ename[50];
     float esal;
     
     void accept()
     {
       cout<<"\nEnter employee ID: ";
       cin>>eid;
       cout<<"\nEnter employee name: ";
       cin>>ename;
       cout<<"\nEnter employee salary: ";
       cin>>esal;
     }
     
     void display()
     {
        cout<<"ID: "<<eid<<"   Name: "<<ename<<"   Salary: "<<esal<<endl;
     }
};

int main()
{
    int choice;
    while(1)
    {
        cout<<"\n1. Append employee \n2. Display employee \n3. Update employee salary \n4. Exit \nEnter your choice: ";
        cin>>choice;
        
        if(choice == 1)
        {
            ofstream out("employee.txt", ios::app);
            employee e;
            e.accept();
            out << e.eid << "   " << e.ename <<"  " << e.esal << "\n";
            out.close();
        }
        else if(choice == 2)
        {
            ifstream in("employee.txt");
            employee e;
            while(in >> e.eid >> e.ename >> e.esal)
            {
                e.display();
            }
            in.close();
        }
        else if(choice == 3)
        {
            int id;
            float newsal;
            cout<<"\nEnter employee ID to update salary: ";
            cin>>id;
            cout<<"\nEnter new salary: ";
            cin>>newsal;
            
            ifstream in("employee.txt");
            ofstream out("temp.txt");
            
            employee e;
            bool found = false;
            while(in >> e.eid >> e.ename >> e.esal)
            {
                if(e.eid == id)
                {
                    e.esal = newsal;  
                    found = true;
                }
                out << e.eid << " " << e.ename << " " << e.esal << "\n";
            }
            in.close();
            out.close();
            
            if(found)
            {
                remove("employee.txt");
                rename("temp.txt", "employee.txt");
                cout << "Salary updated successfully." << endl;
            }
            else
            {
                remove("temp.txt");
                cout << "Employee ID not found." << endl;
            }
        }
        else if(choice == 4)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    
    return 0;
}
                 
