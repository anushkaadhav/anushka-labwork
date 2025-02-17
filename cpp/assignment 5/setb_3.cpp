#include <iostream>
#include <string>
using namespace std;

class Telephone 
{
    private:
        string name;
        string phoneNumber;
        string city;
    public:
        Telephone(string n, string p, string c)
        {
            name = n;
            phoneNumber = p; 
            city = c;
        }

        void searchByName(string n)
         {
            if (name == n) 
            {
                cout << "Found: " << name << ", " << phoneNumber << ", " << city << endl;
            }
        }

        void searchByNumber(string p)
         {
            if (phoneNumber == p)
             {
                cout << "Found: " << name << ", " << phoneNumber << ", " << city << endl;
            }
        }

        void searchByCity(string c)
         {
            if (city == c)
             {
                cout << "Found: " << name << ", " << phoneNumber << endl;
            }
        }

        string getCity()
         {
            return city;
        }

        void displayContact() 
        {
            cout << "Name: " << name << ", Phone: " << phoneNumber << ", City: " << city << endl;
        }
};

int main()
{
    Telephone contacts[] =
     {
        Telephone("anushka adhav", "8767032581", "shikrapur"),
        Telephone("malhar sinalkar", "9123456789", "Mumbai"),
        Telephone("avi adhav", "9921727650", "shikrapur")
    };

    // Display all contacts
    cout << "Contacts List:\n";
    for (int i = 0; i < 3; i++) 
    {
        contacts[i].displayContact();
    }

    int choice;
    string input;

    do {
        cout << "\nMenu:\n";
        cout << "1. Search by Name\n";
        cout << "2. Search by Phone Number\n";
        cout << "3. Search by City\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
         {
            case 1:
                cout << "Enter name to search: ";
                cin >> input;
                for (int i = 0; i < 3; i++)
                 {
                    contacts[i].searchByName(input);
                }
                break;

            case 2:
                cout << "Enter phone number to search: ";
                cin >> input;
                for (int i = 0; i < 3; i++) 
                {
                    contacts[i].searchByNumber(input);
                }
                break;

            case 3:
                cout << "Enter city to search: ";
                cin >> input;
                cout << "Customers in " << input << ":" << endl;
                for (int i = 0; i < 3; i++) 
                {
                    if (contacts[i].getCity() == input) 
                    {
                        contacts[i].searchByCity(input);
                    }
                }
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
