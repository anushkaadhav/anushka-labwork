#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,rem;

    cout << "Enter the number : ";
    cin >> n;

        cout << "Your number: " << n << endl;

    while(n!=0)
    {
        rem = n%10;
        sum = sum+ rem;
        n= n/10;
    }

    cout << "sum of digit anumber: " << sum << endl;

    return 0;
}
