#include <iostream>
using namespace std;
int main()
{
    int ival = 50;
    int *p = &ival;    // p holds the address of ival; p is a pointer to ival
    cout << p << endl;         // gives the address held in pointer p
    cout << *p << endl;   // gives the value that is stored in the address pointed by p
    return 0;
}