#include <iostream>

using namespace std;

int main () {
    int a, b;
    cout << "Enter two values" << endl;
    cin >> a >> b;

    cout << "Before swapping" << endl;
    cout << "a" << a << "b" << b << endl;

    b = (a*b)/(a=b);

    cout << "after swapping" << endl;
    cout << "a" << a << "b" << b << endl;
    delay(5000);


    return 0;
}
