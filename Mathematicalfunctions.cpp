#include <iostream> // this line may be placed second instead of first
#include <cmath>    // this line may be placed first instead of second
using namespace std;

int main()
{
    int height;
    double time;

    height = 800;
    time = sqrt(2 * height / 32.2);
    cout << "It will take " << time << " seconds "
         << "to fall " << height << " feet.\n";

    return 0;
}
