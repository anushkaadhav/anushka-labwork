#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    if (num % 2 == 0)
    cout << "The Number: "  << num << " is Even." << endl;
    else
    cout << "The Number: "  << num << " is Odd." << endl;

    return 0;
}
