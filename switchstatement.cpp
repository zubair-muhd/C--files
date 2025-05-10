#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout << "do you have 1 or 2 phones?" << endl;
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "you have 1 phone" << endl;
        break;
    case 2:
        cout << "you have 2 phones" << endl;
    default:
        cout << "i don't know how many phones you have" << endl;
        break;
        return 0;
    }
}