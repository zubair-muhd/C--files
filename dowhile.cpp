#include <iostream>
int main()
{
    using namespace std;
    int n;
    do
    {
        cout << "Please enter a positive integer: " << endl;
        cin >> n;
    } while (n <= 0);
    cout << "The entered positive number is " << n;
    return 0;
}