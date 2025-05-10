#include <iostream>
using namespace std;

void showResults(double f_degrees) {
    double c_degrees = (f_degrees - 32) * 5.0 / 9.0;
    cout << f_degrees << " degrees Fahrenheit is equivalent to " << endl;
    cout << c_degrees << " degrees Celsius." << endl;
}

int main() {
    showResults(32.0); // Example with freezing point
    return 0;
}