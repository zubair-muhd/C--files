#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int a;
    cout <<“ Enter the year”;
    cin >> a;
    if (IsLeapYear(a))

        cout << a <<“ is a leap year”<< endl;

    else

        cout << a <<“ is not a leap year”<< endl;
    return0;
}