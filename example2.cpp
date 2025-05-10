#include <iostream>
int main()
{
    using namespace std;
    int n;
    cin >> n;
    int i = n;
    while (i % 2 == 0)
        i = i / 2;
    cout << "The number " << n << " is";
    if (i != 1)
        cout << " not";
    cout << " a power of 2";
    return 0;
}
