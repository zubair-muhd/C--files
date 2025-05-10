#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    cout << "Enter:" << endl;
    cout << "1 - for coffee." << endl;
    cout << "2 - for tea." << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Your coffee is on its way. Thank you.";
    }
    else if (choice == 2)
    {
        cout << "Your tea is on its way. Thank you.";
    }
    else
    {
        cout << "You have entered the wrong option. ";
    }
    return 0;
}