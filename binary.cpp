#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int binaryNumber, decimalNumber = 0, remainder, base = 1;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber = decimalNumber + remainder * base;
        base = base * 2;
        binaryNumber = binaryNumber / 10;
    }

    cout << "The decimal equivalent of the binary number is: " << decimalNumber << endl;

    return 0;
}