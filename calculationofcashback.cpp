#include <iostream>
using namespace std;
int main()
{
    int purchase_amt;
    int cashback;
    cin >> purchase_amt;
    if (purchase_amt > 500)
    {
        cashback = purchase_amt * 5 / 100;
    }
    else
        cout << "cashback = 0" << endl;
    if (cashback > 100)
    {
        cout << "cashback = 100" << endl;
    }
    else
        cout << cashback << endl;
    return 0;
}