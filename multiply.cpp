#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the  number" << endl;
    cin >> n;
    cout << "You have entered " << n << endl;
    cout << "Here is your table" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }

    return 0;
}