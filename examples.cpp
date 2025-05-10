#include <iostream>

void swapValue(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortValues(int& num1, int& num2, int& num3) {
    std::cout << "Before sorting: " << num1 << ", " << num2 << ", " << num3 << std::endl;

    if (num1 < num2) {
        swapValue(num1, num2);
    }
    if (num1 < num3) {
        swapValue(num1, num3);
    }
    if (num2 < num3) {
        swapValue(num2, num3);
    }

    std::cout << "After sorting: " << num1 << ", " << num2 << ", " << num3 << std::endl;
}

// Test the sortValues function
int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 15;

    sortValues(num1, num2, num3);

    return 0;
}
