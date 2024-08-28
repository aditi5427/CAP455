// Write a program to give a discount of 10% if the total bill amount exceeds 1000.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your total price of goods" << endl;
    cin >> n;

    if (n >= 1000)
    {
        cout << "you get a discount of 10%" << endl;
    }
    else
    {
        cout << "You don't get a discount" << endl;
    }
    return 0;
}