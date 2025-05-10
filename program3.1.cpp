// this program calculates the area of a rectangle
// given its length and width

#include <iostream>
using namespace std;

int main()
{
    double length, width, area;

    length = 27.2;
    width = 13.6;
    area = length * width;
    cout << "The length of a rectangle is " << length << endl;
    cout << "The width of the rectangle is " << width << endl;
    cout << "The area of the rectangle is " << area << endl;

    return 0;
}