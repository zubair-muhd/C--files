#include <iostream>
int main()
{
    using namespace std;
    int n;
    long fact = 1;
    cin >> n;
    for (int i = n; i > 0; i--)
        fact = fact * i;
    cout << n << "! = " << fact;
    return 0;
}