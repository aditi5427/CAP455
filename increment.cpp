#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // double a;
    // cout << "Enter number: " << endl;
    // cin >> a;

    // cout << fixed << setprecision(2) << a << endl;

    // return 0;

    double r;
    cout << "Enter radius: " << endl;
    cin >> r;

    double area = 3.14 * r * r;
    cout << fixed << setprecision(2) << area << endl;
}