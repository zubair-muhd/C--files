#include <iostream>
int main()
{
    using namespace std;
    int count = 1;
    while (count < 5)
    {
        cout << "count is: " << count << endl;
        count = count + 1;
    }
    cout << "Finally, count is: " << count;
    return 0;
}