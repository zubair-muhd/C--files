#include <iostream>
using namespace std;
int main()
{
    int array_size = 10;
    int *a;
    a = new int[array_size];
    int i;
    for ( i = 0; i < array_size; i++)
    {
        a[i] = i;
        while (*a < 9)
        {
            a++;
            cout << *a << " "; 
        }
        cout << endl;
    }
    return 0;
}